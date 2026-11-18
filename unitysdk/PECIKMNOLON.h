#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define PECIKMNOLON_BLONNONLKNG_OFFSET UNITYSDK_OFFSET(0x173223F0)
#define PECIKMNOLON_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17322080)
#define PECIKMNOLON_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17321F30)
#define PECIKMNOLON_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x173223E0)
#define PECIKMNOLON__CTOR_OFFSET UNITYSDK_OFFSET(0x17322250)

inline static constexpr unsigned int PECIKMNOLON_TypeDefinitionIndex = 83927;

class PECIKMNOLON : public ::MHMFINLCNFN
{
public:
	// static const ::System::Single DPFAGAGPDAB; // 0x0
	::MKBBPOFGLOF* BFCCCDEBOJB; // 0x28
	::MKBBPOFGLOF* OJBMNLAJJLC; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* LOBJKEHABDD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIKMNOLON__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIKMNOLON_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PECIKMNOLON_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIKMNOLON_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void BLONNONLKNG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIKMNOLON_BLONNONLKNG_OFFSET))(this);
	}
};
