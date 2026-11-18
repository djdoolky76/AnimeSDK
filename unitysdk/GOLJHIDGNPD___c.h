#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFNDABIHAMO;
namespace System { template <typename T1, typename T2> class Func_2; }

#define GOLJHIDGNPD___C_DNONBEIBJNK_OFFSET UNITYSDK_OFFSET(0x19DE8830)
#define GOLJHIDGNPD___C_JMPBBIJICHF_OFFSET UNITYSDK_OFFSET(0x19DE87D0)
#define GOLJHIDGNPD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DE8780)
#define GOLJHIDGNPD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19DE87C0)

inline static constexpr unsigned int GOLJHIDGNPD___c_TypeDefinitionIndex = 61586;

class GOLJHIDGNPD___c : public ::System::Object
{
public:
	static ::System::Func_2<::KFNDABIHAMO*, ::System::Boolean>** StaticGet___9__31_0()
	{
		return (::System::Func_2<::KFNDABIHAMO*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GOLJHIDGNPD___c_TypeDefinitionIndex)->GetStaticField(0x4BA50);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GOLJHIDGNPD___c_TypeDefinitionIndex)->GetStaticField(0x4BA58);
	}
	static ::System::Func_2<::KFNDABIHAMO*, ::System::Boolean>** StaticGet___9__30_0()
	{
		return (::System::Func_2<::KFNDABIHAMO*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GOLJHIDGNPD___c_TypeDefinitionIndex)->GetStaticField(0x4BA60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOLJHIDGNPD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLJHIDGNPD___C__CTOR_OFFSET))(this);
	}

	::System::Boolean JMPBBIJICHF(::KFNDABIHAMO* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFNDABIHAMO*))((::PBYTE)hIl2Cpp + GOLJHIDGNPD___C_JMPBBIJICHF_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Boolean DNONBEIBJNK(::KFNDABIHAMO* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFNDABIHAMO*))((::PBYTE)hIl2Cpp + GOLJHIDGNPD___C_DNONBEIBJNK_OFFSET))(this, LJBPECKCCEA);
	}
};
