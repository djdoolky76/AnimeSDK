#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
template <typename T> class BFMLEHMAGAK_1;

#define KFGCLOPEGJO_FMKGGFKFKJC_EBONKAIFPIP_OFFSET UNITYSDK_OFFSET(0xD3F3100)
#define KFGCLOPEGJO_FMKGGFKFKJC__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F30F0)

inline static constexpr unsigned int KFGCLOPEGJO_FMKGGFKFKJC_TypeDefinitionIndex = 78936;

class KFGCLOPEGJO_FMKGGFKFKJC : public ::System::Object
{
public:
	::FILNFMCNCFE* BOEAJMIAIGK; // 0x10
	::FGCOIBFFCHB* GMDPHMNNLHA; // 0x18
	::BFMLEHMAGAK_1<::System::Int32>* BGJOPBCCMOC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_FMKGGFKFKJC__CTOR_OFFSET))(this);
	}

	::System::Void EBONKAIFPIP(::MNAGAGOHIGH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_FMKGGFKFKJC_EBONKAIFPIP_OFFSET))(this, KOIBHLHLMFC);
	}
};
