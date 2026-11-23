#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_E041146DC1E2C09C__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace UnityEngine
{
	inline static constexpr unsigned int E041146DC1E2C09C_TypeDefinitionIndex = 16948;

	class E041146DC1E2C09C : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_E041146DC1E2C09C__CTOR_OFFSET))(this);
		}
	};
}
