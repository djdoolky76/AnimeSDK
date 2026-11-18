#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FAMLNPCANNH;
class POHOEABNNII;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POHOEABNNII_BEGGPFHBKLP_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1D638CC0)
#define POHOEABNNII_BEGGPFHBKLP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D638CB0)

inline static constexpr unsigned int POHOEABNNII_BEGGPFHBKLP_TypeDefinitionIndex = 39371;

class POHOEABNNII_BEGGPFHBKLP : public ::System::Object
{
public:
	::System::Int32 HDIEABKPPNF; // 0x10
	::System::Single LNHKKJAHEFN; // 0x14

	::System::Void _ctor(::System::Int32 PHHDHIBOCKA, ::System::Single CCIJHMDAAKP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + POHOEABNNII_BEGGPFHBKLP__CTOR_OFFSET))(this, PHHDHIBOCKA, CCIJHMDAAKP);
	}

	::System::Collections::Generic::List_1<::FAMLNPCANNH*>* PKOGNPKCHHE(::POHOEABNNII* GKBJOPJKCLB)
	{
		return ((::System::Collections::Generic::List_1<::FAMLNPCANNH*>*(*)(::PVOID, ::POHOEABNNII*))((::PBYTE)hIl2Cpp + POHOEABNNII_BEGGPFHBKLP_PKOGNPKCHHE_OFFSET))(this, GKBJOPJKCLB);
	}
};
