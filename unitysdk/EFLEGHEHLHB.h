#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKLNGOPMFFO.h"
#include "unitysdk/OILINEJKLPH.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EFLEGHEHLHB_MLMDMMKPPHL_OFFSET UNITYSDK_OFFSET(0x1A560770)
#define EFLEGHEHLHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A560660)

inline static constexpr unsigned int EFLEGHEHLHB_TypeDefinitionIndex = 15409;

class EFLEGHEHLHB : public ::PKLNGOPMFFO
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KHMDOOAPCBJ; // 0x80
	::System::Collections::Generic::HashSet_1<::System::Int32>* _ALHGIINGJKF_k__BackingField; // 0x88

	::System::Void _ctor(::OILINEJKLPH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OILINEJKLPH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EFLEGHEHLHB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* MLMDMMKPPHL()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLEGHEHLHB_MLMDMMKPPHL_OFFSET))(this);
	}
};
