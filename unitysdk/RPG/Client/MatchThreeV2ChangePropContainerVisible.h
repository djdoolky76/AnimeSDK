#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class MatchThreeV2ChangePropContainerVisible; }

#define RPG_CLIENT_MATCHTHREEV2CHANGEPROPCONTAINERVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D328BA0)
#define RPG_CLIENT_MATCHTHREEV2CHANGEPROPCONTAINERVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D328BB0)
#define RPG_CLIENT_MATCHTHREEV2CHANGEPROPCONTAINERVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D328B70)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2ChangePropContainerVisible_TypeDefinitionIndex = 10256;

	class MatchThreeV2ChangePropContainerVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean isVisible; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHANGEPROPCONTAINERVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::MatchThreeV2ChangePropContainerVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::MatchThreeV2ChangePropContainerVisible*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHANGEPROPCONTAINERVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::MatchThreeV2ChangePropContainerVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::MatchThreeV2ChangePropContainerVisible*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHANGEPROPCONTAINERVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
