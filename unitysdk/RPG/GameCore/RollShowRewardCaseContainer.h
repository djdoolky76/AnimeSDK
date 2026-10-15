#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CaseContainerBase.h"
#include "unitysdk/RPG/GameCore/RollShopGroupType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RollShowRewardCaseContainer; }

#define RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19500)
#define RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19510)
#define RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA194D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollShowRewardCaseContainer_TypeDefinitionIndex = 17537;

	class RollShowRewardCaseContainer : public ::RPG::GameCore::CaseContainerBase
	{
	public:
		::RPG::GameCore::RollShopGroupType Case; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RollShowRewardCaseContainer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RollShowRewardCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RollShowRewardCaseContainer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RollShowRewardCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOWREWARDCASECONTAINER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
