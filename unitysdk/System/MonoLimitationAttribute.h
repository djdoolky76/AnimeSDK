#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MonoTODOAttribute.h"
namespace System { class String; }

#define SYSTEM_MONOLIMITATIONATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C27FC70)

namespace System
{
	inline static constexpr unsigned int MonoLimitationAttribute_TypeDefinitionIndex = 152;

	class MonoLimitationAttribute : public ::System::MonoTODOAttribute
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MONOLIMITATIONATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
