#ifndef DOCK_PACKAGE_GROUP_H
#define DOCK_PACKAGE_GROUP_H

#include "ui_package.h"

#include "pagegroupbase.h"

class PackageGroup : public PageGroupBase
{
   Q_OBJECT
   public:
       PackageGroup(QWidget* parent = NULL);
       virtual ~PackageGroup();

       virtual void setCurrentObject(UMLObject* o);

       virtual void focusName();

    private:
        Ui_PackageTabGroup* ui;

};

#endif
