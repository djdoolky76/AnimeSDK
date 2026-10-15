#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetSummonUnitAttach; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETSUMMONUNITATTACH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC3300)
#define RPG_GAMECORE_SETSUMMONUNITATTACH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC3320)
#define RPG_GAMECORE_SETSUMMONUNITATTACH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC32C0)

namespace RPG::GameCore
{
	class SetSummonUnitAttach : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18
		::RPG::GameCore::TargetEvaluator* AttachTarget; // 0x20
		::System::Boolean OverrideAttachConfig; // 0x28
		::System::Byte _padding0[0x7];
		::System::String* AttachPoint; // 0x30
		::RPG::MVector3 LocalPosition; // 0x38
		::RPG::MVector3 LocalRotation; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITATTACH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSummonUnitAttach* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSummonUnitAttach*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITATTACH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSummonUnitAttach* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSummonUnitAttach*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITATTACH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
