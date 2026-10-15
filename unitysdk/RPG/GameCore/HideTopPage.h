#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HideTopPage; }

#define RPG_GAMECORE_HIDETOPPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7699D0)
#define RPG_GAMECORE_HIDETOPPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7699E0)
#define RPG_GAMECORE_HIDETOPPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7699A0)

namespace RPG::GameCore
{
	class HideTopPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Hide; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDETOPPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideTopPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideTopPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDETOPPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideTopPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideTopPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDETOPPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
