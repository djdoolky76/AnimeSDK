#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NIKEPBMMCAM.h"
#include "unitysdk/System/Object.h"

class BPDKILGLJNF;

#define MCEOPOKPJCD_EBGFGILCHGC_OFFSET UNITYSDK_OFFSET(0x16C74A90)
#define MCEOPOKPJCD_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x16C74B20)
#define MCEOPOKPJCD_JGOGNKBOBCN_OFFSET UNITYSDK_OFFSET(0x16C74AE0)
#define MCEOPOKPJCD_PAFFHKDNPKF_OFFSET UNITYSDK_OFFSET(0x16C74AA0)
#define MCEOPOKPJCD__CTOR_OFFSET UNITYSDK_OFFSET(0x16C74B60)

inline static constexpr unsigned int MCEOPOKPJCD_TypeDefinitionIndex = 48613;

class MCEOPOKPJCD : public ::System::Object
{
public:
	::BPDKILGLJNF* LNKOEIGICOA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEOPOKPJCD__CTOR_OFFSET))(this);
	}

	::NIKEPBMMCAM EBGFGILCHGC()
	{
		return ((::NIKEPBMMCAM(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEOPOKPJCD_EBGFGILCHGC_OFFSET))(this);
	}

	::System::Void PAFFHKDNPKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEOPOKPJCD_PAFFHKDNPKF_OFFSET))(this);
	}

	::System::Void JGOGNKBOBCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEOPOKPJCD_JGOGNKBOBCN_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEOPOKPJCD_HNDGJKPNIHA_OFFSET))(this);
	}
};
