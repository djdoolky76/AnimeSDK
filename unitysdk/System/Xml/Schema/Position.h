#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define SYSTEM_XML_SCHEMA_POSITION_CTOR_OFFSET UNITYSDK_OFFSET(0xE590)

namespace System::Xml::Schema
{
	struct alignas(8) Position
	{
		::System::Int32 symbol; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* particle; // 0x18
		::System::Void _ctor(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_POSITION_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
