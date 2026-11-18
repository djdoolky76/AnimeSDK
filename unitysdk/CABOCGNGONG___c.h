#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CABOCGNGONG;
namespace System { template <typename T> class Predicate_1; }

#define CABOCGNGONG___C_BOAALGACIJG_OFFSET UNITYSDK_OFFSET(0x1398EFC0)
#define CABOCGNGONG___C_FFGLGHCHAEF_OFFSET UNITYSDK_OFFSET(0x1398EFA0)
#define CABOCGNGONG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1398EF50)
#define CABOCGNGONG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1398EF90)

inline static constexpr unsigned int CABOCGNGONG___c_TypeDefinitionIndex = 58885;

class CABOCGNGONG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CABOCGNGONG___c_TypeDefinitionIndex)->GetStaticField(0x497A0);
	}
	static ::System::Predicate_1<::CABOCGNGONG*>** StaticGet___9__26_0()
	{
		return (::System::Predicate_1<::CABOCGNGONG*>**)Il2CppClass::FromTypeDefinitionIndex(CABOCGNGONG___c_TypeDefinitionIndex)->GetStaticField(0x497A8);
	}
	static ::System::Predicate_1<::CABOCGNGONG*>** StaticGet___9__26_1()
	{
		return (::System::Predicate_1<::CABOCGNGONG*>**)Il2CppClass::FromTypeDefinitionIndex(CABOCGNGONG___c_TypeDefinitionIndex)->GetStaticField(0x497B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CABOCGNGONG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABOCGNGONG___C__CTOR_OFFSET))(this);
	}

	::System::Boolean FFGLGHCHAEF(::CABOCGNGONG* KPNIHKEKDOC)
	{
		return ((::System::Boolean(*)(::PVOID, ::CABOCGNGONG*))((::PBYTE)hIl2Cpp + CABOCGNGONG___C_FFGLGHCHAEF_OFFSET))(this, KPNIHKEKDOC);
	}

	::System::Boolean BOAALGACIJG(::CABOCGNGONG* LMLPPLMKLFL)
	{
		return ((::System::Boolean(*)(::PVOID, ::CABOCGNGONG*))((::PBYTE)hIl2Cpp + CABOCGNGONG___C_BOAALGACIJG_OFFSET))(this, LMLPPLMKLFL);
	}
};
