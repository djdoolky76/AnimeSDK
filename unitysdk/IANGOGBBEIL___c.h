#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCPLJJIAKMO;
class GILOMLEHBPP;
class LCLDDKEIDNF;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define IANGOGBBEIL___C_BKIOCCONJMH_OFFSET UNITYSDK_OFFSET(0x1A394100)
#define IANGOGBBEIL___C_GGFAILLOAOL_OFFSET UNITYSDK_OFFSET(0x1A394280)
#define IANGOGBBEIL___C_PLMEAFEBNMB_OFFSET UNITYSDK_OFFSET(0x1A394250)
#define IANGOGBBEIL___C_POLPLBBOHAM_OFFSET UNITYSDK_OFFSET(0x1A394200)
#define IANGOGBBEIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3940B0)
#define IANGOGBBEIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3940F0)

inline static constexpr unsigned int IANGOGBBEIL___c_TypeDefinitionIndex = 57490;

class IANGOGBBEIL___c : public ::System::Object
{
public:
	static ::System::Func_2<::GILOMLEHBPP*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::GILOMLEHBPP*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IANGOGBBEIL___c_TypeDefinitionIndex)->GetStaticField(0x4BB40);
	}
	static ::System::Func_2<::GILOMLEHBPP*, ::System::Int32>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::GILOMLEHBPP*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IANGOGBBEIL___c_TypeDefinitionIndex)->GetStaticField(0x4BB48);
	}
	static ::System::Predicate_1<::BCPLJJIAKMO*>** StaticGet___9__5_3()
	{
		return (::System::Predicate_1<::BCPLJJIAKMO*>**)Il2CppClass::FromTypeDefinitionIndex(IANGOGBBEIL___c_TypeDefinitionIndex)->GetStaticField(0x4BB50);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IANGOGBBEIL___c_TypeDefinitionIndex)->GetStaticField(0x4BB58);
	}
	static ::System::Func_2<::LCLDDKEIDNF*, ::BCPLJJIAKMO*>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::LCLDDKEIDNF*, ::BCPLJJIAKMO*>**)Il2CppClass::FromTypeDefinitionIndex(IANGOGBBEIL___c_TypeDefinitionIndex)->GetStaticField(0x4BB60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IANGOGBBEIL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANGOGBBEIL___C__CTOR_OFFSET))(this);
	}

	::BCPLJJIAKMO* BKIOCCONJMH(::LCLDDKEIDNF* HAAEBCOBKFF)
	{
		return ((::BCPLJJIAKMO*(*)(::PVOID, ::LCLDDKEIDNF*))((::PBYTE)hIl2Cpp + IANGOGBBEIL___C_BKIOCCONJMH_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean POLPLBBOHAM(::GILOMLEHBPP* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::GILOMLEHBPP*))((::PBYTE)hIl2Cpp + IANGOGBBEIL___C_POLPLBBOHAM_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean PLMEAFEBNMB(::BCPLJJIAKMO* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::BCPLJJIAKMO*))((::PBYTE)hIl2Cpp + IANGOGBBEIL___C_PLMEAFEBNMB_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Int32 GGFAILLOAOL(::GILOMLEHBPP* HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::GILOMLEHBPP*))((::PBYTE)hIl2Cpp + IANGOGBBEIL___C_GGFAILLOAOL_OFFSET))(this, HAAEBCOBKFF);
	}
};
