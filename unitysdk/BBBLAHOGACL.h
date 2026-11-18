#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define BBBLAHOGACL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x169DA790)
#define BBBLAHOGACL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x169DA700)
#define BBBLAHOGACL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x169DA8B0)
#define BBBLAHOGACL__CTOR_OFFSET UNITYSDK_OFFSET(0x169DA810)

inline static constexpr unsigned int BBBLAHOGACL_TypeDefinitionIndex = 86881;

class BBBLAHOGACL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* GJIGGAONIDE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBLAHOGACL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBLAHOGACL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BBBLAHOGACL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBLAHOGACL_GDEOPIBNOIN_OFFSET))(this);
	}
};
