#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Type; }
namespace System::Reflection::Emit { class ILGenerator; }

#define MESSAGEPACK_INTERNAL_ARGUMENTFIELD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C0D980)
#define MESSAGEPACK_INTERNAL_ARGUMENTFIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x3C0D970)
#define MESSAGEPACK_INTERNAL_ARGUMENTFIELD_EMITLDARG_OFFSET UNITYSDK_OFFSET(0x3C0DAB0)
#define MESSAGEPACK_INTERNAL_ARGUMENTFIELD_EMITLOAD_OFFSET UNITYSDK_OFFSET(0x3C0DA90)

namespace MessagePack::Internal
{
	struct alignas(8) ArgumentField
	{
		::System::Int32 i; // 0x10
		::System::Boolean ref; // 0x14
		::System::Byte _padding0[0x3];
		::System::Reflection::Emit::ILGenerator* il; // 0x18
		::System::Void _ctor(::System::Reflection::Emit::ILGenerator* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ARGUMENTFIELD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Reflection::Emit::ILGenerator* a1, ::System::Int32 a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ARGUMENTFIELD_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EmitLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ARGUMENTFIELD_EMITLOAD_OFFSET))(this);
		}

		::System::Void EmitLdarg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_ARGUMENTFIELD_EMITLDARG_OFFSET))(this);
		}

	};
}
