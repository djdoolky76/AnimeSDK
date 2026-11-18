#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJKBAMNFLCA_MJFPEBGGDGP.h"
#include "unitysdk/System/Object.h"

class COFEKOGPOCA;
class MFPACOKPGPO;
class NAIJHPCDGKC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GHHDDDLMHII_OJJFKDOHOBP_OFFSET UNITYSDK_OFFSET(0x179F0BE0)
#define GHHDDDLMHII__CTOR_OFFSET UNITYSDK_OFFSET(0x179F0B50)

inline static constexpr unsigned int GHHDDDLMHII_TypeDefinitionIndex = 41044;

class GHHDDDLMHII : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::NAIJHPCDGKC*>* LBFELBNAOMN; // 0x10
	::MFPACOKPGPO* PIGEGAJPIFJ; // 0x18
	::System::Int32 KAEOADJDIEC; // 0x20
	::BJKBAMNFLCA_MJFPEBGGDGP PHBAHEAILME; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHDDDLMHII__CTOR_OFFSET))(this);
	}

	::COFEKOGPOCA* OJJFKDOHOBP()
	{
		return ((::COFEKOGPOCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHDDDLMHII_OJJFKDOHOBP_OFFSET))(this);
	}
};
