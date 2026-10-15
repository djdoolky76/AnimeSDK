#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvPlayerEnableIdleShow; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVPLAYERENABLEIDLESHOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AAA70)
#define RPG_GAMECORE_ADVPLAYERENABLEIDLESHOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AAA80)
#define RPG_GAMECORE_ADVPLAYERENABLEIDLESHOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AAA40)

namespace RPG::GameCore
{
	class AdvPlayerEnableIdleShow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 IdleShowIndex; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERENABLEIDLESHOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPlayerEnableIdleShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPlayerEnableIdleShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERENABLEIDLESHOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPlayerEnableIdleShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPlayerEnableIdleShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERENABLEIDLESHOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
