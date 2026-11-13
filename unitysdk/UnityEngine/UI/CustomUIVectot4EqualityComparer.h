#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_UI_CUSTOMUIVECTOT4EQUALITYCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD25FC0)
#define UNITYENGINE_UI_CUSTOMUIVECTOT4EQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD25E60)
#define UNITYENGINE_UI_CUSTOMUIVECTOT4EQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD25F40)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CustomUIVectot4EqualityComparer_TypeDefinitionIndex = 6852;

	class CustomUIVectot4EqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CUSTOMUIVECTOT4EQUALITYCOMPARER_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CUSTOMUIVECTOT4EQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::Vector4 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CUSTOMUIVECTOT4EQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

	};
}
