#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"

namespace MoleMole::Timeline { class CamLookAtFollowBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class IExposedPropertyTable; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1C0C07F0)
#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP_FDNCPNFNNLJ_OFFSET UNITYSDK_OFFSET(0x1C0C0A70)
#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1C0C07E0)
#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C0CD0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CamLookAtFollowClip_TypeDefinitionIndex = 65711;

	class CamLookAtFollowClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::CamLookAtFollowBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}

		static ::UnityEngine::Transform* FDNCPNFNNLJ(::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> IHFDFJICHLA, ::UnityEngine::IExposedPropertyTable* AHEDFMJIOLN, ::UnityEngine::GameObject* AMNIHACKELI, ::System::String* HAAJFLJEHNH)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::ExposedReference_1<::UnityEngine::Transform*>, ::UnityEngine::IExposedPropertyTable*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP_FDNCPNFNNLJ_OFFSET))(IHFDFJICHLA, AHEDFMJIOLN, AMNIHACKELI, HAAJFLJEHNH);
		}
	};
}
