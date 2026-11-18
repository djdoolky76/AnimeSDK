#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_XML_SCHEMA_POSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x3F28E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Position_TypeDefinitionIndex = 1960;

	struct alignas(8) Position
	{
		::System::Int32 symbol; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* particle; // 0x18

		::System::Void _ctor(::System::Int32 symbol, ::System::Object* particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_POSITION__CTOR_OFFSET))(this, symbol, particle);
		}
	};
}
