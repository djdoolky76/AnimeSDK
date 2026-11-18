#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define IEMBEELEOBO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1656E5D0)
#define IEMBEELEOBO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1656E490)
#define IEMBEELEOBO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1656E830)
#define IEMBEELEOBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1656E730)

inline static constexpr unsigned int IEMBEELEOBO_TypeDefinitionIndex = 88737;

class IEMBEELEOBO : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* EBPALLFEIMG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMBEELEOBO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMBEELEOBO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IEMBEELEOBO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMBEELEOBO_GDEOPIBNOIN_OFFSET))(this);
	}
};
