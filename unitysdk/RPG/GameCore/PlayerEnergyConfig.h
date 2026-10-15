#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerEnergyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYERENERGYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D933AF0)
#define RPG_GAMECORE_PLAYERENERGYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D933900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerEnergyConfig_TypeDefinitionIndex = 17032;

	class PlayerEnergyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffectPath; // 0x10
		::System::String* EnergyCountAnimParamName; // 0x18
		::System::String* AttachPoint; // 0x20
		::System::String* TrailEffectPath; // 0x28
		::Il2CppArray<::System::String*>* TrailEffectStartPoint; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERENERGYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerEnergyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerEnergyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERENERGYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
