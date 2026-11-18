#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;

#define NAIFHBMFBKB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x120DD5B0)
#define NAIFHBMFBKB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x120DD2F0)
#define NAIFHBMFBKB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x120DDC30)
#define NAIFHBMFBKB__CTOR_OFFSET UNITYSDK_OFFSET(0x120DD9F0)

inline static constexpr unsigned int NAIFHBMFBKB_TypeDefinitionIndex = 74845;

class NAIFHBMFBKB : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* BOHNBOELHDG; // 0x18
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x20
	::AAMKEDEDHPD_1<::System::Int32>* ELAADEDGEIL; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* LLBMBMAHADP; // 0x30
	::CPABOPKIGAL* KNMBHIBCKBN; // 0x38
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x40
	::AAMKEDEDHPD_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIFHBMFBKB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIFHBMFBKB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NAIFHBMFBKB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIFHBMFBKB_GDEOPIBNOIN_OFFSET))(this);
	}
};
