#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByCheckSealId; }

#define RPG_GAMECORE_MARBLEBYCHECKSEALID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D838520)
#define RPG_GAMECORE_MARBLEBYCHECKSEALID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D838530)
#define RPG_GAMECORE_MARBLEBYCHECKSEALID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8384D0)

namespace RPG::GameCore
{
	class MarbleByCheckSealId : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28
		::System::UInt32 SealId; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKSEALID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByCheckSealId* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByCheckSealId*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKSEALID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByCheckSealId* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByCheckSealId*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKSEALID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
