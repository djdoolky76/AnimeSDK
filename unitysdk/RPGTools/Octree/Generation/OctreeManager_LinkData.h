#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

namespace RPGTools::Octree::Generation
{
	struct alignas(8) OctreeManager_LinkData
	{
		::System::String* Name; // 0x10
		::System::Single Weight; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* LinkOrigin; // 0x20
	};
}
