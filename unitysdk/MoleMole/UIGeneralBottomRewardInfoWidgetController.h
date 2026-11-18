#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class KOIDMLPJGML;
class LICJOCMCPAG;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_KOIDHIAEOAK_OFFSET UNITYSDK_OFFSET(0x180A57D0)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x180A4B70)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x180A4C00)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x180A49A0)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x180A4B00)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x180A4CF0)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x180A4C80)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_SETQUESTFIRSTREWARD_OFFSET UNITYSDK_OFFSET(0x180A5240)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x180A54B0)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x180A5590)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x180A5620)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x180A56B0)
#define MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x180A5740)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBottomRewardInfoWidgetController_TypeDefinitionIndex = 76759;

	class UIGeneralBottomRewardInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 EJIPKLJOPCK = 0x8; // 0x0
		::LICJOCMCPAG* _view; // 0x2C8
		::System::Action* FBEBEHNGDPG; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* DBJBBPOFHKM; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Collections::Generic::List_1<::System::Object*>* itemList, ::System::Action* onClick, ::System::Int32 maxShowCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemList, onClick, maxShowCnt);
		}

		::System::Void SetQuestFirstReward(::System::Int32 questID, ::System::Action* overrideClickkAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_SETQUESTFIRSTREWARD_OFFSET))(this, questID, overrideClickkAction);
		}

		::System::Void RefreshView_1(::System::Collections::Generic::List_1<::System::Object*>* itemList, ::System::Action_1<::KOIDMLPJGML*>* onSetView, ::System::Action* onClick, ::System::Int32 maxShowCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Action_1<::KOIDMLPJGML*>*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, itemList, onSetView, onClick, maxShowCnt);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void KOIDHIAEOAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMREWARDINFOWIDGETCONTROLLER_KOIDHIAEOAK_OFFSET))(this);
		}
	};
}
