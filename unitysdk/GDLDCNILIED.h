#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define GDLDCNILIED_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15CDC4C0)
#define GDLDCNILIED_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15CDC430)
#define GDLDCNILIED_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15CDC750)
#define GDLDCNILIED__CTOR_OFFSET UNITYSDK_OFFSET(0x15CDC6B0)

inline static constexpr unsigned int GDLDCNILIED_TypeDefinitionIndex = 63490;

class GDLDCNILIED : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLDCNILIED__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLDCNILIED_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GDLDCNILIED_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLDCNILIED_GDEOPIBNOIN_OFFSET))(this);
	}
};
