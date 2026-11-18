#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EHOFPPJJMDM;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define EJINDPBKMHH___C_FPJMMCCHPFL_OFFSET UNITYSDK_OFFSET(0x154B4F30)
#define EJINDPBKMHH___C_OLIMDBDKPPI_OFFSET UNITYSDK_OFFSET(0x154B4990)
#define EJINDPBKMHH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x154B4940)
#define EJINDPBKMHH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x154B4980)

inline static constexpr unsigned int EJINDPBKMHH___c_TypeDefinitionIndex = 46496;

class EJINDPBKMHH___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::EHOFPPJJMDM*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::EHOFPPJJMDM*>**)Il2CppClass::FromTypeDefinitionIndex(EJINDPBKMHH___c_TypeDefinitionIndex)->GetStaticField(0x433D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EJINDPBKMHH___c_TypeDefinitionIndex)->GetStaticField(0x433D8);
	}
	static ::System::Action** StaticGet___9__24_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EJINDPBKMHH___c_TypeDefinitionIndex)->GetStaticField(0x433E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJINDPBKMHH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJINDPBKMHH___C__CTOR_OFFSET))(this);
	}

	::System::Int32 OLIMDBDKPPI(::EHOFPPJJMDM* EJCBEJMGFAJ, ::EHOFPPJJMDM* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::EHOFPPJJMDM*, ::EHOFPPJJMDM*))((::PBYTE)hIl2Cpp + EJINDPBKMHH___C_OLIMDBDKPPI_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Void FPJMMCCHPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJINDPBKMHH___C_FPJMMCCHPFL_OFFSET))(this);
	}
};
