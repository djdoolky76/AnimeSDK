#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_AC0F36F10BF6C799__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace UnityEngine
{
	inline static constexpr unsigned int AC0F36F10BF6C799_TypeDefinitionIndex = 16951;

	class AC0F36F10BF6C799 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AC0F36F10BF6C799__CTOR_OFFSET))(this);
		}
	};
}
