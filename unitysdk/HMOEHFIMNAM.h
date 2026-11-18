#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define HMOEHFIMNAM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1011FC90)
#define HMOEHFIMNAM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1011FB40)
#define HMOEHFIMNAM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1011FFF0)
#define HMOEHFIMNAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1011FEC0)

inline static constexpr unsigned int HMOEHFIMNAM_TypeDefinitionIndex = 83530;

class HMOEHFIMNAM : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* GPJCGPEGFIG; // 0x28
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x30
	::KCMIFNGABDC_1<::System::String*>* ADGBECHNGKL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOEHFIMNAM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOEHFIMNAM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HMOEHFIMNAM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOEHFIMNAM_GDEOPIBNOIN_OFFSET))(this);
	}
};
