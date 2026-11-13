#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class InputDataController; }

#define RPG_CLIENT_UIUTILS___C__DISPLAYCLASS67_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBC1E00)
#define RPG_CLIENT_UIUTILS___C__DISPLAYCLASS67_0__SUSPENDUICAMERAINPUT_B__0_OFFSET UNITYSDK_OFFSET(0x1DBC2610)

namespace RPG::Client
{
	inline static constexpr unsigned int UIUtils___c__DisplayClass67_0_TypeDefinitionIndex = 75303;

	class UIUtils___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::RPG::Client::AdventurePhase* phase; // 0x10
		::RPG::Client::InputDataController* inputController; // 0x18
		::System::Boolean restored; // 0x20
		::System::Boolean zoomEnabled; // 0x21
		::System::Boolean rotationEnabled; // 0x22
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS___C__DISPLAYCLASS67_0_CTOR_OFFSET))(this);
		}

		::System::Void _SuspendUICameraInput_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS___C__DISPLAYCLASS67_0__SUSPENDUICAMERAINPUT_B__0_OFFSET))(this);
		}

	};
}
