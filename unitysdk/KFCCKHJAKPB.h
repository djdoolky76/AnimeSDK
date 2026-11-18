#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define KFCCKHJAKPB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15207C20)
#define KFCCKHJAKPB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15207B90)
#define KFCCKHJAKPB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15207E40)
#define KFCCKHJAKPB__CTOR_OFFSET UNITYSDK_OFFSET(0x15207DA0)

inline static constexpr unsigned int KFCCKHJAKPB_TypeDefinitionIndex = 78978;

class KFCCKHJAKPB : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCCKHJAKPB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCCKHJAKPB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KFCCKHJAKPB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCCKHJAKPB_GDEOPIBNOIN_OFFSET))(this);
	}
};
