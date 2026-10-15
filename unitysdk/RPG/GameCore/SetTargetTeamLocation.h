#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetTargetTeamLocation; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETTEAMLOCATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC5FD0)
#define RPG_GAMECORE_SETTARGETTEAMLOCATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC5FE0)
#define RPG_GAMECORE_SETTARGETTEAMLOCATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC5F90)

namespace RPG::GameCore
{
	class SetTargetTeamLocation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* Row; // 0x20
		::RPG::GameCore::DynamicFloat* Col; // 0x28
		::RPG::GameCore::TeamLocationType Location; // 0x30
		::System::Boolean RefreshImmediately; // 0x34
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TargetEvaluator* CustomCaster; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETTEAMLOCATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetTeamLocation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetTeamLocation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETTEAMLOCATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetTeamLocation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetTeamLocation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETTEAMLOCATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
