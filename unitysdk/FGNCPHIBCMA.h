#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FGNCPHIBCMA_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x14ACAE60)
#define FGNCPHIBCMA_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x14ACAF80)
#define FGNCPHIBCMA__CTOR_OFFSET UNITYSDK_OFFSET(0x14ACAF10)

inline static constexpr unsigned int FGNCPHIBCMA_TypeDefinitionIndex = 80899;

class FGNCPHIBCMA : public ::PKMJPMFCNBK
{
public:
	::UnityEngine::Vector3 MKGEJMJOLAM; // 0x80
	::System::Boolean PHDEMBOHDNL; // 0x8C
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 CKLMJHAJDPI; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNCPHIBCMA__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNCPHIBCMA_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNCPHIBCMA_KHJELIBOECB_OFFSET))(this);
	}
};
