#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define HCCIPCBLPOH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17AEA220)
#define HCCIPCBLPOH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17AE9EB0)
#define HCCIPCBLPOH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17AEA990)
#define HCCIPCBLPOH__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEA660)

inline static constexpr unsigned int HCCIPCBLPOH_TypeDefinitionIndex = 77922;

class HCCIPCBLPOH : public ::CGJEMKCKIJG
{
public:
	// static const ::System::String* JHHNJOLJJJK; // 0x0
	::MKBBPOFGLOF* HPKPPPAGEFE; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* HOOCFAFBCOA; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* FCDIAHPIKDG; // 0x30
	::CPABOPKIGAL* MMFNFINOFPN; // 0x38
	::MKBBPOFGLOF* BIIGBKMCLEA; // 0x40
	::MKBBPOFGLOF* EGCCIODCJIA; // 0x48
	::KCMIFNGABDC_1<::System::Boolean>* HCHNKCCCDCD; // 0x50
	::KCMIFNGABDC_1<::System::Int32>* PIKCJJMABMC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCIPCBLPOH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCIPCBLPOH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HCCIPCBLPOH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCIPCBLPOH_GDEOPIBNOIN_OFFSET))(this);
	}
};
