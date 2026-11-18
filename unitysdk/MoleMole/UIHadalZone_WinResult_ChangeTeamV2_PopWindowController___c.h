#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHADALZONE_WINRESULT_CHANGETEAMV2_POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197719D0)
#define MOLEMOLE_UIHADALZONE_WINRESULT_CHANGETEAMV2_POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19771A10)
#define MOLEMOLE_UIHADALZONE_WINRESULT_CHANGETEAMV2_POPWINDOWCONTROLLER___C__ONUIOPEN_B__5_1_OFFSET UNITYSDK_OFFSET(0x19771A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_WinResult_ChangeTeamV2_PopWindowController___c_TypeDefinitionIndex = 54240;

	class UIHadalZone_WinResult_ChangeTeamV2_PopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_WinResult_ChangeTeamV2_PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EEF0);
		}
		static ::System::Action** StaticGet___9__5_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_WinResult_ChangeTeamV2_PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EEF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_WINRESULT_CHANGETEAMV2_POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_WINRESULT_CHANGETEAMV2_POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_WINRESULT_CHANGETEAMV2_POPWINDOWCONTROLLER___C__ONUIOPEN_B__5_1_OFFSET))(this);
		}
	};
}
