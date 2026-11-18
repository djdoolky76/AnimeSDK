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

#define IHFFODFFPAA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x160A30C0)
#define IHFFODFFPAA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x160A2EC0)
#define IHFFODFFPAA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x160A34F0)
#define IHFFODFFPAA__CTOR_OFFSET UNITYSDK_OFFSET(0x160A3320)

inline static constexpr unsigned int IHFFODFFPAA_TypeDefinitionIndex = 39972;

class IHFFODFFPAA : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* JMBPGMDOIAF; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x28
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x30
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHFFODFFPAA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHFFODFFPAA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IHFFODFFPAA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHFFODFFPAA_GDEOPIBNOIN_OFFSET))(this);
	}
};
