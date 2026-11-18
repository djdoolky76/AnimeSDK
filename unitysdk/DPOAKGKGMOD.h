#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define DPOAKGKGMOD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x154640D0)
#define DPOAKGKGMOD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15463F80)
#define DPOAKGKGMOD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15464800)
#define DPOAKGKGMOD__CTOR_OFFSET UNITYSDK_OFFSET(0x15464670)

inline static constexpr unsigned int DPOAKGKGMOD_TypeDefinitionIndex = 73171;

class DPOAKGKGMOD : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* BOHNBOELHDG; // 0x28
	::MKBBPOFGLOF* JAIGFKHCMPE; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* CGCPLAGODAM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOAKGKGMOD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOAKGKGMOD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DPOAKGKGMOD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOAKGKGMOD_GDEOPIBNOIN_OFFSET))(this);
	}
};
