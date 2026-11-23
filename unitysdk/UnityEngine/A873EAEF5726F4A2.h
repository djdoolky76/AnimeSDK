#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_A873EAEF5726F4A2__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace UnityEngine
{
	inline static constexpr unsigned int A873EAEF5726F4A2_TypeDefinitionIndex = 17639;

	class A873EAEF5726F4A2 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_A873EAEF5726F4A2__CTOR_OFFSET))(this);
		}
	};
}
