#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowHeartDialToast; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWHEARTDIALTOAST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB2EA0)
#define RPG_GAMECORE_SHOWHEARTDIALTOAST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB2EB0)
#define RPG_GAMECORE_SHOWHEARTDIALTOAST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB2E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowHeartDialToast_TypeDefinitionIndex = 20911;

	class ShowHeartDialToast : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::HeartDialStepType StepType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOAST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowHeartDialToast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowHeartDialToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOAST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowHeartDialToast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowHeartDialToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOAST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
