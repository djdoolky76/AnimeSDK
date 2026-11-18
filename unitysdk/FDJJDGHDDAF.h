#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJDDIMMAPDM.h"
#include "unitysdk/NAOPCNDAPBL.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDJJDGHDDAF_KBIIPJALCNE_OFFSET UNITYSDK_OFFSET(0x15E58690)
#define FDJJDGHDDAF__CTOR_OFFSET UNITYSDK_OFFSET(0x15E585B0)

inline static constexpr unsigned int FDJJDGHDDAF_TypeDefinitionIndex = 44515;

class FDJJDGHDDAF : public ::GJDDIMMAPDM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _BCLPIFKBKJL_k__BackingField; // 0x40

	::System::Void _ctor(::NAOPCNDAPBL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NAOPCNDAPBL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FDJJDGHDDAF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KBIIPJALCNE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJJDGHDDAF_KBIIPJALCNE_OFFSET))(this);
	}
};
