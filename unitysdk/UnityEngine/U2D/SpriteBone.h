#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/A32676FCB736C8E8.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace UnityEngine::U2D
{
	inline static constexpr unsigned int SpriteBone_TypeDefinitionIndex = 17162;

	struct alignas(8) SpriteBone
	{
		::System::String* m_Name; // 0x10
		::System::String* m_Guid; // 0x18
		::UnityEngine::Vector3 m_Position; // 0x20
		::UnityEngine::Quaternion m_Rotation; // 0x2C
		::System::Single m_Length; // 0x3C
		::System::Int32 m_ParentId; // 0x40
		::UnityEngine::A32676FCB736C8E8 m_Color; // 0x44
	};
}
