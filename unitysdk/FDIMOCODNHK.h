#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define FDIMOCODNHK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x116A8480)
#define FDIMOCODNHK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x116A83B0)
#define FDIMOCODNHK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x116A8700)
#define FDIMOCODNHK__CTOR_OFFSET UNITYSDK_OFFSET(0x116A8610)

inline static constexpr unsigned int FDIMOCODNHK_TypeDefinitionIndex = 85303;

class FDIMOCODNHK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* CHFJGKMBBHJ; // 0x18
	::AAMKEDEDHPD_1<::System::Int32>* MALLIFNIPCL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIMOCODNHK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIMOCODNHK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FDIMOCODNHK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIMOCODNHK_GDEOPIBNOIN_OFFSET))(this);
	}
};
