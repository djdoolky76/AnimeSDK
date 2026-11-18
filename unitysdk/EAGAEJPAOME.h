#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define EAGAEJPAOME_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x7FE2D50)
#define EAGAEJPAOME_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x7FE2C70)
#define EAGAEJPAOME_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x7FE3260)
#define EAGAEJPAOME__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE3170)

inline static constexpr unsigned int EAGAEJPAOME_TypeDefinitionIndex = 64840;

class EAGAEJPAOME : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* FNOOFNKKABC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGAEJPAOME__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGAEJPAOME_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EAGAEJPAOME_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGAEJPAOME_GDEOPIBNOIN_OFFSET))(this);
	}
};
