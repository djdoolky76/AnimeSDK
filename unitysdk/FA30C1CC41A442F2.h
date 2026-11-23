#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FA30C1CC41A442F2_A2BFA8E35CD54235_OFFSET UNITYSDK_OFFSET(0x3E9BC40)
#define FA30C1CC41A442F2_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x3E9BD40)
#define FA30C1CC41A442F2_BCB0A4DD6EA3B4C9_OFFSET UNITYSDK_OFFSET(0x3E9B8F0)
#define FA30C1CC41A442F2_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x3E9BAB0)
#define FA30C1CC41A442F2__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E9BE70)
#define FA30C1CC41A442F2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FA30C1CC41A442F2_TypeDefinitionIndex = 15061;

class FA30C1CC41A442F2 : public ::System::Object
{
public:
	static ::FA30C1CC41A442F2** StaticGet_F08B06C28BCAF1B1()
	{
		return (::FA30C1CC41A442F2**)Il2CppClass::FromTypeDefinitionIndex(FA30C1CC41A442F2_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_B137D34C8E3C83C2()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(FA30C1CC41A442F2_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FA30C1CC41A442F2__CCTOR_OFFSET))();
	}

	::System::Int32 B996A70283B60FAC(::System::Object* A51D4D0C329756C6)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FA30C1CC41A442F2_B996A70283B60FAC_OFFSET))(this, A51D4D0C329756C6);
	}

	::System::Int32 A2BFA8E35CD54235(::System::String* BEE401863CFC654A)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FA30C1CC41A442F2_A2BFA8E35CD54235_OFFSET))(this, BEE401863CFC654A);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA30C1CC41A442F2__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::System::Object* ACE5ADE86AC2AC7D, ::System::Object* F15EA82D1C074D9E)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + FA30C1CC41A442F2_FC3208D7B8C7EE04_OFFSET))(this, ACE5ADE86AC2AC7D, F15EA82D1C074D9E);
	}

	::System::Int32 BCB0A4DD6EA3B4C9(::System::Object* ACE5ADE86AC2AC7D, ::System::Object* F15EA82D1C074D9E)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + FA30C1CC41A442F2_BCB0A4DD6EA3B4C9_OFFSET))(this, ACE5ADE86AC2AC7D, F15EA82D1C074D9E);
	}
};
