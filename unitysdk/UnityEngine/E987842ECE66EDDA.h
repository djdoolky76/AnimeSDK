#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_E987842ECE66EDDA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace UnityEngine
{
	inline static constexpr unsigned int E987842ECE66EDDA_TypeDefinitionIndex = 17321;

	class E987842ECE66EDDA : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_E987842ECE66EDDA__CTOR_OFFSET))(this);
		}
	};
}
