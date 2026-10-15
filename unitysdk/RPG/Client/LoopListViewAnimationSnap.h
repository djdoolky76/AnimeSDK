#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace SuperScrollView { class LoopListView2; }
namespace System { class String; }

#define RPG_CLIENT_LOOPLISTVIEWANIMATIONSNAP_CTOR_OFFSET UNITYSDK_OFFSET(0xD4E7790)
#define RPG_CLIENT_LOOPLISTVIEWANIMATIONSNAP_UPDATE_OFFSET UNITYSDK_OFFSET(0xD4E74D0)
#define RPG_CLIENT_LOOPLISTVIEWANIMATIONSNAP__UPDATEITEMANIMSTATE_OFFSET UNITYSDK_OFFSET(0xD4E7540)

namespace RPG::Client
{
	class LoopListViewAnimationSnap : public ::UnityEngine::MonoBehaviour
	{
	public:
		::SuperScrollView::LoopListView2* mLoopListView; // 0x18
		::System::Single mItemDistance; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* mItemSnapAnimationName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWANIMATIONSNAP_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWANIMATIONSNAP_UPDATE_OFFSET))(this);
		}

		::System::Void _UpdateItemAnimState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWANIMATIONSNAP__UPDATEITEMANIMSTATE_OFFSET))(this);
		}

	};
}
