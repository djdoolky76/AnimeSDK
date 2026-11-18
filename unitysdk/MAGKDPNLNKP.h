#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPCLFJBIBEK.h"
#include "unitysdk/System/Object.h"

#define MAGKDPNLNKP_IPHFDIKBFGD_OFFSET UNITYSDK_OFFSET(0x1F54AAC0)
#define MAGKDPNLNKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F54AB00)

inline static constexpr unsigned int MAGKDPNLNKP_TypeDefinitionIndex = 28979;

class MAGKDPNLNKP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGKDPNLNKP__CTOR_OFFSET))(this);
	}

	::IPCLFJBIBEK IPHFDIKBFGD()
	{
		return ((::IPCLFJBIBEK(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGKDPNLNKP_IPHFDIKBFGD_OFFSET))(this);
	}
};
