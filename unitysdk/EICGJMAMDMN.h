#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define EICGJMAMDMN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14152270)
#define EICGJMAMDMN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14151FB0)
#define EICGJMAMDMN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14152810)
#define EICGJMAMDMN__CTOR_OFFSET UNITYSDK_OFFSET(0x141525D0)

inline static constexpr unsigned int EICGJMAMDMN_TypeDefinitionIndex = 67566;

class EICGJMAMDMN : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* HAGJCBEEDPJ; // 0x28
	::KCMIFNGABDC_1<::System::String*>* NGMPAIHFBMJ; // 0x30
	::CPABOPKIGAL* JMBPGMDOIAF; // 0x38
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x40
	::AAMKEDEDHPD_1<::System::Boolean>* LDMKHBOIDMJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EICGJMAMDMN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EICGJMAMDMN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EICGJMAMDMN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EICGJMAMDMN_GDEOPIBNOIN_OFFSET))(this);
	}
};
