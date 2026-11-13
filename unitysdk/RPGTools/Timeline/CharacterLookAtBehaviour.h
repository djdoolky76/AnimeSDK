#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPGTools::Timeline { class CharacterLookAtData; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x1E3ED700)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1E3ECD80)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3ED8E0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_GOKKKABOAGJ_OFFSET UNITYSDK_OFFSET(0x1E3ED8A0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_NDNKMGCDKMH_OFFSET UNITYSDK_OFFSET(0x1E3ED320)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1E3ED850)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1E3ED740)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1E3ED7C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterLookAtBehaviour_TypeDefinitionIndex = 49006;

	class CharacterLookAtBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterLookAtData* Config; // 0x20
		::UnityEngine::GameObject* Target; // 0x28
		::RPG::Client::CharacterMonoAvatar* _CharacterMonoAvatar; // 0x30
		::System::Single _currentTime; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NDNKMGCDKMH(::UnityEngine::Transform* a1, ::RPG::Client::CharacterMonoAvatar* a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::CharacterMonoAvatar*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_NDNKMGCDKMH_OFFSET))(this, a1, a2);
		}

		::System::Void GOKKKABOAGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATBEHAVIOUR_GOKKKABOAGJ_OFFSET))(this);
		}

	};
}
