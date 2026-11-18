#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define LPIJKKFJEOC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13D0D6E0)
#define LPIJKKFJEOC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13D0D4E0)
#define LPIJKKFJEOC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13D0DA90)
#define LPIJKKFJEOC__CTOR_OFFSET UNITYSDK_OFFSET(0x13D0D8C0)

inline static constexpr unsigned int LPIJKKFJEOC_TypeDefinitionIndex = 43985;

class LPIJKKFJEOC : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x18
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::CPABOPKIGAL* JMBPGMDOIAF; // 0x30
	::AAMKEDEDHPD_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIJKKFJEOC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIJKKFJEOC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LPIJKKFJEOC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIJKKFJEOC_GDEOPIBNOIN_OFFSET))(this);
	}
};
