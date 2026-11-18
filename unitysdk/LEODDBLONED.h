#pragma once
#include "unitysdk/unitysdk.h"

class AFMMAIKKACF;
class EHGPNGPADCB;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define LEODDBLONED_FNMKEMKMAFK_OFFSET UNITYSDK_OFFSET(0x16840C80)
#define LEODDBLONED_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x16840900)
#define LEODDBLONED_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x16840D00)
#define LEODDBLONED__CTOR_OFFSET UNITYSDK_OFFSET(0x168408F0)

inline static constexpr unsigned int LEODDBLONED_TypeDefinitionIndex = 60398;

class LEODDBLONED
{
public:
	::System::Void _ctor(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + LEODDBLONED__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + LEODDBLONED_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* FNMKEMKMAFK()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEODDBLONED_FNMKEMKMAFK_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + LEODDBLONED_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
