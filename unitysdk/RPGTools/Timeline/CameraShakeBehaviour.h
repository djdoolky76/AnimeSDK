#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class KJCHLFOFENJ;
class PHBPBBJDFIH;
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_APFDAPNDLCK_OFFSET UNITYSDK_OFFSET(0xE8C3330)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_CFEFEIFPMLF_OFFSET UNITYSDK_OFFSET(0xE8C33F0)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_CMNLALFGNMH_OFFSET UNITYSDK_OFFSET(0xE8C3030)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8C3590)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_DJJGODGNJNO_OFFSET UNITYSDK_OFFSET(0xE8C2FB0)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_GET_DESTROYONCLIPEND_OFFSET UNITYSDK_OFFSET(0xE8C2E30)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xE8C2E10)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_LMGHHNFCLOK_OFFSET UNITYSDK_OFFSET(0xE8C3230)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE8C3290)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8C2E50)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_SET_DESTROYONCLIPEND_OFFSET UNITYSDK_OFFSET(0xE8C2E40)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xE8C2E20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CameraShakeBehaviour_TypeDefinitionIndex = 47808;

	class CameraShakeBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::GameCore::VCameraShakeV2* ShakeConfigV2; // 0x10
		::System::String* _UniqueName_k__BackingField; // 0x18
		::System::Boolean _DestroyOnClipEnd_k__BackingField; // 0x20
		::System::Byte _padding0[0x7];
		::KJCHLFOFENJ* ShakeSource; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Void set_UniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_SET_UNIQUENAME_OFFSET))(this, a1);
		}

		::System::Boolean get_DestroyOnClipEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_GET_DESTROYONCLIPEND_OFFSET))(this);
		}

		::System::Void set_DestroyOnClipEnd(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_SET_DESTROYONCLIPEND_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void CMNLALFGNMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_CMNLALFGNMH_OFFSET))(this);
		}

		::System::Boolean APFDAPNDLCK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_APFDAPNDLCK_OFFSET))(this);
		}

		::System::Boolean DJJGODGNJNO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_DJJGODGNJNO_OFFSET))(this);
		}

		::System::Void LMGHHNFCLOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_LMGHHNFCLOK_OFFSET))(this);
		}

		::PHBPBBJDFIH* CFEFEIFPMLF()
		{
			return ((::PHBPBBJDFIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_CFEFEIFPMLF_OFFSET))(this);
		}

	};
}
