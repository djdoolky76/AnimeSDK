#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALNCBEHGKPI;
class OBKNEEOLOPB;

#define OBKNEEOLOPB_AODLKGCMFHL_IDJCINLGODL_OFFSET UNITYSDK_OFFSET(0xF16FD30)
#define OBKNEEOLOPB_AODLKGCMFHL__CTOR_OFFSET UNITYSDK_OFFSET(0xF16FD20)

inline static constexpr unsigned int OBKNEEOLOPB_AODLKGCMFHL_TypeDefinitionIndex = 83968;

class OBKNEEOLOPB_AODLKGCMFHL : public ::System::Object
{
public:
	::ALNCBEHGKPI* PLMFCNAKOLC; // 0x10
	::OBKNEEOLOPB* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKNEEOLOPB_AODLKGCMFHL__CTOR_OFFSET))(this);
	}

	::System::Void IDJCINLGODL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKNEEOLOPB_AODLKGCMFHL_IDJCINLGODL_OFFSET))(this);
	}
};
