#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define NJEOFMOKFNK_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1AE25A40)
#define NJEOFMOKFNK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1AE259D0)
#define NJEOFMOKFNK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1AE25880)
#define NJEOFMOKFNK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1AE25E70)
#define NJEOFMOKFNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE25D20)

inline static constexpr unsigned int NJEOFMOKFNK_TypeDefinitionIndex = 76507;

class NJEOFMOKFNK : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* EGCCIODCJIA; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* HDIEABKPPNF; // 0x30
	::KCMIFNGABDC_1<::System::String*>* HHMPFIANODF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEOFMOKFNK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEOFMOKFNK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NJEOFMOKFNK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NJEOFMOKFNK_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEOFMOKFNK_GDEOPIBNOIN_OFFSET))(this);
	}
};
