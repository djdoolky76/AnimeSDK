#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHIOGJMEIEI;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LKFBOILOCMN___C_CAEEPIFJHLD_OFFSET UNITYSDK_OFFSET(0x1519CB20)
#define LKFBOILOCMN___C_COCDILPADJO_OFFSET UNITYSDK_OFFSET(0x1519C970)
#define LKFBOILOCMN___C_EKMBMDJKFAL_OFFSET UNITYSDK_OFFSET(0x1519CAC0)
#define LKFBOILOCMN___C_GCNJHABKLBE_OFFSET UNITYSDK_OFFSET(0x1519C890)
#define LKFBOILOCMN___C_GIKOOHEOMAM_OFFSET UNITYSDK_OFFSET(0x1519CA60)
#define LKFBOILOCMN___C_IKJCNAAOABN_OFFSET UNITYSDK_OFFSET(0x1519C980)
#define LKFBOILOCMN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1519C840)
#define LKFBOILOCMN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1519C880)

inline static constexpr unsigned int LKFBOILOCMN___c_TypeDefinitionIndex = 82631;

class LKFBOILOCMN___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__43_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LKFBOILOCMN___c_TypeDefinitionIndex)->GetStaticField(0x416D0);
	}
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__90_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LKFBOILOCMN___c_TypeDefinitionIndex)->GetStaticField(0x416D8);
	}
	static ::System::Func_2<::LHIOGJMEIEI*, ::System::Boolean>** StaticGet___9__69_0()
	{
		return (::System::Func_2<::LHIOGJMEIEI*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LKFBOILOCMN___c_TypeDefinitionIndex)->GetStaticField(0x416E0);
	}
	static ::System::Func_2<::LHIOGJMEIEI*, ::System::Boolean>** StaticGet___9__68_0()
	{
		return (::System::Func_2<::LHIOGJMEIEI*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LKFBOILOCMN___c_TypeDefinitionIndex)->GetStaticField(0x416E8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LKFBOILOCMN___c_TypeDefinitionIndex)->GetStaticField(0x416F0);
	}
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>** StaticGet___9__55_0()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LKFBOILOCMN___c_TypeDefinitionIndex)->GetStaticField(0x416F8);
	}
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>** StaticGet___9__59_0()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LKFBOILOCMN___c_TypeDefinitionIndex)->GetStaticField(0x41700);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKFBOILOCMN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBOILOCMN___C__CTOR_OFFSET))(this);
	}

	::System::Boolean GCNJHABKLBE(::MoleMole::Battle::Entity* BDHOILPIGKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LKFBOILOCMN___C_GCNJHABKLBE_OFFSET))(this, BDHOILPIGKB);
	}

	::System::Boolean COCDILPADJO(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN___C_COCDILPADJO_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean IKJCNAAOABN(::MoleMole::Battle::Entity* BDHOILPIGKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LKFBOILOCMN___C_IKJCNAAOABN_OFFSET))(this, BDHOILPIGKB);
	}

	::System::Void GIKOOHEOMAM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBOILOCMN___C_GIKOOHEOMAM_OFFSET))(this);
	}

	::System::Boolean EKMBMDJKFAL(::LHIOGJMEIEI* BDHOILPIGKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::LHIOGJMEIEI*))((::PBYTE)hIl2Cpp + LKFBOILOCMN___C_EKMBMDJKFAL_OFFSET))(this, BDHOILPIGKB);
	}

	::System::Boolean CAEEPIFJHLD(::LHIOGJMEIEI* BDHOILPIGKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::LHIOGJMEIEI*))((::PBYTE)hIl2Cpp + LKFBOILOCMN___C_CAEEPIFJHLD_OFFSET))(this, BDHOILPIGKB);
	}
};
