#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOKKBNGCBJL.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class IExposedPropertyTable; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_IKBINDTARGETCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x13F25B80)
#define MOLEMOLE_TIMELINE_IKBINDTARGETCLIP_FDNCPNFNNLJ_OFFSET UNITYSDK_OFFSET(0x13F25DE0)
#define MOLEMOLE_TIMELINE_IKBINDTARGETCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x13F25B70)
#define MOLEMOLE_TIMELINE_IKBINDTARGETCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x13F25D80)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int IKBindTargetClip_TypeDefinitionIndex = 73951;

	class IKBindTargetClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::IOKKBNGCBJL ikType; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> target; // 0x20
		::System::Byte _padding1[0x8];
		::UnityEngine::Transform* resolvedTarget; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKBINDTARGETCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKBINDTARGETCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKBINDTARGETCLIP_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}

		::System::Void FDNCPNFNNLJ(::UnityEngine::IExposedPropertyTable* AHEDFMJIOLN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::IExposedPropertyTable*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKBINDTARGETCLIP_FDNCPNFNNLJ_OFFSET))(this, AHEDFMJIOLN);
		}
	};
}
