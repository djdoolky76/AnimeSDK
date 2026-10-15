#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfFarmConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ELFFARMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D635E70)
#define RPG_GAMECORE_ELFFARMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D635C20)

namespace RPG::GameCore
{
	class ElfFarmConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SeedlingModelPath1; // 0x10
		::System::String* SeedlingModelPath2; // 0x18
		::System::String* MatureCropsEffectPath; // 0x20
		::System::String* PlantCropsEffectPath; // 0x28
		::System::String* CollectCropsEffectPath; // 0x30
		::System::String* CollectCropsExtraEffectPath; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFARMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfFarmConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfFarmConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFARMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
