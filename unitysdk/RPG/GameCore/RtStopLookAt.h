#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtStopLookAt; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTSTOPLOOKAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA65E10)
#define RPG_GAMECORE_RTSTOPLOOKAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA65E50)
#define RPG_GAMECORE_RTSTOPLOOKAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA65DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtStopLookAt_TypeDefinitionIndex = 24135;

	class RtStopLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PerformerType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTOPLOOKAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtStopLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtStopLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTOPLOOKAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtStopLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtStopLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTOPLOOKAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
