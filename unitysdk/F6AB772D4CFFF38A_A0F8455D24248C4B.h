#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class E3E5DF04DCFE6819; }
namespace System::Threading { class ECC1454E822BC9F0; }

#define F6AB772D4CFFF38A_A0F8455D24248C4B_E3A5203EA04B440F_OFFSET UNITYSDK_OFFSET(0x3CC6120)
#define F6AB772D4CFFF38A_A0F8455D24248C4B_EF88CFD98356D7AB_OFFSET UNITYSDK_OFFSET(0x3CC6190)
#define F6AB772D4CFFF38A_A0F8455D24248C4B__CCTOR_OFFSET UNITYSDK_OFFSET(0x3CC62C0)
#define F6AB772D4CFFF38A_A0F8455D24248C4B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F6AB772D4CFFF38A_A0F8455D24248C4B_TypeDefinitionIndex = 10543;

class F6AB772D4CFFF38A_A0F8455D24248C4B : public ::System::Object
{
public:
	static ::F6AB772D4CFFF38A_A0F8455D24248C4B** StaticGet_FB0A7EB463FA294A()
	{
		return (::F6AB772D4CFFF38A_A0F8455D24248C4B**)Il2CppClass::FromTypeDefinitionIndex(F6AB772D4CFFF38A_A0F8455D24248C4B_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Threading::E3E5DF04DCFE6819** StaticGet_EECE4976CA05CAF2()
	{
		return (::System::Threading::E3E5DF04DCFE6819**)Il2CppClass::FromTypeDefinitionIndex(F6AB772D4CFFF38A_A0F8455D24248C4B_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Threading::ECC1454E822BC9F0** StaticGet_B24814D1FAA5BA7B()
	{
		return (::System::Threading::ECC1454E822BC9F0**)Il2CppClass::FromTypeDefinitionIndex(F6AB772D4CFFF38A_A0F8455D24248C4B_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F6AB772D4CFFF38A_A0F8455D24248C4B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6AB772D4CFFF38A_A0F8455D24248C4B__CTOR_OFFSET))(this);
	}

	::System::Void E3A5203EA04B440F(::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + F6AB772D4CFFF38A_A0F8455D24248C4B_E3A5203EA04B440F_OFFSET))(this, E5EB06E4FD2C32F7);
	}

	::System::Void EF88CFD98356D7AB(::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + F6AB772D4CFFF38A_A0F8455D24248C4B_EF88CFD98356D7AB_OFFSET))(this, E5EB06E4FD2C32F7);
	}
};
