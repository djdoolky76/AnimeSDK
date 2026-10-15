#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class StartMissionCameraTemplate; }

#define RPG_GAMECORE_STARTMISSIONCAMERATEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEF9F0)
#define RPG_GAMECORE_STARTMISSIONCAMERATEMPLATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAEFAD0)
#define RPG_GAMECORE_STARTMISSIONCAMERATEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEF8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartMissionCameraTemplate_TypeDefinitionIndex = 23809;

	class StartMissionCameraTemplate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* CamDuration; // 0x18
		::RPG::GameCore::DynamicFloat* WaitSecondsBeforeCut; // 0x20
		::RPG::GameCore::DynamicString* CameraAnchor; // 0x28
		::RPG::GameCore::DynamicString* CameraTargetName; // 0x30
		::RPG::GameCore::DynamicFloat* FirstTalkListStart; // 0x38
		::RPG::GameCore::DynamicFloat* FirstTalkListEnd; // 0x40
		::RPG::GameCore::DynamicFloat* SecondTalkListStart; // 0x48
		::RPG::GameCore::DynamicFloat* SecondTalkListEnd; // 0x50
		::RPG::GameCore::DynamicFloat* FaceToCameraTarget; // 0x58
		::RPG::GameCore::DynamicString* CallBackEventName; // 0x60
		::RPG::GameCore::DynamicFloat* CutToAdventureCamera; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMISSIONCAMERATEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartMissionCameraTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartMissionCameraTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMISSIONCAMERATEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartMissionCameraTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartMissionCameraTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMISSIONCAMERATEMPLATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
