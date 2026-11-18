#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define IPCOEPKEFLG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xF887260)
#define IPCOEPKEFLG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xF887180)
#define IPCOEPKEFLG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xF887610)
#define IPCOEPKEFLG__CTOR_OFFSET UNITYSDK_OFFSET(0xF887520)

inline static constexpr unsigned int IPCOEPKEFLG_TypeDefinitionIndex = 47131;

class IPCOEPKEFLG : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x28
	::KCMIFNGABDC_1<::System::String*>* OPNFMCBPBLH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCOEPKEFLG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCOEPKEFLG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IPCOEPKEFLG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCOEPKEFLG_GDEOPIBNOIN_OFFSET))(this);
	}
};
