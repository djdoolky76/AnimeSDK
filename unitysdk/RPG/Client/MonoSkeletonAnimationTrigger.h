#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace Spine { class AnimationState; }
namespace Spine { class Event; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class SkeletonAnimation; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class Object; }

#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_BHKCEEMNMAO_OFFSET UNITYSDK_OFFSET(0xD863FF0)
#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0xD864540)
#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_GCMLCDJMCPA_OFFSET UNITYSDK_OFFSET(0xD864360)
#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_GOJOEOAOAHG_OFFSET UNITYSDK_OFFSET(0xD864140)
#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_HEOEBFEKEHD_OFFSET UNITYSDK_OFFSET(0xD8642E0)
#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_START_OFFSET UNITYSDK_OFFSET(0xD863F60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSkeletonAnimationTrigger_TypeDefinitionIndex = 68967;

	class MonoSkeletonAnimationTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonGraphic* _SkeletonGraphic; // 0x18
		::Spine::Unity::SkeletonAnimation* _SkeletonAnimation; // 0x20
		::Il2CppArray<::System::Object*>* _Triggers; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_START_OFFSET))(this);
		}

		::System::Void BHKCEEMNMAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_BHKCEEMNMAO_OFFSET))(this);
		}

		::System::Void GOJOEOAOAHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_GOJOEOAOAHG_OFFSET))(this);
		}

		::Spine::AnimationState* HEOEBFEKEHD()
		{
			return ((::Spine::AnimationState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_HEOEBFEKEHD_OFFSET))(this);
		}

		::System::Void GCMLCDJMCPA(::Spine::TrackEntry* a1, ::Spine::Event* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_GCMLCDJMCPA_OFFSET))(this, a1, a2);
		}

	};
}
