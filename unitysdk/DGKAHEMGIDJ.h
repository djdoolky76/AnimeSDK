#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define DGKAHEMGIDJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x7F762A0)
#define DGKAHEMGIDJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x7F761C0)
#define DGKAHEMGIDJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x7F765B0)
#define DGKAHEMGIDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x7F764C0)

inline static constexpr unsigned int DGKAHEMGIDJ_TypeDefinitionIndex = 60825;

class DGKAHEMGIDJ : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* BOHBDHAPLDN; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* POEJNGOMCCB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKAHEMGIDJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKAHEMGIDJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DGKAHEMGIDJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKAHEMGIDJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
