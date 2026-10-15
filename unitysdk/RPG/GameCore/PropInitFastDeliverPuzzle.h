#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropInitFastDeliverPuzzle; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPINITFASTDELIVERPUZZLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94DDB0)
#define RPG_GAMECORE_PROPINITFASTDELIVERPUZZLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D94DDF0)
#define RPG_GAMECORE_PROPINITFASTDELIVERPUZZLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D94DD50)

namespace RPG::GameCore
{
	class PropInitFastDeliverPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x20
		::RPG::GameCore::DynamicFloat* DeliverBetweenDist; // 0x28
		::RPG::GameCore::DynamicString* OverrideSourcePosition; // 0x30
		::RPG::GameCore::DynamicFloat* OverrideInitCameraFOV; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITFASTDELIVERPUZZLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropInitFastDeliverPuzzle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropInitFastDeliverPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITFASTDELIVERPUZZLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropInitFastDeliverPuzzle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropInitFastDeliverPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITFASTDELIVERPUZZLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
