#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define FOMNHNBLHDD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11D919D0)
#define FOMNHNBLHDD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11D918F0)
#define FOMNHNBLHDD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11D91EB0)
#define FOMNHNBLHDD__CTOR_OFFSET UNITYSDK_OFFSET(0x11D91DC0)

inline static constexpr unsigned int FOMNHNBLHDD_TypeDefinitionIndex = 63181;

class FOMNHNBLHDD : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* POEJNGOMCCB; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* FHDBMFHDIEI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMNHNBLHDD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMNHNBLHDD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FOMNHNBLHDD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMNHNBLHDD_GDEOPIBNOIN_OFFSET))(this);
	}
};
