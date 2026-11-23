#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A4B66016AF855CC7_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x3E38650)
#define A4B66016AF855CC7_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3E387B0)
#define A4B66016AF855CC7_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x3E38540)
#define A4B66016AF855CC7__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E388C0)
#define A4B66016AF855CC7__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7DC0)

inline static constexpr unsigned int A4B66016AF855CC7_TypeDefinitionIndex = 15283;

class A4B66016AF855CC7 : public ::System::Object
{
public:
	static ::A4B66016AF855CC7** StaticGet_EE7F645A61797C99()
	{
		return (::A4B66016AF855CC7**)Il2CppClass::FromTypeDefinitionIndex(A4B66016AF855CC7_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Il2CppArray<::System::Byte>* BF3A584683910405; // 0x10
	::System::Boolean F3FAD1C7A7DDC997; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 ED6B739E3493B1E8; // 0x1C

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + A4B66016AF855CC7_B996A70283B60FAC_OFFSET))(this);
	}

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + A4B66016AF855CC7_EA28CF291EBB2931_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A4B66016AF855CC7__CCTOR_OFFSET))();
	}

	::System::Boolean FC3208D7B8C7EE04(::System::Object* BD2A83A19DF5362C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + A4B66016AF855CC7_FC3208D7B8C7EE04_OFFSET))(this, BD2A83A19DF5362C);
	}

	::System::Void _ctor(::Il2CppArray<::System::Byte>* BF3A584683910405)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + A4B66016AF855CC7__CTOR_OFFSET))(this, BF3A584683910405);
	}
};
