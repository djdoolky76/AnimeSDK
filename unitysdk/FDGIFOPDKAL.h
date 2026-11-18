#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define FDGIFOPDKAL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1617ABB0)
#define FDGIFOPDKAL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1617A950)
#define FDGIFOPDKAL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1617B050)
#define FDGIFOPDKAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1617AE50)

inline static constexpr unsigned int FDGIFOPDKAL_TypeDefinitionIndex = 83814;

class FDGIFOPDKAL : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x18
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::CPABOPKIGAL* JMBPGMDOIAF; // 0x30
	::KCMIFNGABDC_1<::System::String*>* NGMPAIHFBMJ; // 0x38
	::AAMKEDEDHPD_1<::System::Int32>* LDMKHBOIDMJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGIFOPDKAL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGIFOPDKAL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FDGIFOPDKAL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGIFOPDKAL_GDEOPIBNOIN_OFFSET))(this);
	}
};
