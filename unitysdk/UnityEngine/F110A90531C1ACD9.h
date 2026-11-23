#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_F110A90531C1ACD9__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace UnityEngine
{
	inline static constexpr unsigned int F110A90531C1ACD9_TypeDefinitionIndex = 17691;

	class F110A90531C1ACD9 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_F110A90531C1ACD9__CTOR_OFFSET))(this);
		}
	};
}
