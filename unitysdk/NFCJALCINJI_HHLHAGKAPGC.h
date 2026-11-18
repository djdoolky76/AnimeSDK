#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define NFCJALCINJI_HHLHAGKAPGC_DHAPLDLCHBN_OFFSET UNITYSDK_OFFSET(0x12C59E20)
#define NFCJALCINJI_HHLHAGKAPGC__CTOR_OFFSET UNITYSDK_OFFSET(0x12C59E10)

inline static constexpr unsigned int NFCJALCINJI_HHLHAGKAPGC_TypeDefinitionIndex = 47544;

class NFCJALCINJI_HHLHAGKAPGC : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJALCINJI_HHLHAGKAPGC__CTOR_OFFSET))(this);
	}

	::System::Void DHAPLDLCHBN(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NFCJALCINJI_HHLHAGKAPGC_DHAPLDLCHBN_OFFSET))(this, GLAOEHCGCFO);
	}
};
