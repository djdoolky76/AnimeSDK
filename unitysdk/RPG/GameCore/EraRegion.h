#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EraFlipSet; }
namespace RPG::GameCore { class EraFlipperBattleAreaOverrideConfig; }
namespace RPG::GameCore { class EraRegion; }
namespace System { class String; }

#define RPG_GAMECORE_ERAREGION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D681740)
#define RPG_GAMECORE_ERAREGION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6812D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EraRegion_TypeDefinitionIndex = 16618;

	class EraRegion : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::EraFlipSet*>* EraFlipSets; // 0x18
		::RPG::GameCore::EraStateType EraStateInitValue; // 0x20
		::System::UInt32 RegionID; // 0x24
		::Il2CppArray<::RPG::GameCore::EraFlipperBattleAreaOverrideConfig*>* BattleAreaOverrideConfigList; // 0x28
		::RPG::MVector3 Map3DAnchorPosition; // 0x30
		::RPG::MVector3 Map3DAnchorRotation; // 0x3C
		::System::String* Map3DPrefabPath; // 0x48
		::System::Boolean FrozeDefaultState; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ERAREGION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EraRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EraRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ERAREGION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
