#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCEOAJPIDOA;
namespace System { template <typename T> class Comparison_1; }

#define EBJCMHMEDIB___C_DPLAHKCKCMM_OFFSET UNITYSDK_OFFSET(0x17F26BC0)
#define EBJCMHMEDIB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F26B70)
#define EBJCMHMEDIB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F26BB0)

inline static constexpr unsigned int EBJCMHMEDIB___c_TypeDefinitionIndex = 14099;

class EBJCMHMEDIB___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::GCEOAJPIDOA*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::GCEOAJPIDOA*>**)Il2CppClass::FromTypeDefinitionIndex(EBJCMHMEDIB___c_TypeDefinitionIndex)->GetStaticField(0x77C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EBJCMHMEDIB___c_TypeDefinitionIndex)->GetStaticField(0x77C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBJCMHMEDIB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJCMHMEDIB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 DPLAHKCKCMM(::GCEOAJPIDOA* EJCBEJMGFAJ, ::GCEOAJPIDOA* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::GCEOAJPIDOA*, ::GCEOAJPIDOA*))((::PBYTE)hIl2Cpp + EBJCMHMEDIB___C_DPLAHKCKCMM_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
