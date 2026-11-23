#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace UnityEngine
{
	inline static constexpr unsigned int EF22BA5C68779898_TypeDefinitionIndex = 21099;

	struct alignas(8) EF22BA5C68779898
	{
		::System::String* E67211D321B1E764; // 0x10
		::System::String* E0687E9E038F5DB4; // 0x18
		::UnityEngine::Vector3 B01139C5E3D0B4C4; // 0x20
		::UnityEngine::Quaternion EBA1138F9C0C3267; // 0x2C
		::UnityEngine::Vector3 B851C317C00C8363; // 0x3C
	};
}
