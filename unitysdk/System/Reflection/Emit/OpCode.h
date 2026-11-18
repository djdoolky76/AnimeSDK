#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_REFLECTION_EMIT_OPCODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x84AD70)
#define SYSTEM_REFLECTION_EMIT_OPCODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x84ACE0)
#define SYSTEM_REFLECTION_EMIT_OPCODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x84ADD0)
#define SYSTEM_REFLECTION_EMIT_OPCODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x84ADD0)
#define SYSTEM_REFLECTION_EMIT_OPCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x84ACB0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int OpCode_TypeDefinitionIndex = 620;

	struct alignas(4) OpCode
	{
		::System::Byte op1; // 0x10
		::System::Byte op2; // 0x11
		::System::Byte push; // 0x12
		::System::Byte pop; // 0x13
		::System::Byte size; // 0x14
		::System::Byte type; // 0x15
		::System::Byte args; // 0x16
		::System::Byte flow; // 0x17

		::System::Void _ctor(::System::Int32 p, ::System::Int32 q)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE__CTOR_OFFSET))(this, p, q);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_EQUALS_OFFSET))(this, obj);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_TOSTRING_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODE_GET_NAME_OFFSET))(this);
		}
	};
}
