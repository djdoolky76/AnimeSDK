#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLECONST_GET_DAMAGELINELEVEL2_OFFSET UNITYSDK_OFFSET(0xE527590)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLECONST_GET_DAMAGELINELEVEL3_OFFSET UNITYSDK_OFFSET(0xE527690)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLECONST_GET_DYINGHPLINE_OFFSET UNITYSDK_OFFSET(0xE527490)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLECONST_GET_MAXBATTLETURN_OFFSET UNITYSDK_OFFSET(0xE527790)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLECONST_GET_REDHPRATIO_OFFSET UNITYSDK_OFFSET(0xE527380)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLECONST_GET_SHOWRARESPEFFECTPETIDS_OFFSET UNITYSDK_OFFSET(0xE527960)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLECONST_GET_SHOWSPEFFECTPETIDS_OFFSET UNITYSDK_OFFSET(0xE527890)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleBattleConst_TypeDefinitionIndex = 76840;

	class PetMarbleBattleConst : public ::System::Object
	{
	public:
		static ::System::Single get_RedHpRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLECONST_GET_REDHPRATIO_OFFSET))();
		}

		static ::System::Int32 get_DyingHpLine()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLECONST_GET_DYINGHPLINE_OFFSET))();
		}

		static ::System::Int32 get_DamageLineLevel2()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLECONST_GET_DAMAGELINELEVEL2_OFFSET))();
		}

		static ::System::Int32 get_DamageLineLevel3()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLECONST_GET_DAMAGELINELEVEL3_OFFSET))();
		}

		static ::System::UInt32 get_MaxBattleTurn()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLECONST_GET_MAXBATTLETURN_OFFSET))();
		}

		static ::Il2CppArray<::RPG::GameCore::DynamicValue*>* get_ShowSPEffectPetIDs()
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLECONST_GET_SHOWSPEFFECTPETIDS_OFFSET))();
		}

		static ::Il2CppArray<::RPG::GameCore::DynamicValue*>* get_ShowRareSPEffectPetIDs()
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLECONST_GET_SHOWRARESPEFFECTPETIDS_OFFSET))();
		}

	};
}
