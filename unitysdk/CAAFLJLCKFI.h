#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHOPFAOCOJC.h"
#include "unitysdk/HDIJCHLHLOM.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CAAFLJLCKFI_CPBAMMHOJPC_OFFSET UNITYSDK_OFFSET(0x1A57E0A0)
#define CAAFLJLCKFI_GMGBLFOJHPB_OFFSET UNITYSDK_OFFSET(0x1A57DCA0)
#define CAAFLJLCKFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A57DC00)

inline static constexpr unsigned int CAAFLJLCKFI_TypeDefinitionIndex = 11364;

class CAAFLJLCKFI : public ::BHOPFAOCOJC
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* IBDNECOGJEB; // 0xF0

	::System::Void _ctor(::HDIJCHLHLOM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HDIJCHLHLOM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CAAFLJLCKFI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GMGBLFOJHPB(::System::Int32 MPKKKJFNLIJ)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CAAFLJLCKFI_GMGBLFOJHPB_OFFSET))(this, MPKKKJFNLIJ);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* CPBAMMHOJPC(::System::Int32 OFBKOHFELPE, ::System::Int32 PAPGLJGLIAI)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CAAFLJLCKFI_CPBAMMHOJPC_OFFSET))(this, OFBKOHFELPE, PAPGLJGLIAI);
	}
};
