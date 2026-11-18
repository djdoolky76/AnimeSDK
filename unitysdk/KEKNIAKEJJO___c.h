#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define KEKNIAKEJJO___C_ECBFKOEJLKE_OFFSET UNITYSDK_OFFSET(0x13C545F0)
#define KEKNIAKEJJO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C545A0)
#define KEKNIAKEJJO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C545E0)

inline static constexpr unsigned int KEKNIAKEJJO___c_TypeDefinitionIndex = 64486;

class KEKNIAKEJJO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KEKNIAKEJJO___c_TypeDefinitionIndex)->GetStaticField(0x32930);
	}
	static ::System::Comparison_1<::System::UInt64>** StaticGet___9__31_0()
	{
		return (::System::Comparison_1<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(KEKNIAKEJJO___c_TypeDefinitionIndex)->GetStaticField(0x32938);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEKNIAKEJJO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKNIAKEJJO___C__CTOR_OFFSET))(this);
	}

	::System::Int32 ECBFKOEJLKE(::System::UInt64 KILPCOMOCMD, ::System::UInt64 BBCODANAFGI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + KEKNIAKEJJO___C_ECBFKOEJLKE_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}
};
