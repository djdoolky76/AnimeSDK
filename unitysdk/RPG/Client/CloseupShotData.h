#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JCEJCNAMGAH;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_CLOSEUPSHOTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD4F33F0)
#define RPG_CLIENT_CLOSEUPSHOTDATA_GET_ALLOWSWITCHSPEEDUP_OFFSET UNITYSDK_OFFSET(0xD4F3390)

namespace RPG::Client
{
	inline static constexpr unsigned int CloseupShotData_TypeDefinitionIndex = 71570;

	class CloseupShotData : public ::System::Object
	{
	public:
		::RPG::GameCore::TargetEvaluator* ParentType; // 0x10
		::RPG::GameCore::TargetEvaluator* LookAtType; // 0x18
		::System::String* DarkTeamCustomizeFormationName; // 0x20
		::System::Action* OnFinishCB; // 0x28
		::RPG::GameCore::GameEntityList* AimTargetEntityList; // 0x30
		::RPG::GameCore::GameEntity* TimelineCaster; // 0x38
		::System::String* ShotPrefabPath; // 0x40
		::JCEJCNAMGAH* ProcedureData; // 0x48
		::RPG::GameCore::GameEntity* AnchorEntity; // 0x50
		::System::String* CameraTimelineAssetName; // 0x58
		::System::String* LightTeamCustomizeFormationName; // 0x60
		::System::Boolean IsFromPrepareAbility; // 0x68
		::System::Boolean KeepLastFrame; // 0x69
		::System::Boolean HideMonsterEffect; // 0x6A
		::System::Boolean IsOverride; // 0x6B
		::System::Single StageRootOffset; // 0x6C
		::UnityEngine::Vector3 ParentOffset; // 0x70
		::System::Single PauseTime; // 0x7C
		::System::Single LightTeamCenterOffset; // 0x80
		::UnityEngine::Vector3 LookAtOffset; // 0x84
		::System::Single DarkTeamCenterOffset; // 0x90
		::System::Single TimelineFinishTime; // 0x94
		::System::Single TimelineStartTime; // 0x98
		::RPG::GameCore::TeamType ParentTeamType; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOSEUPSHOTDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean get_AllowSwitchSpeedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOSEUPSHOTDATA_GET_ALLOWSWITCHSPEEDUP_OFFSET))(this);
		}

	};
}
