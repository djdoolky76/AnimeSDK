#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define PFHDGAIFBIF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16FA8D20)
#define PFHDGAIFBIF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16FA8C50)
#define PFHDGAIFBIF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16FA8EB0)
#define PFHDGAIFBIF__CTOR_OFFSET UNITYSDK_OFFSET(0x16FA8DC0)

inline static constexpr unsigned int PFHDGAIFBIF_TypeDefinitionIndex = 58126;

class PFHDGAIFBIF : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x18
	::AAMKEDEDHPD_1<::System::Int32>* PHNAGOHEDLK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFHDGAIFBIF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFHDGAIFBIF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PFHDGAIFBIF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFHDGAIFBIF_GDEOPIBNOIN_OFFSET))(this);
	}
};
