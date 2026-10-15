#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopDitherClose; }

#define RPG_GAMECORE_STOPDITHERCLOSE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB24E30)
#define RPG_GAMECORE_STOPDITHERCLOSE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB24E40)
#define RPG_GAMECORE_STOPDITHERCLOSE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB24DF0)

namespace RPG::GameCore
{
	class StopDitherClose : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsStop; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPDITHERCLOSE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopDitherClose* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopDitherClose*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPDITHERCLOSE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopDitherClose* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopDitherClose*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPDITHERCLOSE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
