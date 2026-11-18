#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define GHLBLLANNHJ_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x10FDA000)
#define GHLBLLANNHJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10FD9F90)
#define GHLBLLANNHJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10FD9E40)
#define GHLBLLANNHJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10FDA330)
#define GHLBLLANNHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10FDA200)

inline static constexpr unsigned int GHLBLLANNHJ_TypeDefinitionIndex = 73357;

class GHLBLLANNHJ : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Single>* PHBLCAELOOD; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* JHOCBDOCAKI; // 0x30
	::KCMIFNGABDC_1<::System::String*>* AEOGCGACKBG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLBLLANNHJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLBLLANNHJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GHLBLLANNHJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GHLBLLANNHJ_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLBLLANNHJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
