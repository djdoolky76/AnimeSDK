#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BLINDBOX_POOL_UI_STARTPOSITIONOFFSETCOMPENSATIONCLIPASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xC88FF40)
#define RPG_CLIENT_BLINDBOX_POOL_UI_STARTPOSITIONOFFSETCOMPENSATIONCLIPASSET_CTOR_OFFSET UNITYSDK_OFFSET(0xC890150)
#define RPG_CLIENT_BLINDBOX_POOL_UI_STARTPOSITIONOFFSETCOMPENSATIONCLIPASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xC890100)

namespace RPG::Client::BlindBox::Pool::Ui
{
	class StartPositionOffsetCompensationClipAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> ReferenceRoot; // 0x18
		::System::Byte _padding0[0x8];
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> RealRoot; // 0x28
		::System::Byte _padding1[0x8];
		::UnityEngine::AnimationCurve* CompensationCurve; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_STARTPOSITIONOFFSETCOMPENSATIONCLIPASSET_CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_STARTPOSITIONOFFSETCOMPENSATIONCLIPASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_STARTPOSITIONOFFSETCOMPENSATIONCLIPASSET_GET_CLIPCAPS_OFFSET))(this);
		}

	};
}
