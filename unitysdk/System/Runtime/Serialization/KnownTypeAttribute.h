#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define SYSTEM_RUNTIME_SERIALIZATION_KNOWNTYPEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE810C0)

namespace System::Runtime::Serialization
{
	class KnownTypeAttribute : public ::System::Attribute
	{
	public:
		::System::Type* type; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_KNOWNTYPEATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
