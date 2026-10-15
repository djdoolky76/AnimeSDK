#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEvilSmilePropSpawnerParam; }
namespace RPG::GameCore { class FiveDimEvilSmileStateOverrideConfig; }

#define RPG_GAMECORE_FIVEDIMEVILSMILEPROPSPAWNERPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BD070)
#define RPG_GAMECORE_FIVEDIMEVILSMILEPROPSPAWNERPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BD080)
#define RPG_GAMECORE_FIVEDIMEVILSMILEPROPSPAWNERPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BD030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmilePropSpawnerParam_TypeDefinitionIndex = 18585;

	class FiveDimEvilSmilePropSpawnerParam : public ::RPG::GameCore::FiveDimPropSpawnerParam
	{
	public:
		::System::Boolean EnableOverrideMoveSpeed; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single MoveSpeedOverride; // 0x14
		::Il2CppArray<::RPG::GameCore::FiveDimEvilSmileStateOverrideConfig*>* OverrideStateConfigList; // 0x18
		::System::Single AppearDistance; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEPROPSPAWNERPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEvilSmilePropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEvilSmilePropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEPROPSPAWNERPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEvilSmilePropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEvilSmilePropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEPROPSPAWNERPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
