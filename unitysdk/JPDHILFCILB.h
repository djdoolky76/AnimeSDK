#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OPPLLDAPMOH.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define JPDHILFCILB_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x6FADC0)
#define JPDHILFCILB_HMKOKIMGNLL_OFFSET UNITYSDK_OFFSET(0x6FAE50)
#define JPDHILFCILB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6FAC10)
#define JPDHILFCILB__CCTOR_OFFSET UNITYSDK_OFFSET(0x130A5690)
#define JPDHILFCILB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6FACC0)
#define JPDHILFCILB__CTOR_2_OFFSET UNITYSDK_OFFSET(0x6FACF0)
#define JPDHILFCILB__CTOR_3_OFFSET UNITYSDK_OFFSET(0x6FAD20)
#define JPDHILFCILB__CTOR_4_OFFSET UNITYSDK_OFFSET(0x6FAD50)
#define JPDHILFCILB__CTOR_OFFSET UNITYSDK_OFFSET(0x6FAC90)

inline static constexpr unsigned int JPDHILFCILB_TypeDefinitionIndex = 72367;

struct alignas(8) JPDHILFCILB
{
	static ::JPDHILFCILB* StaticGet_LEDNKBDFMOJ()
	{
		return (::JPDHILFCILB*)Il2CppClass::FromTypeDefinitionIndex(JPDHILFCILB_TypeDefinitionIndex)->GetStaticField(0x3D740);
	}
	static ::JPDHILFCILB* StaticGet_FDJHEBHLJLD()
	{
		return (::JPDHILFCILB*)Il2CppClass::FromTypeDefinitionIndex(JPDHILFCILB_TypeDefinitionIndex)->GetStaticField(0x3D770);
	}
	static ::JPDHILFCILB* StaticGet_EFMCBKOMKIH()
	{
		return (::JPDHILFCILB*)Il2CppClass::FromTypeDefinitionIndex(JPDHILFCILB_TypeDefinitionIndex)->GetStaticField(0x3D7A0);
	}
	static ::JPDHILFCILB* StaticGet_CKLNGEOKBIH()
	{
		return (::JPDHILFCILB*)Il2CppClass::FromTypeDefinitionIndex(JPDHILFCILB_TypeDefinitionIndex)->GetStaticField(0x3D7D0);
	}
	static ::JPDHILFCILB* StaticGet_JCNMPAFLCHJ()
	{
		return (::JPDHILFCILB*)Il2CppClass::FromTypeDefinitionIndex(JPDHILFCILB_TypeDefinitionIndex)->GetStaticField(0x3D800);
	}
	::OPPLLDAPMOH OBNIAHNMHPF; // 0x10
	::System::Byte _padding0[0x4];
	::System::Double MNFNCCKHDKG; // 0x18
	::System::Boolean ANDPODJMKJO; // 0x20
	::System::Boolean OGCJBCGEFFH; // 0x21
	::System::Byte _padding1[0x6];
	::System::Double CNKEBJOCFKM; // 0x28
	::System::Double ODDBGENACLO; // 0x30
	::System::String* HNEHFILCMJI; // 0x38

	::System::Void _ctor(::OPPLLDAPMOH OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::OPPLLDAPMOH))((::PBYTE)hIl2Cpp + JPDHILFCILB__CTOR_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void _ctor_1(::System::String* GLCLMHEFDBJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JPDHILFCILB__CTOR_1_OFFSET))(this, GLCLMHEFDBJ);
	}

	::System::Void _ctor_2(::System::Int32 IAJLLMALHJJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JPDHILFCILB__CTOR_2_OFFSET))(this, IAJLLMALHJJ);
	}

	::System::Void _ctor_3(::System::Double ODEEHGFJJAN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + JPDHILFCILB__CTOR_3_OFFSET))(this, ODEEHGFJJAN);
	}

	::System::Void _ctor_4(::System::Boolean ANDPODJMKJO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPDHILFCILB__CTOR_4_OFFSET))(this, ANDPODJMKJO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPDHILFCILB__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDHILFCILB_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDHILFCILB_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::String* HMKOKIMGNLL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDHILFCILB_HMKOKIMGNLL_OFFSET))(this);
	}
};
