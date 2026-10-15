#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DestroySummonUnit; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_DESTROYSUMMONUNIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FD630)
#define RPG_GAMECORE_DESTROYSUMMONUNIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FD640)
#define RPG_GAMECORE_DESTROYSUMMONUNIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FD600)

namespace RPG::GameCore
{
	class DestroySummonUnit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18
		::System::Boolean Immediately; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* FadeoutAnim; // 0x28
		::System::Boolean SyncToServer; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYSUMMONUNIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroySummonUnit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroySummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYSUMMONUNIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroySummonUnit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroySummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYSUMMONUNIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
