#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TimeRewindEntityControlMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTimeRewindEntityControlMode; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTIMEREWINDENTITYCONTROLMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9A500)
#define RPG_GAMECORE_SETTIMEREWINDENTITYCONTROLMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9A510)
#define RPG_GAMECORE_SETTIMEREWINDENTITYCONTROLMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9A4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTimeRewindEntityControlMode_TypeDefinitionIndex = 20676;

	class SetTimeRewindEntityControlMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::TimeRewindEntityControlMode ControlMode; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYCONTROLMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTimeRewindEntityControlMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTimeRewindEntityControlMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYCONTROLMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTimeRewindEntityControlMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTimeRewindEntityControlMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYCONTROLMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
