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

#define FBLDIMCDEBG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16174830)
#define FBLDIMCDEBG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16174570)
#define FBLDIMCDEBG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16174D60)
#define FBLDIMCDEBG__CTOR_OFFSET UNITYSDK_OFFSET(0x16174B20)

inline static constexpr unsigned int FBLDIMCDEBG_TypeDefinitionIndex = 55648;

class FBLDIMCDEBG : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x18
	::CPABOPKIGAL* JMBPGMDOIAF; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* HAGJCBEEDPJ; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30
	::AAMKEDEDHPD_1<::System::Int32>* LDMKHBOIDMJ; // 0x38
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x40
	::KCMIFNGABDC_1<::System::String*>* NGMPAIHFBMJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLDIMCDEBG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLDIMCDEBG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FBLDIMCDEBG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLDIMCDEBG_GDEOPIBNOIN_OFFSET))(this);
	}
};
