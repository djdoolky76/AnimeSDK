#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonsterCardInfoPopWindowController.h"

class HFFMEGPMJNE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_GETBOSSLEVEL_OFFSET UNITYSDK_OFFSET(0x193B1390)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_GETHOLLOWMONSTERIDLIST_OFFSET UNITYSDK_OFFSET(0x193B12D0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x193B0DB0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x193B0EB0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_UPDATEBOSSCFGLIST_OFFSET UNITYSDK_OFFSET(0x193B1040)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM__CTOR_OFFSET UNITYSDK_OFFSET(0x193B13E0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM___BASE_GETBOSSLEVEL_OFFSET UNITYSDK_OFFSET(0x193B13F0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x193B1480)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x193B1550)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM___BASE_UPDATEBOSSCFGLIST_OFFSET UNITYSDK_OFFSET(0x193B1560)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardInfoPopWindowController_Custom_TypeDefinitionIndex = 69245;

	class UIMonsterCardInfoPopWindowController_Custom : public ::MoleMole::UIMonsterCardInfoPopWindowController
	{
	public:
		::HFFMEGPMJNE* _view; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void UpdateBossCfgList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_UPDATEBOSSCFGLIST_OFFSET))(this);
		}

		::System::Int32 GetBossLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_GETBOSSLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetHollowMonsterIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_GETHOLLOWMONSTERIDLIST_OFFSET))(this);
		}

		::System::Int32 __base_GetBossLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM___BASE_GETBOSSLEVEL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_UpdateBossCfgList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM___BASE_UPDATEBOSSCFGLIST_OFFSET))(this);
		}
	};
}
