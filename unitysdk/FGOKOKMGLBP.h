#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define FGOKOKMGLBP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14ACB440)
#define FGOKOKMGLBP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14ACB300)
#define FGOKOKMGLBP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14ACB6A0)
#define FGOKOKMGLBP__CTOR_OFFSET UNITYSDK_OFFSET(0x14ACB5A0)

inline static constexpr unsigned int FGOKOKMGLBP_TypeDefinitionIndex = 77031;

class FGOKOKMGLBP : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::System::String*>* AMDPEEPELAP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOKOKMGLBP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOKOKMGLBP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FGOKOKMGLBP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOKOKMGLBP_GDEOPIBNOIN_OFFSET))(this);
	}
};
