#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableRootMotion; }

#define RPG_GAMECORE_ENABLEROOTMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D640A60)
#define RPG_GAMECORE_ENABLEROOTMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D640A70)
#define RPG_GAMECORE_ENABLEROOTMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D640A20)

namespace RPG::GameCore
{
	class EnableRootMotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enabled; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROOTMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableRootMotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableRootMotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROOTMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableRootMotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableRootMotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROOTMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
