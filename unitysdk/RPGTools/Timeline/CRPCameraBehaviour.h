#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPGTools::Timeline { class CRPCameraClip; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_BKMLKNEINHO_OFFSET UNITYSDK_OFFSET(0xE8B2FF0)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8B3480)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_EHKIOIJPAAD_OFFSET UNITYSDK_OFFSET(0xE8B3190)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8B2BA0)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_KCPODLIDDCG_OFFSET UNITYSDK_OFFSET(0xE8B2F80)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_KIALEMJNDNA_OFFSET UNITYSDK_OFFSET(0xE8B3260)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8B2BC0)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_POIGKNOEGDJ_OFFSET UNITYSDK_OFFSET(0xE8B30C0)
#define RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8B2BB0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraBehaviour_TypeDefinitionIndex = 47887;

	class CRPCameraBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CRPCameraClip* _Clip_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::CRPCameraClip* get_Clip()
		{
			return ((::RPGTools::Timeline::CRPCameraClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::CRPCameraClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CRPCameraClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CinemachineVirtualCamera* POIGKNOEGDJ(::System::String* a1)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_POIGKNOEGDJ_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* EHKIOIJPAAD(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_EHKIOIJPAAD_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* KIALEMJNDNA(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_KIALEMJNDNA_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* KCPODLIDDCG()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_KCPODLIDDCG_OFFSET))(this);
		}

		::UnityEngine::Transform* BKMLKNEINHO()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABEHAVIOUR_BKMLKNEINHO_OFFSET))(this);
		}

	};
}
