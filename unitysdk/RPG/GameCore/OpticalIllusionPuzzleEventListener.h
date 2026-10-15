#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OpticalIllusionPuzzleEventListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_OPTICALILLUSIONPUZZLEEVENTLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B6930)
#define RPG_GAMECORE_OPTICALILLUSIONPUZZLEEVENTLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B6940)
#define RPG_GAMECORE_OPTICALILLUSIONPUZZLEEVENTLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B6900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpticalIllusionPuzzleEventListener_TypeDefinitionIndex = 22219;

	class OpticalIllusionPuzzleEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FinishCallback; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* QuitCallback; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* WayPassCallback; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* RotateBlockCallback; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ReachCallback; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ResetCallback; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ReachFirstPoint; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ReachSecondPoint; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONPUZZLEEVENTLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpticalIllusionPuzzleEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpticalIllusionPuzzleEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONPUZZLEEVENTLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpticalIllusionPuzzleEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpticalIllusionPuzzleEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONPUZZLEEVENTLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
