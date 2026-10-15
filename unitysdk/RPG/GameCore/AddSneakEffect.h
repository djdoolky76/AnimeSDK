#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddSneakEffect; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDSNEAKEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38B9A0)
#define RPG_GAMECORE_ADDSNEAKEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38B9B0)
#define RPG_GAMECORE_ADDSNEAKEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38B970)

namespace RPG::GameCore
{
	class AddSneakEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSNEAKEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddSneakEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddSneakEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSNEAKEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddSneakEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddSneakEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSNEAKEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
