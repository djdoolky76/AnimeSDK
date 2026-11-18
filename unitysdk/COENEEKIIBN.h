#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define COENEEKIIBN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13E177B0)
#define COENEEKIIBN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13E176E0)
#define COENEEKIIBN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13E179E0)
#define COENEEKIIBN__CTOR_OFFSET UNITYSDK_OFFSET(0x13E17940)

inline static constexpr unsigned int COENEEKIIBN_TypeDefinitionIndex = 73239;

class COENEEKIIBN : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* PLEJMLIFFHG; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COENEEKIIBN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COENEEKIIBN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + COENEEKIIBN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COENEEKIIBN_GDEOPIBNOIN_OFFSET))(this);
	}
};
