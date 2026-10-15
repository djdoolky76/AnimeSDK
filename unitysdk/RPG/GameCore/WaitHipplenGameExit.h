#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitHipplenGameExit; }

#define RPG_GAMECORE_WAITHIPPLENGAMEEXIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9A890)
#define RPG_GAMECORE_WAITHIPPLENGAMEEXIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9A8A0)
#define RPG_GAMECORE_WAITHIPPLENGAMEEXIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9A7D0)

namespace RPG::GameCore
{
	class WaitHipplenGameExit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHIPPLENGAMEEXIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitHipplenGameExit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitHipplenGameExit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHIPPLENGAMEEXIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitHipplenGameExit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitHipplenGameExit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHIPPLENGAMEEXIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
