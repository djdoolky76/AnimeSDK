#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define JHDEHAPEDIH___C_AMIFKNFIOBJ_OFFSET UNITYSDK_OFFSET(0x14A7D8D0)
#define JHDEHAPEDIH___C_BAOCHKKNLCO_OFFSET UNITYSDK_OFFSET(0x14A7D7C0)
#define JHDEHAPEDIH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A7D770)
#define JHDEHAPEDIH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14A7D7B0)

inline static constexpr unsigned int JHDEHAPEDIH___c_TypeDefinitionIndex = 48711;

class JHDEHAPEDIH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JHDEHAPEDIH___c_TypeDefinitionIndex)->GetStaticField(0x466B0);
	}
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>** StaticGet___9__3_1()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JHDEHAPEDIH___c_TypeDefinitionIndex)->GetStaticField(0x466B8);
	}
	static ::System::Func_1<::System::UInt32>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(JHDEHAPEDIH___c_TypeDefinitionIndex)->GetStaticField(0x466C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHDEHAPEDIH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEHAPEDIH___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 BAOCHKKNLCO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEHAPEDIH___C_BAOCHKKNLCO_OFFSET))(this);
	}

	::System::Boolean AMIFKNFIOBJ(::MoleMole::Battle::Entity* PIIPCLCCOIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JHDEHAPEDIH___C_AMIFKNFIOBJ_OFFSET))(this, PIIPCLCCOIG);
	}
};
