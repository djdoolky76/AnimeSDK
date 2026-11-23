#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define E9A5ABE5C0D016EE_A83BD201FCBCE144_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define E9A5ABE5C0D016EE_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x16DBDA0)
#define E9A5ABE5C0D016EE_E3D17824AB1D819C_OFFSET UNITYSDK_OFFSET(0x16DBE50)
#define E9A5ABE5C0D016EE_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x16DBEB0)
#define E9A5ABE5C0D016EE_FC3208D7B8C7EE04_1_OFFSET UNITYSDK_OFFSET(0x16DBC00)
#define E9A5ABE5C0D016EE_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x16DBD10)
#define E9A5ABE5C0D016EE__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBF60)

inline static constexpr unsigned int E9A5ABE5C0D016EE_TypeDefinitionIndex = 545;

struct alignas(4) E9A5ABE5C0D016EE
{
	static ::E9A5ABE5C0D016EE* StaticGet_AE04A22CC80CDB9D()
	{
		return (::E9A5ABE5C0D016EE*)Il2CppClass::FromTypeDefinitionIndex(E9A5ABE5C0D016EE_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Int32 A1C223B15FCED98D; // 0x10
	::System::Byte _padding0[0x4];
	::System::UInt64 EE0C437E0542E74E; // 0x18

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + E9A5ABE5C0D016EE_EA28CF291EBB2931_OFFSET))(this);
	}

	/*
	::System::Boolean FC3208D7B8C7EE04(::E9A5ABE5C0D016EE BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::E9A5ABE5C0D016EE))((::PBYTE)hIl2Cpp + E9A5ABE5C0D016EE_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
	*/

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E9A5ABE5C0D016EE_B996A70283B60FAC_OFFSET))(this);
	}

	::System::Boolean E3D17824AB1D819C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E9A5ABE5C0D016EE_E3D17824AB1D819C_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04_1(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + E9A5ABE5C0D016EE_FC3208D7B8C7EE04_1_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Boolean A83BD201FCBCE144(::System::Text::StringBuilder* B076D6911116907A)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + E9A5ABE5C0D016EE_A83BD201FCBCE144_OFFSET))(this, B076D6911116907A);
	}

	::System::Void _ctor(::System::Int32 BBE7015EDFE5CC36, ::System::UInt64 EFAFAE9EF0211947)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + E9A5ABE5C0D016EE__CTOR_OFFSET))(this, BBE7015EDFE5CC36, EFAFAE9EF0211947);
	}
};
