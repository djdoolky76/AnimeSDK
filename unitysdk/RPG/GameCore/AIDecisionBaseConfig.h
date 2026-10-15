#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIDecisionUnitConfig.h"
#include "unitysdk/RPG/GameCore/DSEType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIDecisionBaseConfig; }
namespace RPG::GameCore { class ConsiderationAxisConfig; }

#define RPG_GAMECORE_AIDECISIONBASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3392B0)
#define RPG_GAMECORE_AIDECISIONBASECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D339110)
#define RPG_GAMECORE_AIDECISIONBASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3387A0)

namespace RPG::GameCore
{
	class AIDecisionBaseConfig : public ::RPG::GameCore::AIDecisionUnitConfig
	{
	public:
		::RPG::GameCore::DSEType ScoreEvaluatorType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint Weight; // 0x18
		::Il2CppArray<::RPG::GameCore::ConsiderationAxisConfig*>* ConsiderAxisList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONBASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIDecisionBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIDecisionBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONBASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIDecisionBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIDecisionBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONBASECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
