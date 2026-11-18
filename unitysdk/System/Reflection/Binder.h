#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_REFLECTION_BINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E48E010)

namespace System::Reflection
{
	inline static constexpr unsigned int Binder_TypeDefinitionIndex = 528;

	class Binder : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_BINDER__CTOR_OFFSET))(this);
		}
	};
}
