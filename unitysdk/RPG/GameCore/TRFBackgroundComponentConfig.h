#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TRFBackgroundComponentConfig; }

#define RPG_GAMECORE_TRFBACKGROUNDCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB531B0)
#define RPG_GAMECORE_TRFBACKGROUNDCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB531C0)
#define RPG_GAMECORE_TRFBACKGROUNDCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB53160)

namespace RPG::GameCore
{
	class TRFBackgroundComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IgnoreDissolve; // 0x10
		::System::Boolean IsThorn; // 0x11
		::System::Boolean IsMovable; // 0x12
		::System::Byte _padding0[0x1];
		::System::Single MoveSpeed; // 0x14
		::System::Boolean IsScale; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFBACKGROUNDCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TRFBackgroundComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TRFBackgroundComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFBACKGROUNDCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TRFBackgroundComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TRFBackgroundComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFBACKGROUNDCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
