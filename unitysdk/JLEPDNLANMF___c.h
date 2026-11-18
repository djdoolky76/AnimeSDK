#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJBMLMHDOME;
class IBENDELLLAO;
class LAAEBHNLHEM;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }
namespace System { template <typename T> class Predicate_1; }

#define JLEPDNLANMF___C_CIMGANNOIOJ_OFFSET UNITYSDK_OFFSET(0x13CCAF30)
#define JLEPDNLANMF___C_CLEOANJOIBA_OFFSET UNITYSDK_OFFSET(0x13CCB1B0)
#define JLEPDNLANMF___C_FCAJGENNDHO_OFFSET UNITYSDK_OFFSET(0x13CCB1A0)
#define JLEPDNLANMF___C_GPPIGMKAKFK_OFFSET UNITYSDK_OFFSET(0x13CCAF60)
#define JLEPDNLANMF___C_IACFOIJNDAJ_OFFSET UNITYSDK_OFFSET(0x13CCAF90)
#define JLEPDNLANMF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CCAEE0)
#define JLEPDNLANMF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13CCAF20)

inline static constexpr unsigned int JLEPDNLANMF___c_TypeDefinitionIndex = 58340;

class JLEPDNLANMF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JLEPDNLANMF___c_TypeDefinitionIndex)->GetStaticField(0x46750);
	}
	static ::System::Func_1<::IBENDELLLAO*>** StaticGet___9__10_6()
	{
		return (::System::Func_1<::IBENDELLLAO*>**)Il2CppClass::FromTypeDefinitionIndex(JLEPDNLANMF___c_TypeDefinitionIndex)->GetStaticField(0x46758);
	}
	static ::System::Predicate_1<::LAAEBHNLHEM*>** StaticGet___9__11_0()
	{
		return (::System::Predicate_1<::LAAEBHNLHEM*>**)Il2CppClass::FromTypeDefinitionIndex(JLEPDNLANMF___c_TypeDefinitionIndex)->GetStaticField(0x46760);
	}
	static ::System::Comparison_1<::BJBMLMHDOME*>** StaticGet___9__11_1()
	{
		return (::System::Comparison_1<::BJBMLMHDOME*>**)Il2CppClass::FromTypeDefinitionIndex(JLEPDNLANMF___c_TypeDefinitionIndex)->GetStaticField(0x46768);
	}
	static ::System::Action** StaticGet___9__13_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(JLEPDNLANMF___c_TypeDefinitionIndex)->GetStaticField(0x46770);
	}
	static ::System::Predicate_1<::LAAEBHNLHEM*>** StaticGet___9__12_0()
	{
		return (::System::Predicate_1<::LAAEBHNLHEM*>**)Il2CppClass::FromTypeDefinitionIndex(JLEPDNLANMF___c_TypeDefinitionIndex)->GetStaticField(0x46778);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLEPDNLANMF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEPDNLANMF___C__CTOR_OFFSET))(this);
	}

	::System::Boolean CIMGANNOIOJ(::LAAEBHNLHEM* IBDADOPEBFC)
	{
		return ((::System::Boolean(*)(::PVOID, ::LAAEBHNLHEM*))((::PBYTE)hIl2Cpp + JLEPDNLANMF___C_CIMGANNOIOJ_OFFSET))(this, IBDADOPEBFC);
	}

	::System::Boolean GPPIGMKAKFK(::LAAEBHNLHEM* IBDADOPEBFC)
	{
		return ((::System::Boolean(*)(::PVOID, ::LAAEBHNLHEM*))((::PBYTE)hIl2Cpp + JLEPDNLANMF___C_GPPIGMKAKFK_OFFSET))(this, IBDADOPEBFC);
	}

	::System::Int32 IACFOIJNDAJ(::BJBMLMHDOME* EJCBEJMGFAJ, ::BJBMLMHDOME* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::BJBMLMHDOME*, ::BJBMLMHDOME*))((::PBYTE)hIl2Cpp + JLEPDNLANMF___C_IACFOIJNDAJ_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::IBENDELLLAO* FCAJGENNDHO()
	{
		return ((::IBENDELLLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEPDNLANMF___C_FCAJGENNDHO_OFFSET))(this);
	}

	::System::Void CLEOANJOIBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEPDNLANMF___C_CLEOANJOIBA_OFFSET))(this);
	}
};
