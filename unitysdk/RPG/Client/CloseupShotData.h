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

#define RPG_CLIENT_CLOSEUPSHOTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D01A4D0)
#define RPG_CLIENT_CLOSEUPSHOTDATA_GET_ALLOWSWITCHSPEEDUP_OFFSET UNITYSDK_OFFSET(0x1D01A470)

namespace RPG::Client
{
	inline static constexpr unsigned int CloseupShotData_TypeDefinitionIndex = 71570;

	class CloseupShotData : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntityList* AimTargetEntityList; // 0x10
		::RPG::GameCore::GameEntity* TimelineCaster; // 0x18
		::RPG::GameCore::TargetEvaluator* LookAtType; // 0x20
		::RPG::GameCore::GameEntity* AnchorEntity; // 0x28
		::System::String* LightTeamCustomizeFormationName; // 0x30
		::System::String* DarkTeamCustomizeFormationName; // 0x38
		::System::String* ShotPrefabPath; // 0x40
		::RPG::GameCore::TargetEvaluator* ParentType; // 0x48
		::JCEJCNAMGAH* ProcedureData; // 0x50
		::System::String* CameraTimelineAssetName; // 0x58
		::System::Action* OnFinishCB; // 0x60
		::System::Single DarkTeamCenterOffset; // 0x68
		::UnityEngine::Vector3 LookAtOffset; // 0x6C
		::RPG::GameCore::TeamType ParentTeamType; // 0x78
		::System::Single StageRootOffset; // 0x7C
		::System::Single TimelineStartTime; // 0x80
		::System::Boolean HideMonsterEffect; // 0x84
		::System::Boolean KeepLastFrame; // 0x85
		::System::Boolean IsFromPrepareAbility; // 0x86
		::System::Boolean IsOverride; // 0x87
		::System::Single LightTeamCenterOffset; // 0x88
		::System::Single TimelineFinishTime; // 0x8C
		::System::Single PauseTime; // 0x90
		::UnityEngine::Vector3 ParentOffset; // 0x94
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
