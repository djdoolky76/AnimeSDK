#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SO_Wait; }

#define RPG_GAMECORE_SO_WAIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA70AA0)
#define RPG_GAMECORE_SO_WAIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA70AB0)
#define RPG_GAMECORE_SO_WAIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA70E60)

namespace RPG::GameCore
{
	class SO_Wait : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::System::Single Time; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_WAIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_Wait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_Wait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_WAIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_Wait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_Wait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_WAIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
