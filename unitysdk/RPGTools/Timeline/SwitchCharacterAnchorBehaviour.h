#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class OverrideTransform; }
namespace RPGTools::Timeline { class SwitchCharacterAnchorData; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_AOCLAIENOOC_OFFSET UNITYSDK_OFFSET(0xE9470F0)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_BAFDKILHHNL_OFFSET UNITYSDK_OFFSET(0xE9472F0)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_BEPIGLLNDBK_OFFSET UNITYSDK_OFFSET(0xE946B00)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE947570)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xE946A70)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xE946A90)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_JIEGPBAGDJD_OFFSET UNITYSDK_OFFSET(0xE947040)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE946C10)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE946C90)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xE946AA0)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE947260)

namespace RPGTools::Timeline
{
	class SwitchCharacterAnchorBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::SwitchCharacterAnchorData* Config; // 0x10
		::UnityEngine::Timeline::TimelineClip* TimelineClip; // 0x18
		::RPG::GameCore::GameEntity* _TargetEntity; // 0x20
		::UnityEngine::GameObject* _TargetGo; // 0x28
		::UnityEngine::GameObject* _AnchorGo; // 0x30
		::RPGTools::Timeline::OverrideTransform* _OverrideTransformComp; // 0x38
		::UnityEngine::Vector3 _Position; // 0x40
		::UnityEngine::Quaternion _Rotation; // 0x4C
		::System::Boolean _IsDragging; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_GET_ROTATION_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AOCLAIENOOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_AOCLAIENOOC_OFFSET))(this);
		}

		::System::Void BEPIGLLNDBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_BEPIGLLNDBK_OFFSET))(this);
		}

		::UnityEngine::Vector3 JIEGPBAGDJD(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_JIEGPBAGDJD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 BAFDKILHHNL(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORBEHAVIOUR_BAFDKILHHNL_OFFSET))(this, a1);
		}

	};
}
