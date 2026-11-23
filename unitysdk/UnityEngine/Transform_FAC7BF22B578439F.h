#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define UNITYENGINE_TRANSFORM_FAC7BF22B578439F_B5B5C7AD4F7ECB57_OFFSET UNITYSDK_OFFSET(0x417E9F0)
#define UNITYENGINE_TRANSFORM_FAC7BF22B578439F_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x27A9040)
#define UNITYENGINE_TRANSFORM_FAC7BF22B578439F_E49BD7E84AC43B7F_OFFSET UNITYSDK_OFFSET(0x417EA50)
#define UNITYENGINE_TRANSFORM_FAC7BF22B578439F__CTOR_OFFSET UNITYSDK_OFFSET(0x4104B30)

namespace UnityEngine
{
	inline static constexpr unsigned int Transform_FAC7BF22B578439F_TypeDefinitionIndex = 17708;

	class Transform_FAC7BF22B578439F : public ::System::Object
	{
	public:
		::UnityEngine::Transform* B05ACE5B34A5740A; // 0x10
		::System::Int32 FF2708D25AD6529E; // 0x18

		::System::Void _ctor(::UnityEngine::Transform* F2D5EFD5887B8FD4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_FAC7BF22B578439F__CTOR_OFFSET))(this, F2D5EFD5887B8FD4);
		}

		::System::Object* E49BD7E84AC43B7F()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_FAC7BF22B578439F_E49BD7E84AC43B7F_OFFSET))(this);
		}

		::System::Boolean B5B5C7AD4F7ECB57()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_FAC7BF22B578439F_B5B5C7AD4F7ECB57_OFFSET))(this);
		}

		::System::Void BC5FC01AE53FF41F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_FAC7BF22B578439F_BC5FC01AE53FF41F_OFFSET))(this);
		}
	};
}
