#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNFNAFKBHBN.h"
#include "unitysdk/JMKLPPGLKJJ.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Foundation/AssetPath.h"

class AKNNIKCLGMD;
class ALLHKDOEKBK;
namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_CHECKCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x18299C30)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_CHECKREWARDBUFF_OFFSET UNITYSDK_OFFSET(0x18299DF0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GETREWARDBUFFGAMETAG_OFFSET UNITYSDK_OFFSET(0x18299D80)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x18299560)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_CREATEWIDGET_OFFSET UNITYSDK_OFFSET(0x182996E0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x182994F0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x18299530)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_REDDOTINFO_OFFSET UNITYSDK_OFFSET(0x18299540)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_REWARDBUFF_OFFSET UNITYSDK_OFFSET(0x18299700)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x18299450)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_SET_CREATEWIDGET_OFFSET UNITYSDK_OFFSET(0x182996F0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_SET_REDDOTINFO_OFFSET UNITYSDK_OFFSET(0x18299550)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_SET_REWARDBUFF_OFFSET UNITYSDK_OFFSET(0x18299710)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_SHOWTAB_OFFSET UNITYSDK_OFFSET(0x18299720)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18299F90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookManualWidgetController_TabItem_TypeDefinitionIndex = 66944;

	class UIHandBookManualWidgetController_TabItem : public ::System::Object
	{
	public:
		::AKNNIKCLGMD* _RewardBuff_k__BackingField; // 0x10
		::MoleMole::UIBaseController* _controller; // 0x18
		::System::Func_1<::MoleMole::UIBaseController*>* _CreateWidget_k__BackingField; // 0x20
		::ALLHKDOEKBK* entryTemplate; // 0x28
		::System::Boolean IsLocked; // 0x30
		::System::Boolean _isFirstShow; // 0x31
		::System::Byte _padding0[0x2];
		::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> _RedDotInfo_k__BackingField; // 0x34
		::System::Byte _padding1[0x4];
		::System::Int64 EndTimeStamp; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM__CTOR_OFFSET))(this);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_TITLE_OFFSET))(this);
		}

		::Foundation::AssetPath get_IconPath()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_ICONPATH_OFFSET))(this);
		}

		::BNFNAFKBHBN get_IconType()
		{
			return ((::BNFNAFKBHBN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_ICONTYPE_OFFSET))(this);
		}

		::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> get_RedDotInfo()
		{
			return ((::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_REDDOTINFO_OFFSET))(this);
		}

		::System::Void set_RedDotInfo(::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_SET_REDDOTINFO_OFFSET))(this, value);
		}

		::MoleMole::UIBaseController* get_Controller()
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_CONTROLLER_OFFSET))(this);
		}

		::System::Func_1<::MoleMole::UIBaseController*>* get_CreateWidget()
		{
			return ((::System::Func_1<::MoleMole::UIBaseController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_CREATEWIDGET_OFFSET))(this);
		}

		::System::Void set_CreateWidget(::System::Func_1<::MoleMole::UIBaseController*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_SET_CREATEWIDGET_OFFSET))(this, value);
		}

		::AKNNIKCLGMD* get_RewardBuff()
		{
			return ((::AKNNIKCLGMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_REWARDBUFF_OFFSET))(this);
		}

		::System::Void set_RewardBuff(::AKNNIKCLGMD* value)
		{
			return ((::System::Void(*)(::PVOID, ::AKNNIKCLGMD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_SET_REWARDBUFF_OFFSET))(this, value);
		}

		::System::Void ShowTab(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_SHOWTAB_OFFSET))(this, isInit);
		}

		::System::Void CheckCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_CHECKCOUNTDOWN_OFFSET))(this);
		}

		::JMKLPPGLKJJ GetRewardBuffGameTag()
		{
			return ((::JMKLPPGLKJJ(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GETREWARDBUFFGAMETAG_OFFSET))(this);
		}

		::System::Void CheckRewardBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_CHECKREWARDBUFF_OFFSET))(this);
		}
	};
}
