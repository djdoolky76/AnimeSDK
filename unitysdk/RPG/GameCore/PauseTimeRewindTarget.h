#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TimeRewindPauseReason.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PauseTimeRewindTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PAUSETIMEREWINDTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C5A10)
#define RPG_GAMECORE_PAUSETIMEREWINDTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8C5A20)
#define RPG_GAMECORE_PAUSETIMEREWINDTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C59D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseTimeRewindTarget_TypeDefinitionIndex = 20659;

	class PauseTimeRewindTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::RPG::GameCore::DynamicFloat* Duration; // 0x28
		::System::Boolean IsSkill; // 0x30
		::System::Byte _padding1[0x3];
		::RPG::GameCore::TimeRewindPauseReason PauseReason; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETIMEREWINDTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseTimeRewindTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETIMEREWINDTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseTimeRewindTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETIMEREWINDTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
