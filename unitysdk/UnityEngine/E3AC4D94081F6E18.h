#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/A4C44C2C05C48C19.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_E3AC4D94081F6E18_E89757E6C86D064F_OFFSET UNITYSDK_OFFSET(0x41229C0)
#define UNITYENGINE_E3AC4D94081F6E18_FD4987BC3E5D912A_OFFSET UNITYSDK_OFFSET(0x4122A00)

namespace UnityEngine
{
	inline static constexpr unsigned int E3AC4D94081F6E18_TypeDefinitionIndex = 16981;

	struct alignas(4) E3AC4D94081F6E18
	{
		::UnityEngine::A4C44C2C05C48C19 A5C81A6282D441BD; // 0x10
		::System::Int32 FEED064932C23CB6; // 0x14
		::System::Int32 F7517EF0CE82A9B2; // 0x18
		::System::Int32 E0437B7AC0F01A07; // 0x1C
		::System::Single E15353E4D7C97DE9; // 0x20
		::System::Int32 F9B5952679DC42BF; // 0x24
		::UnityEngine::Vector3 B0F8C498E10B3D14; // 0x28
		::System::Single A90AC0845E3C26F6; // 0x34

		::UnityEngine::Vector3 FD4987BC3E5D912A()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_E3AC4D94081F6E18_FD4987BC3E5D912A_OFFSET))(this);
		}

		::UnityEngine::Vector3 E89757E6C86D064F()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_E3AC4D94081F6E18_E89757E6C86D064F_OFFSET))(this);
		}
	};
}
