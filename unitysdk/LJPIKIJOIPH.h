#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define LJPIKIJOIPH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12570A80)
#define LJPIKIJOIPH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12570760)
#define LJPIKIJOIPH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12571670)
#define LJPIKIJOIPH__CTOR_OFFSET UNITYSDK_OFFSET(0x12571370)

inline static constexpr unsigned int LJPIKIJOIPH_TypeDefinitionIndex = 68835;

class LJPIKIJOIPH : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* DGLPCINAMAC; // 0x28
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* DEGMIJJADNP; // 0x38
	::KCMIFNGABDC_1<::System::String*>* MEPEFGICCEC; // 0x40
	::MKBBPOFGLOF* PKCEMNJECEP; // 0x48
	::KCMIFNGABDC_1<::System::Single>* FABBEINOEGK; // 0x50
	::KCMIFNGABDC_1<::System::Single>* DCPACJKEPLG; // 0x58
	::KCMIFNGABDC_1<::System::String*>* GBAAADADDIF; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPIKIJOIPH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPIKIJOIPH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LJPIKIJOIPH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPIKIJOIPH_GDEOPIBNOIN_OFFSET))(this);
	}
};
