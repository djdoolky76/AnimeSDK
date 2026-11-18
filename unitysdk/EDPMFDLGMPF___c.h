#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EDPMFDLGMPF_FAONFDGFMGD.h"

namespace System { template <typename T> class Comparison_1; }

#define EDPMFDLGMPF___C_IFCHPLCBBEC_OFFSET UNITYSDK_OFFSET(0x15897FA0)
#define EDPMFDLGMPF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15897F50)
#define EDPMFDLGMPF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15897F90)

inline static constexpr unsigned int EDPMFDLGMPF___c_TypeDefinitionIndex = 82977;

class EDPMFDLGMPF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EDPMFDLGMPF___c_TypeDefinitionIndex)->GetStaticField(0x316C0);
	}
	static ::System::Comparison_1<::System::Object*>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(EDPMFDLGMPF___c_TypeDefinitionIndex)->GetStaticField(0x316C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDPMFDLGMPF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPMFDLGMPF___C__CTOR_OFFSET))(this);
	}

	::System::Int32 IFCHPLCBBEC(::EDPMFDLGMPF_FAONFDGFMGD KILPCOMOCMD, ::EDPMFDLGMPF_FAONFDGFMGD BBCODANAFGI)
	{
		return ((::System::Int32(*)(::PVOID, ::EDPMFDLGMPF_FAONFDGFMGD, ::EDPMFDLGMPF_FAONFDGFMGD))((::PBYTE)hIl2Cpp + EDPMFDLGMPF___C_IFCHPLCBBEC_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}
};
