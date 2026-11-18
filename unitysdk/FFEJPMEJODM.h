#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define FFEJPMEJODM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1713F7F0)
#define FFEJPMEJODM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1713F720)
#define FFEJPMEJODM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1713FB50)
#define FFEJPMEJODM__CTOR_OFFSET UNITYSDK_OFFSET(0x1713FA60)

inline static constexpr unsigned int FFEJPMEJODM_TypeDefinitionIndex = 65031;

class FFEJPMEJODM : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* CDOIJJAFFBG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEJPMEJODM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEJPMEJODM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FFEJPMEJODM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEJPMEJODM_GDEOPIBNOIN_OFFSET))(this);
	}
};
