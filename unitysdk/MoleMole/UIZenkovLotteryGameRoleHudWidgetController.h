#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class JNBJKOKCBOF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIZenkovLotteryGameRoleHudWidgetControllerContext; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12FAA570)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12FAA600)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12FAA030)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12FAA240)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x12FAA2B0)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FAA8A0)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12FAA840)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12FAA900)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12FAA990)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12FAAA20)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12FAAAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLotteryGameRoleHudWidgetController_TypeDefinitionIndex = 47916;

	class UIZenkovLotteryGameRoleHudWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_ABOMLMHOJLP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovLotteryGameRoleHudWidgetController_TypeDefinitionIndex)->GetStaticField(0x12EC0);
		}
		static ::System::Int32* StaticGet_DEFALGEPIPM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovLotteryGameRoleHudWidgetController_TypeDefinitionIndex)->GetStaticField(0x12EC4);
		}
		static ::System::Int32* StaticGet_OBBPALPPODG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovLotteryGameRoleHudWidgetController_TypeDefinitionIndex)->GetStaticField(0x12EC8);
		}
		::UnityEngine::Material* KIDIEPJJLHE; // 0x2C8
		::JNBJKOKCBOF* _view; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void Refresh(::MoleMole::UIZenkovLotteryGameRoleHudWidgetControllerContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovLotteryGameRoleHudWidgetControllerContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_REFRESH_OFFSET))(this, context);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
