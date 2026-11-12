#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_DISALLOWMULTIPLECOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x206982B0)

namespace UnityEngine
{
	inline static constexpr unsigned int DisallowMultipleComponent_TypeDefinitionIndex = 4302;

	class DisallowMultipleComponent : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISALLOWMULTIPLECOMPONENT_CTOR_OFFSET))(this);
		}

	};
}
