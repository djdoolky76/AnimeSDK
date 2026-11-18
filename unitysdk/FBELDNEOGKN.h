#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define FBELDNEOGKN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14ABA2A0)
#define FBELDNEOGKN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14AB9FE0)
#define FBELDNEOGKN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14ABA830)
#define FBELDNEOGKN__CTOR_OFFSET UNITYSDK_OFFSET(0x14ABA5F0)

inline static constexpr unsigned int FBELDNEOGKN_TypeDefinitionIndex = 75675;

class FBELDNEOGKN : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* FKNHBOBPOGJ; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* HLMGLKNCLOB; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* BFGLJJILJOH; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38
	::KCMIFNGABDC_1<::System::Single>* PDLGEIAHAMF; // 0x40
	::CPABOPKIGAL* FBEBEHNGDPG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBELDNEOGKN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBELDNEOGKN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FBELDNEOGKN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBELDNEOGKN_GDEOPIBNOIN_OFFSET))(this);
	}
};
