#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PeiPeiChallengeUpdateCheckPoint; }

#define RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C7490)
#define RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8C74A0)
#define RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C73D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PeiPeiChallengeUpdateCheckPoint_TypeDefinitionIndex = 21193;

	class PeiPeiChallengeUpdateCheckPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
