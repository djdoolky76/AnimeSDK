#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGBFDMAJHJE;
namespace System { template <typename T> class Comparison_1; }

#define EACMEPBPKEJ___C_MMKCOMKAJHG_OFFSET UNITYSDK_OFFSET(0x13E6B720)
#define EACMEPBPKEJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E6B6D0)
#define EACMEPBPKEJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E6B710)

inline static constexpr unsigned int EACMEPBPKEJ___c_TypeDefinitionIndex = 70636;

class EACMEPBPKEJ___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::DGBFDMAJHJE*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::DGBFDMAJHJE*>**)Il2CppClass::FromTypeDefinitionIndex(EACMEPBPKEJ___c_TypeDefinitionIndex)->GetStaticField(0x49A00);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EACMEPBPKEJ___c_TypeDefinitionIndex)->GetStaticField(0x49A08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EACMEPBPKEJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACMEPBPKEJ___C__CTOR_OFFSET))(this);
	}

	::System::Int32 MMKCOMKAJHG(::DGBFDMAJHJE* KILPCOMOCMD, ::DGBFDMAJHJE* BBCODANAFGI)
	{
		return ((::System::Int32(*)(::PVOID, ::DGBFDMAJHJE*, ::DGBFDMAJHJE*))((::PBYTE)hIl2Cpp + EACMEPBPKEJ___C_MMKCOMKAJHG_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}
};
