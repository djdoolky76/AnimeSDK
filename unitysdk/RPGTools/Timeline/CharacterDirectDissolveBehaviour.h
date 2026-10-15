#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class MonoDirectionDissolve; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8BC500)
#define RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR_IAFEEBHMPNM_OFFSET UNITYSDK_OFFSET(0xE8BBE40)
#define RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8BBDB0)
#define RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE8BC270)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterDirectDissolveBehaviour_TypeDefinitionIndex = 47948;

	class CharacterDirectDissolveBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* TargetName; // 0x10
		::RPG::Client::MonoDirectionDissolve* _TargetRoot; // 0x18
		::UnityEngine::Transform* _TargetQuad; // 0x20
		::UnityEngine::Transform* _EntityRoot; // 0x28
		::System::Boolean EnableDissolve; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 Position; // 0x34
		::UnityEngine::Vector3 Rotation; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IAFEEBHMPNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVEBEHAVIOUR_IAFEEBHMPNM_OFFSET))(this);
		}

	};
}
