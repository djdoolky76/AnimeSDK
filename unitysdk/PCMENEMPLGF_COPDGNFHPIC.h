#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NJIEOECLNOM;
class PCMENEMPLGF;

#define PCMENEMPLGF_COPDGNFHPIC_HKPLHOOPGFK_OFFSET UNITYSDK_OFFSET(0x136EBDA0)
#define PCMENEMPLGF_COPDGNFHPIC_IMNPNDHBPLL_OFFSET UNITYSDK_OFFSET(0x136EBE00)
#define PCMENEMPLGF_COPDGNFHPIC_PDLLCAMIMFM_OFFSET UNITYSDK_OFFSET(0x136EBDD0)
#define PCMENEMPLGF_COPDGNFHPIC__CTOR_OFFSET UNITYSDK_OFFSET(0x136EBD90)

inline static constexpr unsigned int PCMENEMPLGF_COPDGNFHPIC_TypeDefinitionIndex = 62881;

class PCMENEMPLGF_COPDGNFHPIC : public ::System::Object
{
public:
	::NJIEOECLNOM* PJHDHNNDJIP; // 0x10
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_COPDGNFHPIC__CTOR_OFFSET))(this);
	}

	::System::Void HKPLHOOPGFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_COPDGNFHPIC_HKPLHOOPGFK_OFFSET))(this);
	}

	::System::Void PDLLCAMIMFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_COPDGNFHPIC_PDLLCAMIMFM_OFFSET))(this);
	}

	::System::Void IMNPNDHBPLL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_COPDGNFHPIC_IMNPNDHBPLL_OFFSET))(this);
	}
};
