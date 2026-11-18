#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JEKOHJMBOOI;
namespace System { template <typename T> class Action_1; }

#define PMJBAJCHMFK___C_IKKBCLAHCHF_OFFSET UNITYSDK_OFFSET(0x1D1F51F0)
#define PMJBAJCHMFK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1F51A0)
#define PMJBAJCHMFK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F51E0)

inline static constexpr unsigned int PMJBAJCHMFK___c_TypeDefinitionIndex = 38627;

class PMJBAJCHMFK___c : public ::System::Object
{
public:
	static ::System::Action_1<::JEKOHJMBOOI*>** StaticGet___9__32_0()
	{
		return (::System::Action_1<::JEKOHJMBOOI*>**)Il2CppClass::FromTypeDefinitionIndex(PMJBAJCHMFK___c_TypeDefinitionIndex)->GetStaticField(0x3FCA0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PMJBAJCHMFK___c_TypeDefinitionIndex)->GetStaticField(0x3FCA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMJBAJCHMFK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJBAJCHMFK___C__CTOR_OFFSET))(this);
	}

	::System::Void IKKBCLAHCHF(::JEKOHJMBOOI* HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::JEKOHJMBOOI*))((::PBYTE)hIl2Cpp + PMJBAJCHMFK___C_IKKBCLAHCHF_OFFSET))(this, HAAEBCOBKFF);
	}
};
