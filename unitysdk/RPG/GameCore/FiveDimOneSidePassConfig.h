#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace RPG::GameCore { class FiveDimOneSidePassConfig; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMONESIDEPASSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A1900)
#define RPG_GAMECORE_FIVEDIMONESIDEPASSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A17F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimOneSidePassConfig_TypeDefinitionIndex = 18546;

	class FiveDimOneSidePassConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameEvent* OnEntityPass; // 0x10
		::RPG::GameCore::LittleGameEvent* OnEntityEnter; // 0x18
		::RPG::GameCore::LittleGameEvent* OnEntityQuit; // 0x20
		::RPG::GameCore::FiveDimEffectItem* GuestPassEffect; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMONESIDEPASSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimOneSidePassConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimOneSidePassConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMONESIDEPASSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
