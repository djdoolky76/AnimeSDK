#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_DISABLESCRIPTSERIALIZATIONCACHEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x206982A0)

namespace UnityEngine
{
	inline static constexpr unsigned int DisableScriptSerializationCacheAttribute_TypeDefinitionIndex = 4316;

	class DisableScriptSerializationCacheAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISABLESCRIPTSERIALIZATIONCACHEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
