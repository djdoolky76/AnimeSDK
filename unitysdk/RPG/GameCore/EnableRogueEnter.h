#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableRogueEnter; }

#define RPG_GAMECORE_ENABLEROGUEENTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D640880)
#define RPG_GAMECORE_ENABLEROGUEENTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D640890)
#define RPG_GAMECORE_ENABLEROGUEENTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D640850)

namespace RPG::GameCore
{
	class EnableRogueEnter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROGUEENTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableRogueEnter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableRogueEnter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROGUEENTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableRogueEnter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableRogueEnter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROGUEENTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
