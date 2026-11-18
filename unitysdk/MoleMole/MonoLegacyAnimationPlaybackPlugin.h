#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationState; }

#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_AWAKE_OFFSET UNITYSDK_OFFSET(0x12485BF0)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_GETCURRENTLYPLAYINGANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x12486350)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_GOTOFRAMEANDPAUSE_OFFSET UNITYSDK_OFFSET(0x124865F0)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_IAJBDMBGMKK_OFFSET UNITYSDK_OFFSET(0x12486070)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_NAPPGJMLEIO_OFFSET UNITYSDK_OFFSET(0x12485C40)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_PAUSE_OFFSET UNITYSDK_OFFSET(0x12486550)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_PLAYBACKWARD_OFFSET UNITYSDK_OFFSET(0x12486100)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_PLAYFORWARDFROMFRAME_OFFSET UNITYSDK_OFFSET(0x12485E20)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0x12486270)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x124867A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLegacyAnimationPlaybackPlugin_TypeDefinitionIndex = 47171;

	class MonoLegacyAnimationPlaybackPlugin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* bindAnimation; // 0x18
		::UnityEngine::AnimationClip* targetClip; // 0x20
		::UnityEngine::AnimationState* DJPJGINENFA; // 0x28
		::System::Boolean NFANOOAJOPG; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single EPPCCEEAHLN; // 0x34
		::System::Boolean GLCKMFAPIPC; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_AWAKE_OFFSET))(this);
		}

		::System::Void PlayForwardFromFrame(::System::Int32 GLPGONDHMLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_PLAYFORWARDFROMFRAME_OFFSET))(this, GLPGONDHMLI);
		}

		::System::Void PlayBackward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_PLAYBACKWARD_OFFSET))(this);
		}

		::System::Void PlayForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_PLAYFORWARD_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_PAUSE_OFFSET))(this);
		}

		::System::Void GoToFrameAndPause(::System::Int32 JCEJDIHGDEA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_GOTOFRAMEANDPAUSE_OFFSET))(this, JCEJDIHGDEA);
		}

		::UnityEngine::AnimationState* GetCurrentlyPlayingAnimationState()
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_GETCURRENTLYPLAYINGANIMATIONSTATE_OFFSET))(this);
		}

		::System::Single IAJBDMBGMKK(::System::Int32 JCEJDIHGDEA, ::UnityEngine::AnimationClip* PHGBOCIDLEI)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_IAJBDMBGMKK_OFFSET))(this, JCEJDIHGDEA, PHGBOCIDLEI);
		}

		::System::Void NAPPGJMLEIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_NAPPGJMLEIO_OFFSET))(this);
		}
	};
}
