#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKIGECCMBJI.h"
#include "unitysdk/DKEHIGCANOL.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BABMKAFEADA_DGEHKPBCNMO_OFFSET UNITYSDK_OFFSET(0x1A5255F0)
#define BABMKAFEADA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5255E0)

inline static constexpr unsigned int BABMKAFEADA_TypeDefinitionIndex = 15405;

class BABMKAFEADA : public ::CKIGECCMBJI
{
public:
	::System::Void _ctor(::DKEHIGCANOL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DKEHIGCANOL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BABMKAFEADA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DGEHKPBCNMO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABMKAFEADA_DGEHKPBCNMO_OFFSET))(this);
	}
};
