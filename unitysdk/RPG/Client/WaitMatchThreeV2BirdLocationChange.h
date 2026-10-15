#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::Client { class WaitMatchThreeV2BirdLocationChange; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_CLIENT_WAITMATCHTHREEV2BIRDLOCATIONCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3373F0)
#define RPG_CLIENT_WAITMATCHTHREEV2BIRDLOCATIONCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D337400)
#define RPG_CLIENT_WAITMATCHTHREEV2BIRDLOCATIONCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3373B0)

namespace RPG::Client
{
	class WaitMatchThreeV2BirdLocationChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicFloat* LocationID; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITMATCHTHREEV2BIRDLOCATIONCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::WaitMatchThreeV2BirdLocationChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::WaitMatchThreeV2BirdLocationChange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITMATCHTHREEV2BIRDLOCATIONCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::WaitMatchThreeV2BirdLocationChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::WaitMatchThreeV2BirdLocationChange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITMATCHTHREEV2BIRDLOCATIONCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
