#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define AOHIALGKIFI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17DE7980)
#define AOHIALGKIFI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17DE7840)
#define AOHIALGKIFI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17DE7BA0)
#define AOHIALGKIFI__CTOR_OFFSET UNITYSDK_OFFSET(0x17DE7AA0)

inline static constexpr unsigned int AOHIALGKIFI_TypeDefinitionIndex = 58009;

class AOHIALGKIFI : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* HDFBONJIHCF; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHIALGKIFI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHIALGKIFI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AOHIALGKIFI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHIALGKIFI_GDEOPIBNOIN_OFFSET))(this);
	}
};
