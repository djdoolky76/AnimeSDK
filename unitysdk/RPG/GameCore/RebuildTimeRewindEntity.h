#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RebuildTimeRewindEntity; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REBUILDTIMEREWINDENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D970780)
#define RPG_GAMECORE_REBUILDTIMEREWINDENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D970790)
#define RPG_GAMECORE_REBUILDTIMEREWINDENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D970750)

namespace RPG::GameCore
{
	class RebuildTimeRewindEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REBUILDTIMEREWINDENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RebuildTimeRewindEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RebuildTimeRewindEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REBUILDTIMEREWINDENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RebuildTimeRewindEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RebuildTimeRewindEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REBUILDTIMEREWINDENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
