#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActiveTemplateVirtualCamera; }
namespace RPG::GameCore { class ActiveVirtualCamera_PerformanceTransition; }
namespace RPG::GameCore { class AdvCreateGroupEntity; }
namespace RPG::GameCore { class AdvDestroyGroupEntity; }
namespace RPG::GameCore { class AdvNpcFaceToPlayer; }
namespace RPG::GameCore { class CaptureNPCToCharacter; }
namespace RPG::GameCore { class CreateNPC; }
namespace RPG::GameCore { class CreateProp; }
namespace RPG::GameCore { class DestroyNPC; }
namespace RPG::GameCore { class DestroyProp; }
namespace RPG::GameCore { class PerformanceTransition; }
namespace RPG::GameCore { class SwitchCharacterAnchor; }

#define RPG_GAMECORE_PERFORMANCETRANSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D907360)
#define RPG_GAMECORE_PERFORMANCETRANSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D907380)
#define RPG_GAMECORE_PERFORMANCETRANSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D907310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceTransition_TypeDefinitionIndex = 21859;

	class PerformanceTransition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single SwitchInTime; // 0x18
		::System::Single SwitchKeepTime; // 0x1C
		::System::Single SwitchOutTime; // 0x20
		::System::Boolean TextEnabled; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 TalkSentenceID; // 0x28
		::System::Boolean NotAuto; // 0x2C
		::System::Byte _padding1[0x3];
		::Il2CppArray<::RPG::GameCore::CreateNPC*>* CreateNpcList; // 0x30
		::Il2CppArray<::RPG::GameCore::CaptureNPCToCharacter*>* CaptureNpcList; // 0x38
		::Il2CppArray<::RPG::GameCore::DestroyNPC*>* DestroyNpcList; // 0x40
		::RPG::GameCore::CreateProp* CreateProp; // 0x48
		::RPG::GameCore::DestroyProp* DestroyProp; // 0x50
		::RPG::GameCore::AdvCreateGroupEntity* AdvCreateGroupEntity; // 0x58
		::RPG::GameCore::AdvDestroyGroupEntity* AdvDestroyGroupEntity; // 0x60
		::System::Boolean DisactiveVCamOnGraphEnd; // 0x68
		::System::Byte _padding2[0x7];
		::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition* ActiveVirtualCamera; // 0x70
		::RPG::GameCore::ActiveTemplateVirtualCamera* ActiveTemplateVirtualCamera; // 0x78
		::RPG::GameCore::SwitchCharacterAnchor* SwitchCharacterAnchor; // 0x80
		::RPG::GameCore::AdvNpcFaceToPlayer* AdvNpcFaceToPlayer; // 0x88
		::System::Boolean WaitStreamingFinish; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCETRANSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceTransition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCETRANSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceTransition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCETRANSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
