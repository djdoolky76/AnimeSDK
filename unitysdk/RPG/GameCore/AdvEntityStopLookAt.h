#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEntityStopLookAt; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYSTOPLOOKAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39E810)
#define RPG_GAMECORE_ADVENTITYSTOPLOOKAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39E820)
#define RPG_GAMECORE_ADVENTITYSTOPLOOKAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39E7E0)

namespace RPG::GameCore
{
	class AdvEntityStopLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean StopImmediately; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPLOOKAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityStopLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityStopLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPLOOKAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityStopLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityStopLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPLOOKAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
