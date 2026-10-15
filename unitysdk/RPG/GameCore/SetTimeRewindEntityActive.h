#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTimeRewindEntityActive; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC7BE0)
#define RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC7BF0)
#define RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC7BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTimeRewindEntityActive_TypeDefinitionIndex = 20679;

	class SetTimeRewindEntityActive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean Active; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTimeRewindEntityActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTimeRewindEntityActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTimeRewindEntityActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTimeRewindEntityActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYACTIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
