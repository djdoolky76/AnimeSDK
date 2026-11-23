#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define F165C3640267C510_A83BD201FCBCE144_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define F165C3640267C510_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x1764800)
#define F165C3640267C510_E3D17824AB1D819C_OFFSET UNITYSDK_OFFSET(0x17648B0)
#define F165C3640267C510_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x1764910)
#define F165C3640267C510_FC3208D7B8C7EE04_1_OFFSET UNITYSDK_OFFSET(0x17646F0)
#define F165C3640267C510_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x1764660)
#define F165C3640267C510__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBF60)

inline static constexpr unsigned int F165C3640267C510_TypeDefinitionIndex = 787;

struct alignas(4) F165C3640267C510
{
	static ::F165C3640267C510* StaticGet_AE04A22CC80CDB9D()
	{
		return (::F165C3640267C510*)Il2CppClass::FromTypeDefinitionIndex(F165C3640267C510_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Int32 A1C223B15FCED98D; // 0x10
	::System::Byte _padding0[0x4];
	::System::UInt64 EE0C437E0542E74E; // 0x18

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + F165C3640267C510_B996A70283B60FAC_OFFSET))(this);
	}

	::System::Boolean A83BD201FCBCE144(::System::Text::StringBuilder* B076D6911116907A)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + F165C3640267C510_A83BD201FCBCE144_OFFSET))(this, B076D6911116907A);
	}

	::System::Boolean E3D17824AB1D819C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F165C3640267C510_E3D17824AB1D819C_OFFSET))(this);
	}

	::System::Void _ctor(::System::Int32 BBE7015EDFE5CC36, ::System::UInt64 EFAFAE9EF0211947)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + F165C3640267C510__CTOR_OFFSET))(this, BBE7015EDFE5CC36, EFAFAE9EF0211947);
	}

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F165C3640267C510_EA28CF291EBB2931_OFFSET))(this);
	}

	/*
	::System::Boolean FC3208D7B8C7EE04(::F165C3640267C510 BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::F165C3640267C510))((::PBYTE)hIl2Cpp + F165C3640267C510_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
	*/

	::System::Boolean FC3208D7B8C7EE04_1(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + F165C3640267C510_FC3208D7B8C7EE04_1_OFFSET))(this, A86A90C31A146E9C);
	}
};
