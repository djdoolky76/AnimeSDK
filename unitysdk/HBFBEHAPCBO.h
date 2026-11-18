#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HBFBEHAPCBO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17A33D60)
#define HBFBEHAPCBO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17A33C10)
#define HBFBEHAPCBO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17A34330)
#define HBFBEHAPCBO__CTOR_OFFSET UNITYSDK_OFFSET(0x17A341E0)

inline static constexpr unsigned int HBFBEHAPCBO_TypeDefinitionIndex = 90616;

class HBFBEHAPCBO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* PDDOBOJJBJI; // 0x28
	::CPABOPKIGAL* DIIMPPOAGAE; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFBEHAPCBO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFBEHAPCBO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HBFBEHAPCBO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFBEHAPCBO_GDEOPIBNOIN_OFFSET))(this);
	}
};
