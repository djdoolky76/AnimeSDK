#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define NAPPMOCIIKL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13B4E6A0)
#define NAPPMOCIIKL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13B4E4A0)
#define NAPPMOCIIKL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13B4EA00)
#define NAPPMOCIIKL__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4E830)

inline static constexpr unsigned int NAPPMOCIIKL_TypeDefinitionIndex = 48762;

class NAPPMOCIIKL : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::MKBBPOFGLOF* MDBJDMPDGND; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* MKADHHGCEJA; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* LEIPHLADKID; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPMOCIIKL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPMOCIIKL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NAPPMOCIIKL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPMOCIIKL_GDEOPIBNOIN_OFFSET))(this);
	}
};
