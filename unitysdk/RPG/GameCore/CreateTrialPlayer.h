#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateTrialPlayer; }

#define RPG_GAMECORE_CREATETRIALPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E6EE0)
#define RPG_GAMECORE_CREATETRIALPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E6EF0)
#define RPG_GAMECORE_CREATETRIALPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E6EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateTrialPlayer_TypeDefinitionIndex = 21603;

	class CreateTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATETRIALPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateTrialPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATETRIALPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateTrialPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATETRIALPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
