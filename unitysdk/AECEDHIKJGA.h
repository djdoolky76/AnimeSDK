#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define AECEDHIKJGA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1646A6C0)
#define AECEDHIKJGA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1646A5F0)
#define AECEDHIKJGA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1646A9C0)
#define AECEDHIKJGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1646A8D0)

inline static constexpr unsigned int AECEDHIKJGA_TypeDefinitionIndex = 68616;

class AECEDHIKJGA : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AECEDHIKJGA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AECEDHIKJGA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AECEDHIKJGA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AECEDHIKJGA_GDEOPIBNOIN_OFFSET))(this);
	}
};
