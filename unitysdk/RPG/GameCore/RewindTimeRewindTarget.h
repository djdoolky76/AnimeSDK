#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RewindTimeRewindTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REWINDTIMEREWINDTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99BF50)
#define RPG_GAMECORE_REWINDTIMEREWINDTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99BF60)
#define RPG_GAMECORE_REWINDTIMEREWINDTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99BF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RewindTimeRewindTarget_TypeDefinitionIndex = 20657;

	class RewindTimeRewindTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWINDTIMEREWINDTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RewindTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RewindTimeRewindTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWINDTIMEREWINDTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RewindTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RewindTimeRewindTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWINDTIMEREWINDTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
