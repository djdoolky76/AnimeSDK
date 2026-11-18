#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FECLKOKOLJK;
namespace System { template <typename T1, typename T2> class Func_2; }

#define LBAINOMNKFD___C_DGOICLEFAEM_OFFSET UNITYSDK_OFFSET(0x17737FC0)
#define LBAINOMNKFD___C_FBADEGEOBPP_OFFSET UNITYSDK_OFFSET(0x17737FA0)
#define LBAINOMNKFD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17737F50)
#define LBAINOMNKFD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17737F90)

inline static constexpr unsigned int LBAINOMNKFD___c_TypeDefinitionIndex = 53374;

class LBAINOMNKFD___c : public ::System::Object
{
public:
	static ::System::Func_2<::FECLKOKOLJK*, ::System::UInt32>** StaticGet___9__37_0()
	{
		return (::System::Func_2<::FECLKOKOLJK*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(LBAINOMNKFD___c_TypeDefinitionIndex)->GetStaticField(0x383B0);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__38_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LBAINOMNKFD___c_TypeDefinitionIndex)->GetStaticField(0x383B8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LBAINOMNKFD___c_TypeDefinitionIndex)->GetStaticField(0x383C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBAINOMNKFD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAINOMNKFD___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 FBADEGEOBPP(::FECLKOKOLJK* EJCBEJMGFAJ)
	{
		return ((::System::UInt32(*)(::PVOID, ::FECLKOKOLJK*))((::PBYTE)hIl2Cpp + LBAINOMNKFD___C_FBADEGEOBPP_OFFSET))(this, EJCBEJMGFAJ);
	}

	::System::Int32 DGOICLEFAEM(::System::UInt32 HBJOLKHGGDD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBAINOMNKFD___C_DGOICLEFAEM_OFFSET))(this, HBJOLKHGGDD);
	}
};
