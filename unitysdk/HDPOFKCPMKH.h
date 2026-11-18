#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define HDPOFKCPMKH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1407B420)
#define HDPOFKCPMKH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1407B270)
#define HDPOFKCPMKH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1407B750)
#define HDPOFKCPMKH__CTOR_OFFSET UNITYSDK_OFFSET(0x1407B610)

inline static constexpr unsigned int HDPOFKCPMKH_TypeDefinitionIndex = 78295;

class HDPOFKCPMKH : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* KOIGCMHOPAI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPOFKCPMKH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPOFKCPMKH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HDPOFKCPMKH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPOFKCPMKH_GDEOPIBNOIN_OFFSET))(this);
	}
};
