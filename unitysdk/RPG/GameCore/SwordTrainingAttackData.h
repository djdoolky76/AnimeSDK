#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackData.h"
#include "unitysdk/RPG/GameCore/SwordTrainingProperty.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingAttackData; }

#define RPG_GAMECORE_SWORDTRAININGATTACKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB47620)
#define RPG_GAMECORE_SWORDTRAININGATTACKDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB47630)
#define RPG_GAMECORE_SWORDTRAININGATTACKDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB475E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingAttackData_TypeDefinitionIndex = 22596;

	class SwordTrainingAttackData : public ::RPG::GameCore::AttackData
	{
	public:
		::RPG::GameCore::SwordTrainingProperty UseSwordTrainingProperty; // 0x148
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGATTACKDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingAttackData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingAttackData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGATTACKDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingAttackData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingAttackData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGATTACKDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
