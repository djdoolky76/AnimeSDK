#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopAnimatorLayerEmotion; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STOPANIMATORLAYEREMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF6D80)
#define RPG_GAMECORE_STOPANIMATORLAYEREMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAF6D90)
#define RPG_GAMECORE_STOPANIMATORLAYEREMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF6D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopAnimatorLayerEmotion_TypeDefinitionIndex = 20600;

	class StopAnimatorLayerEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single TransitTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPANIMATORLAYEREMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopAnimatorLayerEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopAnimatorLayerEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPANIMATORLAYEREMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopAnimatorLayerEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopAnimatorLayerEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPANIMATORLAYEREMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
