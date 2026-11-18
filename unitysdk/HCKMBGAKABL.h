#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPINMCKNMCE.h"

class BCCMPEIHJMN_CAICKFLHNGI;

#define HCKMBGAKABL_ALKMAHLNANM_OFFSET UNITYSDK_OFFSET(0x19DF8FF0)
#define HCKMBGAKABL_LPOJJCLLBGD_OFFSET UNITYSDK_OFFSET(0x19DF9160)
#define HCKMBGAKABL__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF8FA0)

inline static constexpr unsigned int HCKMBGAKABL_TypeDefinitionIndex = 58326;

class HCKMBGAKABL : public ::NPINMCKNMCE
{
public:
	::System::Void _ctor(::BCCMPEIHJMN_CAICKFLHNGI* HHEOJLBHEGI)
	{
		return ((::System::Void(*)(::PVOID, ::BCCMPEIHJMN_CAICKFLHNGI*))((::PBYTE)hIl2Cpp + HCKMBGAKABL__CTOR_OFFSET))(this, HHEOJLBHEGI);
	}

	::System::Void ALKMAHLNANM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKMBGAKABL_ALKMAHLNANM_OFFSET))(this);
	}

	::System::Void LPOJJCLLBGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKMBGAKABL_LPOJJCLLBGD_OFFSET))(this);
	}
};
