#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNFNAFKBHBN.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Foundation/AssetPath.h"

class ALLHKDOEKBK;
class MonoUITableScrollV2;
namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x199D7D50)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_CREATEWIDGET_OFFSET UNITYSDK_OFFSET(0x199D7ED0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x199D7CE0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x199D7D20)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_REDDOTINFO_OFFSET UNITYSDK_OFFSET(0x199D7D30)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x199D7C40)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_SET_CREATEWIDGET_OFFSET UNITYSDK_OFFSET(0x199D7EE0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_SET_REDDOTINFO_OFFSET UNITYSDK_OFFSET(0x199D7D40)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_SHOWTAB_OFFSET UNITYSDK_OFFSET(0x199D7EF0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x199D8410)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookPrimerWidgetController_TabItem_TypeDefinitionIndex = 91320;

	class UIHandBookPrimerWidgetController_TabItem : public ::System::Object
	{
	public:
		::MoleMole::UIBaseController* _controller; // 0x10
		::Il2CppArray<::MonoUITableScrollV2*>* _cachedScrolls; // 0x18
		::System::Func_1<::MoleMole::UIBaseController*>* _CreateWidget_k__BackingField; // 0x20
		::ALLHKDOEKBK* entryTemplate; // 0x28
		::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> _RedDotInfo_k__BackingField; // 0x30
		::System::Boolean _isFirstShow; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM__CTOR_OFFSET))(this);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_TITLE_OFFSET))(this);
		}

		::Foundation::AssetPath get_IconPath()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_ICONPATH_OFFSET))(this);
		}

		::BNFNAFKBHBN get_IconType()
		{
			return ((::BNFNAFKBHBN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_ICONTYPE_OFFSET))(this);
		}

		::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> get_RedDotInfo()
		{
			return ((::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_REDDOTINFO_OFFSET))(this);
		}

		::System::Void set_RedDotInfo(::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_SET_REDDOTINFO_OFFSET))(this, value);
		}

		::MoleMole::UIBaseController* get_Controller()
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_CONTROLLER_OFFSET))(this);
		}

		::System::Func_1<::MoleMole::UIBaseController*>* get_CreateWidget()
		{
			return ((::System::Func_1<::MoleMole::UIBaseController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_CREATEWIDGET_OFFSET))(this);
		}

		::System::Void set_CreateWidget(::System::Func_1<::MoleMole::UIBaseController*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_SET_CREATEWIDGET_OFFSET))(this, value);
		}

		::System::Void ShowTab(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_SHOWTAB_OFFSET))(this, isInit);
		}
	};
}
