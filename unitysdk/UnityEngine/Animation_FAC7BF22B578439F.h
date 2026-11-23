#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animation; }

#define UNITYENGINE_ANIMATION_FAC7BF22B578439F_B5B5C7AD4F7ECB57_OFFSET UNITYSDK_OFFSET(0x4104AD0)
#define UNITYENGINE_ANIMATION_FAC7BF22B578439F_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x27A9040)
#define UNITYENGINE_ANIMATION_FAC7BF22B578439F_E49BD7E84AC43B7F_OFFSET UNITYSDK_OFFSET(0x4104B70)
#define UNITYENGINE_ANIMATION_FAC7BF22B578439F__CTOR_OFFSET UNITYSDK_OFFSET(0x4104B30)

namespace UnityEngine
{
	inline static constexpr unsigned int Animation_FAC7BF22B578439F_TypeDefinitionIndex = 21057;

	class Animation_FAC7BF22B578439F : public ::System::Object
	{
	public:
		::UnityEngine::Animation* BFD0D898BFE25E30; // 0x10
		::System::Int32 A4F4FD55490692BF; // 0x18

		::System::Void _ctor(::UnityEngine::Animation* F2D5EFD5887B8FD4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_FAC7BF22B578439F__CTOR_OFFSET))(this, F2D5EFD5887B8FD4);
		}

		::System::Object* E49BD7E84AC43B7F()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_FAC7BF22B578439F_E49BD7E84AC43B7F_OFFSET))(this);
		}

		::System::Boolean B5B5C7AD4F7ECB57()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_FAC7BF22B578439F_B5B5C7AD4F7ECB57_OFFSET))(this);
		}

		::System::Void BC5FC01AE53FF41F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_FAC7BF22B578439F_BC5FC01AE53FF41F_OFFSET))(this);
		}
	};
}
