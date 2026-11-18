#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BIJIGJPHCED;

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int InternalSceneEntityDestroyRequest_TypeDefinitionIndex = 89031;

	struct alignas(8) InternalSceneEntityDestroyRequest
	{
		::System::UInt32 NetID; // 0x10
		::System::UInt32 EntityID; // 0x14
		::BIJIGJPHCED* reason; // 0x18
		::Foundation::ViewObject::GroupMemberIdentifier member; // 0x20
		::UnityEngine::Vector3 lastPos; // 0x28
		::UnityEngine::Vector3 lastRot; // 0x34
	};
}
