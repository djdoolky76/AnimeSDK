#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TimeRewindPauseReason.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PauseTimeRewindTargetInRange; }

#define RPG_GAMECORE_PAUSETIMEREWINDTARGETINRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F36B0)
#define RPG_GAMECORE_PAUSETIMEREWINDTARGETINRANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8F36C0)
#define RPG_GAMECORE_PAUSETIMEREWINDTARGETINRANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F3670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseTimeRewindTargetInRange_TypeDefinitionIndex = 20660;

	class PauseTimeRewindTargetInRange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single Range; // 0x1C
		::RPG::GameCore::DynamicFloat* Duration; // 0x20
		::System::Boolean IsSkill; // 0x28
		::System::Byte _padding1[0x3];
		::RPG::GameCore::TimeRewindPauseReason PauseReason; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETIMEREWINDTARGETINRANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseTimeRewindTargetInRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseTimeRewindTargetInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETIMEREWINDTARGETINRANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseTimeRewindTargetInRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseTimeRewindTargetInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETIMEREWINDTARGETINRANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
