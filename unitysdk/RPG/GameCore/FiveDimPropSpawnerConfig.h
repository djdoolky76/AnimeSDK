#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPropSpawnerConfig; }
namespace RPG::GameCore { class FiveDimPropSpawnerItem; }
namespace RPG::GameCore { class FiveDimPropSpawnerParam; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPROPSPAWNERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D52D0)
#define RPG_GAMECORE_FIVEDIMPROPSPAWNERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D52E0)
#define RPG_GAMECORE_FIVEDIMPROPSPAWNERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D5290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPropSpawnerConfig_TypeDefinitionIndex = 18591;

	class FiveDimPropSpawnerConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsPropSpawner; // 0x10
		::System::Boolean SpawnOnInit; // 0x11
		::System::Boolean EnableIntervalSpawn; // 0x12
		::System::Byte _padding0[0x1];
		::System::Single SpawnInterval; // 0x14
		::System::String* PresetName; // 0x18
		::System::Boolean Unique; // 0x20
		::System::Boolean SpawnAfterDestroy; // 0x21
		::System::Byte _padding1[0x2];
		::System::Single DelayDuration; // 0x24
		::RPG::MVector3 CreationOffset; // 0x28
		::System::Byte _padding2[0x4];
		::RPG::GameCore::FiveDimPropSpawnerParam* SpawnParam; // 0x38
		::System::Boolean UseExtraRandomPreset; // 0x40
		::System::Byte _padding3[0x7];
		::Il2CppArray<::RPG::GameCore::FiveDimPropSpawnerItem*>* ExtraPresetList; // 0x48
		::System::Boolean SendEventOnInit; // 0x50
		::System::Byte _padding4[0x7];
		::RPG::GameCore::LittleGameEvent* SpawnEvent; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPSPAWNERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPropSpawnerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPropSpawnerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPSPAWNERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPropSpawnerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPropSpawnerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPSPAWNERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
