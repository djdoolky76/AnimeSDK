#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEMCAOEICDG;
class EHKKPCGAJHO;
class NKJEOLDHJKB;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define AEKOMIBNENG___C_IAPBGFHBGDE_OFFSET UNITYSDK_OFFSET(0x16FE15C0)
#define AEKOMIBNENG___C_IPOIJFDJMAA_OFFSET UNITYSDK_OFFSET(0x16FE1380)
#define AEKOMIBNENG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FE1330)
#define AEKOMIBNENG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE1370)

inline static constexpr unsigned int AEKOMIBNENG___c_TypeDefinitionIndex = 42835;

class AEKOMIBNENG___c : public ::System::Object
{
public:
	static ::System::Action_3<::NKJEOLDHJKB*, ::EHKKPCGAJHO*, ::AEMCAOEICDG*>** StaticGet___9__11_0()
	{
		return (::System::Action_3<::NKJEOLDHJKB*, ::EHKKPCGAJHO*, ::AEMCAOEICDG*>**)Il2CppClass::FromTypeDefinitionIndex(AEKOMIBNENG___c_TypeDefinitionIndex)->GetStaticField(0x36AE0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AEKOMIBNENG___c_TypeDefinitionIndex)->GetStaticField(0x36AE8);
	}
	static ::System::Action_3<::NKJEOLDHJKB*, ::EHKKPCGAJHO*, ::AEMCAOEICDG*>** StaticGet___9__10_0()
	{
		return (::System::Action_3<::NKJEOLDHJKB*, ::EHKKPCGAJHO*, ::AEMCAOEICDG*>**)Il2CppClass::FromTypeDefinitionIndex(AEKOMIBNENG___c_TypeDefinitionIndex)->GetStaticField(0x36AF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEKOMIBNENG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKOMIBNENG___C__CTOR_OFFSET))(this);
	}

	::System::Void IPOIJFDJMAA(::NKJEOLDHJKB* CENOEAAIKOB, ::EHKKPCGAJHO* POBADKEDFOE, ::AEMCAOEICDG* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::PVOID, ::NKJEOLDHJKB*, ::EHKKPCGAJHO*, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + AEKOMIBNENG___C_IPOIJFDJMAA_OFFSET))(this, CENOEAAIKOB, POBADKEDFOE, OHPJHPEOFLD);
	}

	::System::Void IAPBGFHBGDE(::NKJEOLDHJKB* CENOEAAIKOB, ::EHKKPCGAJHO* POBADKEDFOE, ::AEMCAOEICDG* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::PVOID, ::NKJEOLDHJKB*, ::EHKKPCGAJHO*, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + AEKOMIBNENG___C_IAPBGFHBGDE_OFFSET))(this, CENOEAAIKOB, POBADKEDFOE, OHPJHPEOFLD);
	}
};
