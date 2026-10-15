#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveWalkingEffect; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEWALKINGEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D987080)
#define RPG_GAMECORE_REMOVEWALKINGEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D987090)
#define RPG_GAMECORE_REMOVEWALKINGEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D987040)

namespace RPG::GameCore
{
	class RemoveWalkingEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EffectPrefab; // 0x20
		::System::Boolean IsNeedFadeOut; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEWALKINGEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveWalkingEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveWalkingEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEWALKINGEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveWalkingEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveWalkingEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEWALKINGEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
