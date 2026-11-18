#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DPNNGJALJHP_JGGCPGMEMMG;

#define DPNNGJALJHP_PMLGMFJPKBB_JFLNNPGAPJD_OFFSET UNITYSDK_OFFSET(0x15463F40)
#define DPNNGJALJHP_PMLGMFJPKBB__CTOR_OFFSET UNITYSDK_OFFSET(0x15463F30)

inline static constexpr unsigned int DPNNGJALJHP_PMLGMFJPKBB_TypeDefinitionIndex = 55463;

class DPNNGJALJHP_PMLGMFJPKBB : public ::System::Object
{
public:
	::DPNNGJALJHP_JGGCPGMEMMG* FGBNBFHOKAA; // 0x10
	::System::UInt32 NGKFJNHDBKK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNNGJALJHP_PMLGMFJPKBB__CTOR_OFFSET))(this);
	}

	::System::Void JFLNNPGAPJD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNNGJALJHP_PMLGMFJPKBB_JFLNNPGAPJD_OFFSET))(this);
	}
};
