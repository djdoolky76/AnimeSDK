#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define AADEONBKDEK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17DB8860)
#define AADEONBKDEK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17DB87D0)
#define AADEONBKDEK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17DB8A90)
#define AADEONBKDEK__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB89F0)

inline static constexpr unsigned int AADEONBKDEK_TypeDefinitionIndex = 90094;

class AADEONBKDEK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* ENPMPAJBGAL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADEONBKDEK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADEONBKDEK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AADEONBKDEK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADEONBKDEK_GDEOPIBNOIN_OFFSET))(this);
	}
};
