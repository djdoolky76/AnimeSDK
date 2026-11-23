#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_B7CD415FDE40DDCA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace UnityEngine
{
	inline static constexpr unsigned int B7CD415FDE40DDCA_TypeDefinitionIndex = 17243;

	class B7CD415FDE40DDCA : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_B7CD415FDE40DDCA__CTOR_OFFSET))(this);
		}
	};
}
