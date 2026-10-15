#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropFastDeliverPuzzleListener; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PROPFASTDELIVERPUZZLELISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91F750)
#define RPG_GAMECORE_PROPFASTDELIVERPUZZLELISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D91F780)
#define RPG_GAMECORE_PROPFASTDELIVERPUZZLELISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D91F700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropFastDeliverPuzzleListener_TypeDefinitionIndex = 22148;

	class PropFastDeliverPuzzleListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* AimFinishCallback; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DollyZoomStartCallback; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* AvatarTeleportCallback; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* RotatePuzzleStartCallback; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERPUZZLELISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropFastDeliverPuzzleListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropFastDeliverPuzzleListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERPUZZLELISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropFastDeliverPuzzleListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropFastDeliverPuzzleListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERPUZZLELISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
