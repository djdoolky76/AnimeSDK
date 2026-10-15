#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetIgnoreTimeRewindLockRangeLimit; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB67A0)
#define RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB67B0)
#define RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB6760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetIgnoreTimeRewindLockRangeLimit_TypeDefinitionIndex = 20656;

	class SetIgnoreTimeRewindLockRangeLimit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean Ignore; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetIgnoreTimeRewindLockRangeLimit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIGNORETIMEREWINDLOCKRANGELIMIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
