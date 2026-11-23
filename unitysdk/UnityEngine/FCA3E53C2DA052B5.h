#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Collider2D; }

#define UNITYENGINE_FCA3E53C2DA052B5_B65268915505EF1A_OFFSET UNITYSDK_OFFSET(0x41B16E0)
#define UNITYENGINE_FCA3E53C2DA052B5_E9566EC8F9BB5ACD_OFFSET UNITYSDK_OFFSET(0x414C280)
#define UNITYENGINE_FCA3E53C2DA052B5_F26BD82CCAEFB4AD_OFFSET UNITYSDK_OFFSET(0x4117990)
#define UNITYENGINE_FCA3E53C2DA052B5_F5E813789A9B76DD_OFFSET UNITYSDK_OFFSET(0x41B1630)

namespace UnityEngine
{
	inline static constexpr unsigned int FCA3E53C2DA052B5_TypeDefinitionIndex = 21368;

	struct alignas(4) FCA3E53C2DA052B5
	{
		::UnityEngine::Vector2 B58FFC99D54050C2; // 0x10
		::UnityEngine::Vector2 F83C4AF0B738639A; // 0x18
		::UnityEngine::Vector2 E94143082AABB810; // 0x20
		::System::Single EA73309374408D18; // 0x28
		::System::Single AD07703662F8117A; // 0x2C
		::System::Int32 B54114F6BBE37349; // 0x30

		::UnityEngine::Vector2 B65268915505EF1A()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FCA3E53C2DA052B5_B65268915505EF1A_OFFSET))(this);
		}

		::UnityEngine::Vector2 F26BD82CCAEFB4AD()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FCA3E53C2DA052B5_F26BD82CCAEFB4AD_OFFSET))(this);
		}

		::UnityEngine::Collider2D* F5E813789A9B76DD()
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FCA3E53C2DA052B5_F5E813789A9B76DD_OFFSET))(this);
		}

		::System::Single E9566EC8F9BB5ACD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FCA3E53C2DA052B5_E9566EC8F9BB5ACD_OFFSET))(this);
		}
	};
}
