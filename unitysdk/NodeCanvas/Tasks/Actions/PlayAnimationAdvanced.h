#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/PlayDirections.h"
#include "unitysdk/UnityEngine/AnimationBlendMode.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_FINDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1EBB8090)
#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EBB7750)
#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EBB7920)
#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_ONINIT_OFFSET UNITYSDK_OFFSET(0x1EBB77B0)
#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EBB8380)
#define NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB8450)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int PlayAnimationAdvanced_TypeDefinitionIndex = 29386;

	class PlayAnimationAdvanced
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* animationLayer; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::AnimationClip*>* animationClip; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* mixTransformName; // 0x70
		::UnityEngine::Transform* mixTransform; // 0x78
		::System::String* animationToPlay; // 0x80
		::ParadoxNotion::PlayDirections playDirection; // 0x88
		::UnityEngine::WrapMode animationWrap; // 0x8C
		::UnityEngine::AnimationBlendMode blendMode; // 0x90
		::System::Int32 dir; // 0x94
		::System::Single crossFadeTime; // 0x98
		::System::Single playbackSpeed; // 0x9C
		::System::Boolean queueAnimation; // 0xA0
		::System::Boolean waitActionFinish; // 0xA1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_GET_INFO_OFFSET))(this);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_ONINIT_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_ONUPDATE_OFFSET))(this);
		}

		::UnityEngine::Transform* FindTransform(::UnityEngine::Transform* parent, ::System::String* name)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PLAYANIMATIONADVANCED_FINDTRANSFORM_OFFSET))(this, parent, name);
		}
	};
}
