#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class PlayAndWaitLimaoNewsTalk; }

#define RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3296E0)
#define RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3296F0)
#define RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3296B0)

namespace RPG::Client
{
	class PlayAndWaitLimaoNewsTalk : public ::RPG::GameCore::SimpleTalkListConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::PlayAndWaitLimaoNewsTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::PlayAndWaitLimaoNewsTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::PlayAndWaitLimaoNewsTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::PlayAndWaitLimaoNewsTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYANDWAITLIMAONEWSTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
