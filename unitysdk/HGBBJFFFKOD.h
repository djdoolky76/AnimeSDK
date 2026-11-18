#pragma once
#include "unitysdk/unitysdk.h"

class AFMMAIKKACF;
class EHGPNGPADCB;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HGBBJFFFKOD_FNMKEMKMAFK_OFFSET UNITYSDK_OFFSET(0x15B48540)
#define HGBBJFFFKOD_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x15B48420)
#define HGBBJFFFKOD_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x15B485C0)
#define HGBBJFFFKOD__CTOR_OFFSET UNITYSDK_OFFSET(0x15B48410)

inline static constexpr unsigned int HGBBJFFFKOD_TypeDefinitionIndex = 61611;

class HGBBJFFFKOD
{
public:
	::System::Void _ctor(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + HGBBJFFFKOD__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + HGBBJFFFKOD_GLEJMKLOMBP_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + HGBBJFFFKOD_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* FNMKEMKMAFK()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBBJFFFKOD_FNMKEMKMAFK_OFFSET))(this);
	}
};
