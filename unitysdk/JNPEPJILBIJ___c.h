#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GHIEJFIKEHA;
namespace System { template <typename T1, typename T2> class Action_2; }

#define JNPEPJILBIJ___C_HLCPNGKPIEE_OFFSET UNITYSDK_OFFSET(0x18753010)
#define JNPEPJILBIJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18752FC0)
#define JNPEPJILBIJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18753000)

inline static constexpr unsigned int JNPEPJILBIJ___c_TypeDefinitionIndex = 50702;

class JNPEPJILBIJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JNPEPJILBIJ___c_TypeDefinitionIndex)->GetStaticField(0x326F0);
	}
	static ::System::Action_2<::System::Boolean, ::GHIEJFIKEHA*>** StaticGet___9__25_0()
	{
		return (::System::Action_2<::System::Boolean, ::GHIEJFIKEHA*>**)Il2CppClass::FromTypeDefinitionIndex(JNPEPJILBIJ___c_TypeDefinitionIndex)->GetStaticField(0x326F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNPEPJILBIJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPEPJILBIJ___C__CTOR_OFFSET))(this);
	}

	::System::Void HLCPNGKPIEE(::System::Boolean EBFCACIEKBC, ::GHIEJFIKEHA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::GHIEJFIKEHA*))((::PBYTE)hIl2Cpp + JNPEPJILBIJ___C_HLCPNGKPIEE_OFFSET))(this, EBFCACIEKBC, GLAOEHCGCFO);
	}
};
