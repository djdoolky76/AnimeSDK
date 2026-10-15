#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define SUPERSCROLLVIEW_GRIDVIEWITEMPREFABCONFDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE99DA90)

namespace SuperScrollView
{
	class GridViewItemPrefabConfData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* mItemPrefab; // 0x10
		::System::Int32 mInitCreateCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDVIEWITEMPREFABCONFDATA_CTOR_OFFSET))(this);
		}

	};
}
