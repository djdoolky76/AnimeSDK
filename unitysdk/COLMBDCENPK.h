#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define COLMBDCENPK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13E17D70)
#define COLMBDCENPK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13E17B70)
#define COLMBDCENPK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13E18120)
#define COLMBDCENPK__CTOR_OFFSET UNITYSDK_OFFSET(0x13E17FA0)

inline static constexpr unsigned int COLMBDCENPK_TypeDefinitionIndex = 62007;

class COLMBDCENPK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* MPALKIOIGFE; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* AJLCDCDOEEK; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLMBDCENPK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLMBDCENPK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + COLMBDCENPK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLMBDCENPK_GDEOPIBNOIN_OFFSET))(this);
	}
};
