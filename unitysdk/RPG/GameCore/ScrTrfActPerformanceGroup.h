#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferBaseAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActiveTemplateVirtualCamera; }
namespace RPG::GameCore { class ActiveVirtualCamera_PerformanceTransition; }
namespace RPG::GameCore { class AdvCreateGroupEntity; }
namespace RPG::GameCore { class AdvDestroyGroupEntity; }
namespace RPG::GameCore { class AdvNpcFaceToPlayer; }
namespace RPG::GameCore { class CaptureNPCToCharacter; }
namespace RPG::GameCore { class ScrTrfActPerformanceGroup; }
namespace RPG::GameCore { class SwitchCharacterAnchor; }

#define RPG_GAMECORE_SCRTRFACTPERFORMANCEGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8A940)
#define RPG_GAMECORE_SCRTRFACTPERFORMANCEGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8A950)
#define RPG_GAMECORE_SCRTRFACTPERFORMANCEGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8A910)

namespace RPG::GameCore
{
	class ScrTrfActPerformanceGroup : public ::RPG::GameCore::ScreenTransferBaseAction
	{
	public:
		::RPG::GameCore::AdvCreateGroupEntity* AdvCreateGroupEntity; // 0x10
		::RPG::GameCore::AdvDestroyGroupEntity* AdvDestroyGroupEntity; // 0x18
		::Il2CppArray<::RPG::GameCore::CaptureNPCToCharacter*>* CaptureNpc; // 0x20
		::RPG::GameCore::SwitchCharacterAnchor* SwitchCharacterAnchor; // 0x28
		::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition* ActiveVirtualCamera; // 0x30
		::RPG::GameCore::ActiveTemplateVirtualCamera* ActiveTemplateVirtualCamera; // 0x38
		::RPG::GameCore::AdvNpcFaceToPlayer* AdvNpcFaceToPlayer; // 0x40
		::System::Boolean WaitStreamingFinish; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTPERFORMANCEGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScrTrfActPerformanceGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScrTrfActPerformanceGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTPERFORMANCEGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScrTrfActPerformanceGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScrTrfActPerformanceGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTPERFORMANCEGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
