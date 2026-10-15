#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopBlendShapesEmotion; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STOPBLENDSHAPESEMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB249A0)
#define RPG_GAMECORE_STOPBLENDSHAPESEMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB249B0)
#define RPG_GAMECORE_STOPBLENDSHAPESEMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB24960)

namespace RPG::GameCore
{
	class StopBlendShapesEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single TransitTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPBLENDSHAPESEMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopBlendShapesEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopBlendShapesEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPBLENDSHAPESEMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopBlendShapesEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopBlendShapesEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPBLENDSHAPESEMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
