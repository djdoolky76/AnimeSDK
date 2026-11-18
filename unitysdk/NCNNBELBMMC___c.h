#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CPIOFALHLMD;
namespace System { template <typename T> class Comparison_1; }

#define NCNNBELBMMC___C_GIPGGBNALBM_OFFSET UNITYSDK_OFFSET(0x1ADF8110)
#define NCNNBELBMMC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADF80C0)
#define NCNNBELBMMC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADF8100)

inline static constexpr unsigned int NCNNBELBMMC___c_TypeDefinitionIndex = 45096;

class NCNNBELBMMC___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::CPIOFALHLMD*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::CPIOFALHLMD*>**)Il2CppClass::FromTypeDefinitionIndex(NCNNBELBMMC___c_TypeDefinitionIndex)->GetStaticField(0x397E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NCNNBELBMMC___c_TypeDefinitionIndex)->GetStaticField(0x397E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCNNBELBMMC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNNBELBMMC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GIPGGBNALBM(::CPIOFALHLMD* EJCBEJMGFAJ, ::CPIOFALHLMD* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::CPIOFALHLMD*, ::CPIOFALHLMD*))((::PBYTE)hIl2Cpp + NCNNBELBMMC___C_GIPGGBNALBM_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
