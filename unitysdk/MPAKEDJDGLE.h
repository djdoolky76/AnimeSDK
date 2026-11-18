#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define MPAKEDJDGLE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFA83940)
#define MPAKEDJDGLE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFA83790)
#define MPAKEDJDGLE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFA83C10)
#define MPAKEDJDGLE__CTOR_OFFSET UNITYSDK_OFFSET(0xFA83AD0)

inline static constexpr unsigned int MPAKEDJDGLE_TypeDefinitionIndex = 83379;

class MPAKEDJDGLE : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* BMGCBMFCGFC; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JBNEIAECMPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPAKEDJDGLE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPAKEDJDGLE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MPAKEDJDGLE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPAKEDJDGLE_GDEOPIBNOIN_OFFSET))(this);
	}
};
