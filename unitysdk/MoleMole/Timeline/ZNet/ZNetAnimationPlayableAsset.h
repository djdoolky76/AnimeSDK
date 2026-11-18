#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/AnimationPlayableAsset.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETANIMATIONPLAYABLEASSET_HJEDJBKNNBL_OFFSET UNITYSDK_OFFSET(0x13A0C8A0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETANIMATIONPLAYABLEASSET_LOPLFCCIKNB_OFFSET UNITYSDK_OFFSET(0x13A0C820)
#define MOLEMOLE_TIMELINE_ZNET_ZNETANIMATIONPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x13A0C680)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetAnimationPlayableAsset_TypeDefinitionIndex = 86502;

	class ZNetAnimationPlayableAsset : public ::UnityEngine::Timeline::AnimationPlayableAsset
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::AnimationClip*>* clipList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETANIMATIONPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::System::Void LOPLFCCIKNB(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETANIMATIONPLAYABLEASSET_LOPLFCCIKNB_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void HJEDJBKNNBL(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETANIMATIONPLAYABLEASSET_HJEDJBKNNBL_OFFSET))(this, ABHBKFJKINO);
		}
	};
}
