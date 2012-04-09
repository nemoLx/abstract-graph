/**
 * Application: AbstractGraph
 * Module: GUI
 * File: NodeOptionsMenu.h
 * Description: Interface for the Node options menu
 *
 * @author Dennis J. McWherter, Jr.
 * @version $Id$
 */

#ifndef MENUS_NODEOPTIONSMENU_H__
#define MENUS_NODEOPTIONSMENU_H__

#include <QtGui/QMenu>

class GLWindow;

/**
 * NodeOptionsMenu
 *
 * The right-click pop-up menu which provides
 * actions for nodes
 */
class NodeOptionsMenu : public QMenu
{
  Q_OBJECT
public:
  /**
   * Constructor
   *
   * @param parent    Parent widget
   */
  NodeOptionsMenu(GLWindow* parent);
  
  /**
   * Destructor
   */
  virtual ~NodeOptionsMenu();
  
  /**
   * Enable/disable menu items
   *
   * @param selected    Determine whether items are selected or not
   */
  virtual void updateMenuItems(bool selected);
  
private:
  /**
   * Initialize menu actions
   */
  void init();
  
  QAction* label;
  QAction* del;
};

#endif /* MENUS_NODEOPTIONSMENU_H__ */
