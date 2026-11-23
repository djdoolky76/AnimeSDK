#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_E18D0486499A5F76_B65268915505EF1A_OFFSET UNITYSDK_OFFSET(0x4109F20)
#define UNITYENGINE_E18D0486499A5F76_F26BD82CCAEFB4AD_OFFSET UNITYSDK_OFFSET(0x40EAF00)

namespace UnityEngine
{
	inline static constexpr unsigned int E18D0486499A5F76_TypeDefinitionIndex = 20814;

	struct alignas(4) E18D0486499A5F76
	{
		::UnityEngine::Vector3 F83C4AF0B738639A; // 0x10
		::UnityEngine::Vector3 E94143082AABB810; // 0x1C
		::UnityEngine::Vector3 A2727DE068284975; // 0x28
		::System::Int32 A4A7814F31EF5BA7; // 0x34
		::System::Int32 E73FB2816DFFC5E9; // 0x38
		::System::Single EFE754A8CD22BBA1; // 0x3C

		::UnityEngine::Vector3 F26BD82CCAEFB4AD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_E18D0486499A5F76_F26BD82CCAEFB4AD_OFFSET))(this);
		}

		::UnityEngine::Vector3 B65268915505EF1A()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_E18D0486499A5F76_B65268915505EF1A_OFFSET))(this);
		}
	};
}
