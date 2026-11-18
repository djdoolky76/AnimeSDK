#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HDJBHFAKBJC_LAGNGONONOC.h"

namespace System { template <typename T> class Comparison_1; }

#define HDJBHFAKBJC___C_KADPNCOBPNG_OFFSET UNITYSDK_OFFSET(0x16F24B10)
#define HDJBHFAKBJC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F24AC0)
#define HDJBHFAKBJC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F24B00)

inline static constexpr unsigned int HDJBHFAKBJC___c_TypeDefinitionIndex = 76674;

class HDJBHFAKBJC___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Object*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(HDJBHFAKBJC___c_TypeDefinitionIndex)->GetStaticField(0x3DE40);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HDJBHFAKBJC___c_TypeDefinitionIndex)->GetStaticField(0x3DE48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDJBHFAKBJC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJBHFAKBJC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 KADPNCOBPNG(::HDJBHFAKBJC_LAGNGONONOC KILPCOMOCMD, ::HDJBHFAKBJC_LAGNGONONOC BBCODANAFGI)
	{
		return ((::System::Int32(*)(::PVOID, ::HDJBHFAKBJC_LAGNGONONOC, ::HDJBHFAKBJC_LAGNGONONOC))((::PBYTE)hIl2Cpp + HDJBHFAKBJC___C_KADPNCOBPNG_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}
};
