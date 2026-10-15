#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareRogueRemainMonsterNum; }

#define RPG_GAMECORE_BYCOMPAREROGUEREMAINMONSTERNUM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D0170)
#define RPG_GAMECORE_BYCOMPAREROGUEREMAINMONSTERNUM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D0180)
#define RPG_GAMECORE_BYCOMPAREROGUEREMAINMONSTERNUM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D0130)

namespace RPG::GameCore
{
	class ByCompareRogueRemainMonsterNum : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEREMAINMONSTERNUM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRogueRemainMonsterNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRogueRemainMonsterNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEREMAINMONSTERNUM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRogueRemainMonsterNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRogueRemainMonsterNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEREMAINMONSTERNUM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
