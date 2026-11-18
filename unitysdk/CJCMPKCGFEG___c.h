#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EGLOCDOBAJA;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CJCMPKCGFEG___C_AAHOKNAHBPD_OFFSET UNITYSDK_OFFSET(0x15337D30)
#define CJCMPKCGFEG___C_FNAABNNAGDD_OFFSET UNITYSDK_OFFSET(0x15337D80)
#define CJCMPKCGFEG___C_OEPGOHPDEKG_OFFSET UNITYSDK_OFFSET(0x15337D50)
#define CJCMPKCGFEG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15337CE0)
#define CJCMPKCGFEG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15337D20)

inline static constexpr unsigned int CJCMPKCGFEG___c_TypeDefinitionIndex = 48978;

class CJCMPKCGFEG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CJCMPKCGFEG___c_TypeDefinitionIndex)->GetStaticField(0x3A6D0);
	}
	static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__25_3()
	{
		return (::System::Func_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CJCMPKCGFEG___c_TypeDefinitionIndex)->GetStaticField(0x3A6D8);
	}
	static ::System::Func_2<::EGLOCDOBAJA*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__25_0()
	{
		return (::System::Func_2<::EGLOCDOBAJA*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(CJCMPKCGFEG___c_TypeDefinitionIndex)->GetStaticField(0x3A6E0);
	}
	static ::System::Func_3<::EGLOCDOBAJA*, ::System::Int32, ::System::Object*>** StaticGet___9__25_1()
	{
		return (::System::Func_3<::EGLOCDOBAJA*, ::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CJCMPKCGFEG___c_TypeDefinitionIndex)->GetStaticField(0x3A6E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJCMPKCGFEG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCMPKCGFEG___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* AAHOKNAHBPD(::EGLOCDOBAJA* PAHAGPNCJOH)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::EGLOCDOBAJA*))((::PBYTE)hIl2Cpp + CJCMPKCGFEG___C_AAHOKNAHBPD_OFFSET))(this, PAHAGPNCJOH);
	}

	::System::Int32 OEPGOHPDEKG(::System::Object* MMNIPHGBHJF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJCMPKCGFEG___C_OEPGOHPDEKG_OFFSET))(this, MMNIPHGBHJF);
	}

	::System::Object* FNAABNNAGDD(::EGLOCDOBAJA* PAHAGPNCJOH, ::System::Int32 IBDIKDJFMII)
	{
		return ((::System::Object*(*)(::PVOID, ::EGLOCDOBAJA*, ::System::Int32))((::PBYTE)hIl2Cpp + CJCMPKCGFEG___C_FNAABNNAGDD_OFFSET))(this, PAHAGPNCJOH, IBDIKDJFMII);
	}
};
