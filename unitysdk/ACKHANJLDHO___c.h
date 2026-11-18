#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GEIHCPAOKKK;
class NLANFAAJEEK;
namespace System { template <typename T1, typename T2> class Action_2; }

#define ACKHANJLDHO___C_DHIPFOHDMOE_OFFSET UNITYSDK_OFFSET(0x16FD54E0)
#define ACKHANJLDHO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FD5490)
#define ACKHANJLDHO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD54D0)

inline static constexpr unsigned int ACKHANJLDHO___c_TypeDefinitionIndex = 78893;

class ACKHANJLDHO___c : public ::System::Object
{
public:
	static ::System::Action_2<::NLANFAAJEEK*, ::GEIHCPAOKKK*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::NLANFAAJEEK*, ::GEIHCPAOKKK*>**)Il2CppClass::FromTypeDefinitionIndex(ACKHANJLDHO___c_TypeDefinitionIndex)->GetStaticField(0x42C80);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ACKHANJLDHO___c_TypeDefinitionIndex)->GetStaticField(0x42C88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACKHANJLDHO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKHANJLDHO___C__CTOR_OFFSET))(this);
	}

	::System::Void DHIPFOHDMOE(::NLANFAAJEEK* LPDPJBDMGDN, ::GEIHCPAOKKK* PFDGHBCJCNP)
	{
		return ((::System::Void(*)(::PVOID, ::NLANFAAJEEK*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + ACKHANJLDHO___C_DHIPFOHDMOE_OFFSET))(this, LPDPJBDMGDN, PFDGHBCJCNP);
	}
};
