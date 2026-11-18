#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJHAOHLEIKC;
class IANDOOLAALI;

#define CJHAOHLEIKC_BKJEEGJDPAN_LHBMIDGEFHB_OFFSET UNITYSDK_OFFSET(0x147A5210)
#define CJHAOHLEIKC_BKJEEGJDPAN__CTOR_OFFSET UNITYSDK_OFFSET(0x147A5200)

inline static constexpr unsigned int CJHAOHLEIKC_BKJEEGJDPAN_TypeDefinitionIndex = 86472;

class CJHAOHLEIKC_BKJEEGJDPAN : public ::System::Object
{
public:
	::IANDOOLAALI* NAPFALLANDL; // 0x10
	::CJHAOHLEIKC* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHAOHLEIKC_BKJEEGJDPAN__CTOR_OFFSET))(this);
	}

	::System::Void LHBMIDGEFHB(::System::Int32 DMHCNCHBEGK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CJHAOHLEIKC_BKJEEGJDPAN_LHBMIDGEFHB_OFFSET))(this, DMHCNCHBEGK);
	}
};
