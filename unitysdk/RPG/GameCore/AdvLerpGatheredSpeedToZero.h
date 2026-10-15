#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvLerpGatheredSpeedToZero; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVLERPGATHEREDSPEEDTOZERO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A27F0)
#define RPG_GAMECORE_ADVLERPGATHEREDSPEEDTOZERO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A2800)
#define RPG_GAMECORE_ADVLERPGATHEREDSPEEDTOZERO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A27C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLerpGatheredSpeedToZero_TypeDefinitionIndex = 20999;

	class AdvLerpGatheredSpeedToZero : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18
		::System::Single LerpTime; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* LerpCurve; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLERPGATHEREDSPEEDTOZERO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvLerpGatheredSpeedToZero* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvLerpGatheredSpeedToZero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLERPGATHEREDSPEEDTOZERO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvLerpGatheredSpeedToZero* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvLerpGatheredSpeedToZero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLERPGATHEREDSPEEDTOZERO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
