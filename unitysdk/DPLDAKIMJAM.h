#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DPLDAKIMJAM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xF9A99E0)
#define DPLDAKIMJAM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xF9A97D0)
#define DPLDAKIMJAM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xF9AA010)
#define DPLDAKIMJAM__CTOR_OFFSET UNITYSDK_OFFSET(0xF9A9E70)

inline static constexpr unsigned int DPLDAKIMJAM_TypeDefinitionIndex = 38394;

class DPLDAKIMJAM : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* ECLBFKJGJCC; // 0x28
	::KCMIFNGABDC_1<::System::String*>* FOBIKPOHNHM; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* LBBPMMDEFCN; // 0x38
	::KCMIFNGABDC_1<::System::Single>* EAHFCLIGHDM; // 0x40
	::KCMIFNGABDC_1<::System::Single>* GPKLMAAJPKB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLDAKIMJAM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLDAKIMJAM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DPLDAKIMJAM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLDAKIMJAM_GDEOPIBNOIN_OFFSET))(this);
	}
};
