#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimOneSidePassConfig; }
namespace RPG::GameCore { class FiveDimOneSidePassPropConfig; }

#define RPG_GAMECORE_FIVEDIMONESIDEPASSPROPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CF3B0)
#define RPG_GAMECORE_FIVEDIMONESIDEPASSPROPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6CF3C0)
#define RPG_GAMECORE_FIVEDIMONESIDEPASSPROPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CF380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimOneSidePassPropConfig_TypeDefinitionIndex = 18548;

	class FiveDimOneSidePassPropConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean OneSidePass; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FiveDimOneSidePassConfig* OneSidePassConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMONESIDEPASSPROPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimOneSidePassPropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimOneSidePassPropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMONESIDEPASSPROPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimOneSidePassPropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimOneSidePassPropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMONESIDEPASSPROPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
