#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B8C48C8BF406E9BC/EF22C423CB30F1A1.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_AB3BFE7F8C4F7548_AA86E7156486B09A_OFFSET UNITYSDK_OFFSET(0x4120CE0)

namespace UnityEngine
{
	inline static constexpr unsigned int AB3BFE7F8C4F7548_TypeDefinitionIndex = 17091;

	struct alignas(8) AB3BFE7F8C4F7548
	{
		::Il2CppArray<::UnityEngine::Object*>* A308C9CD9A14F86B; // 0x10
		::B8C48C8BF406E9BC::EF22C423CB30F1A1<::System::Int32> BE8C33FEA79E25AF; // 0x18
		::System::Byte _padding0[0x8];
		::B8C48C8BF406E9BC::EF22C423CB30F1A1<::System::Int32> A1C69DE9775F5BED; // 0x28

		::System::Void AA86E7156486B09A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AB3BFE7F8C4F7548_AA86E7156486B09A_OFFSET))(this);
		}
	};
}
