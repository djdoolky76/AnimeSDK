#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CCPCAPILDDK;
class MOBNLGMENEM;
namespace System { template <typename T> class Predicate_1; }

#define HPKFKFICMOL___C_DBNCFIBJIEM_OFFSET UNITYSDK_OFFSET(0x1655A150)
#define HPKFKFICMOL___C_FEOAMDLJIML_OFFSET UNITYSDK_OFFSET(0x1655A0D0)
#define HPKFKFICMOL___C_NCDMGDMBCMI_OFFSET UNITYSDK_OFFSET(0x1655A0B0)
#define HPKFKFICMOL___C_PGCEGOGCGNN_OFFSET UNITYSDK_OFFSET(0x1655A100)
#define HPKFKFICMOL___C_PPIDBPJLOHA_OFFSET UNITYSDK_OFFSET(0x1655A130)
#define HPKFKFICMOL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1655A060)
#define HPKFKFICMOL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1655A0A0)

inline static constexpr unsigned int HPKFKFICMOL___c_TypeDefinitionIndex = 40007;

class HPKFKFICMOL___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::CCPCAPILDDK*>** StaticGet___9__15_0()
	{
		return (::System::Predicate_1<::CCPCAPILDDK*>**)Il2CppClass::FromTypeDefinitionIndex(HPKFKFICMOL___c_TypeDefinitionIndex)->GetStaticField(0x508D0);
	}
	static ::System::Predicate_1<::CCPCAPILDDK*>** StaticGet___9__13_0()
	{
		return (::System::Predicate_1<::CCPCAPILDDK*>**)Il2CppClass::FromTypeDefinitionIndex(HPKFKFICMOL___c_TypeDefinitionIndex)->GetStaticField(0x508D8);
	}
	static ::System::Predicate_1<::MOBNLGMENEM*>** StaticGet___9__13_1()
	{
		return (::System::Predicate_1<::MOBNLGMENEM*>**)Il2CppClass::FromTypeDefinitionIndex(HPKFKFICMOL___c_TypeDefinitionIndex)->GetStaticField(0x508E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HPKFKFICMOL___c_TypeDefinitionIndex)->GetStaticField(0x508E8);
	}
	static ::System::Predicate_1<::CCPCAPILDDK*>** StaticGet___9__14_0()
	{
		return (::System::Predicate_1<::CCPCAPILDDK*>**)Il2CppClass::FromTypeDefinitionIndex(HPKFKFICMOL___c_TypeDefinitionIndex)->GetStaticField(0x508F0);
	}
	static ::System::Predicate_1<::MOBNLGMENEM*>** StaticGet___9__14_1()
	{
		return (::System::Predicate_1<::MOBNLGMENEM*>**)Il2CppClass::FromTypeDefinitionIndex(HPKFKFICMOL___c_TypeDefinitionIndex)->GetStaticField(0x508F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPKFKFICMOL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKFKFICMOL___C__CTOR_OFFSET))(this);
	}

	::System::Boolean NCDMGDMBCMI(::MOBNLGMENEM* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MOBNLGMENEM*))((::PBYTE)hIl2Cpp + HPKFKFICMOL___C_NCDMGDMBCMI_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean FEOAMDLJIML(::CCPCAPILDDK* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::CCPCAPILDDK*))((::PBYTE)hIl2Cpp + HPKFKFICMOL___C_FEOAMDLJIML_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean PGCEGOGCGNN(::CCPCAPILDDK* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::CCPCAPILDDK*))((::PBYTE)hIl2Cpp + HPKFKFICMOL___C_PGCEGOGCGNN_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean PPIDBPJLOHA(::MOBNLGMENEM* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MOBNLGMENEM*))((::PBYTE)hIl2Cpp + HPKFKFICMOL___C_PPIDBPJLOHA_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean DBNCFIBJIEM(::CCPCAPILDDK* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::CCPCAPILDDK*))((::PBYTE)hIl2Cpp + HPKFKFICMOL___C_DBNCFIBJIEM_OFFSET))(this, HAAEBCOBKFF);
	}
};
