#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingSetDynamicValueByAllyRank; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYALLYRANK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4C8E0)
#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYALLYRANK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB4C8F0)
#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYALLYRANK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB4C8B0)

namespace RPG::GameCore
{
	class SwordTrainingSetDynamicValueByAllyRank : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYALLYRANK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByAllyRank* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingSetDynamicValueByAllyRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYALLYRANK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByAllyRank* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingSetDynamicValueByAllyRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYALLYRANK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
