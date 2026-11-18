#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MIGLNLMDFLJ;
namespace System { template <typename T> class Comparison_1; }

#define IOKIFLOBBIJ___C_HPNDKNMAPJA_OFFSET UNITYSDK_OFFSET(0x152F0970)
#define IOKIFLOBBIJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152F0920)
#define IOKIFLOBBIJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x152F0960)

inline static constexpr unsigned int IOKIFLOBBIJ___c_TypeDefinitionIndex = 9833;

class IOKIFLOBBIJ___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::MIGLNLMDFLJ*>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::MIGLNLMDFLJ*>**)Il2CppClass::FromTypeDefinitionIndex(IOKIFLOBBIJ___c_TypeDefinitionIndex)->GetStaticField(0x7650);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IOKIFLOBBIJ___c_TypeDefinitionIndex)->GetStaticField(0x7658);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOKIFLOBBIJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKIFLOBBIJ___C__CTOR_OFFSET))(this);
	}

	::System::Int32 HPNDKNMAPJA(::MIGLNLMDFLJ* HAAEBCOBKFF, ::MIGLNLMDFLJ* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::MIGLNLMDFLJ*, ::MIGLNLMDFLJ*))((::PBYTE)hIl2Cpp + IOKIFLOBBIJ___C_HPNDKNMAPJA_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
