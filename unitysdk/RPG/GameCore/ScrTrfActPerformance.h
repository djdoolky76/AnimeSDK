#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferBaseAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActiveTemplateVirtualCamera; }
namespace RPG::GameCore { class ActiveVirtualCamera_PerformanceTransition; }
namespace RPG::GameCore { class AdvNpcFaceToPlayer; }
namespace RPG::GameCore { class CaptureNPCToCharacter; }
namespace RPG::GameCore { class CreateNPC; }
namespace RPG::GameCore { class CreateProp; }
namespace RPG::GameCore { class DestroyNPC; }
namespace RPG::GameCore { class DestroyProp; }
namespace RPG::GameCore { class ScrTrfActPerformance; }
namespace RPG::GameCore { class SwitchCharacterAnchor; }

#define RPG_GAMECORE_SCRTRFACTPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8A590)
#define RPG_GAMECORE_SCRTRFACTPERFORMANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8A5A0)
#define RPG_GAMECORE_SCRTRFACTPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8A560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScrTrfActPerformance_TypeDefinitionIndex = 21951;

	class ScrTrfActPerformance : public ::RPG::GameCore::ScreenTransferBaseAction
	{
	public:
		::RPG::GameCore::CreateNPC* CreateNpc; // 0x10
		::RPG::GameCore::DestroyNPC* DestroyNpc; // 0x18
		::RPG::GameCore::CreateProp* CreateProp; // 0x20
		::RPG::GameCore::DestroyProp* DestroyProp; // 0x28
		::Il2CppArray<::RPG::GameCore::CaptureNPCToCharacter*>* CaptureNpc; // 0x30
		::RPG::GameCore::SwitchCharacterAnchor* SwitchCharacterAnchor; // 0x38
		::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition* ActiveVirtualCamera; // 0x40
		::RPG::GameCore::ActiveTemplateVirtualCamera* ActiveTemplateVirtualCamera; // 0x48
		::RPG::GameCore::AdvNpcFaceToPlayer* AdvNpcFaceToPlayer; // 0x50
		::System::Boolean WaitStreamingFinish; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScrTrfActPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScrTrfActPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScrTrfActPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScrTrfActPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTPERFORMANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
