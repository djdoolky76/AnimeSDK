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

#define FBAFNCBBGJO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14AB87D0)
#define FBAFNCBBGJO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14AB8570)
#define FBAFNCBBGJO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14AB8C70)
#define FBAFNCBBGJO__CTOR_OFFSET UNITYSDK_OFFSET(0x14AB8A70)

inline static constexpr unsigned int FBAFNCBBGJO_TypeDefinitionIndex = 64106;

class FBAFNCBBGJO : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::AAMKEDEDHPD_1<::System::Single>* LDMKHBOIDMJ; // 0x20
	::CPABOPKIGAL* JMBPGMDOIAF; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x30
	::KCMIFNGABDC_1<::System::String*>* NGMPAIHFBMJ; // 0x38
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAFNCBBGJO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAFNCBBGJO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FBAFNCBBGJO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAFNCBBGJO_GDEOPIBNOIN_OFFSET))(this);
	}
};
