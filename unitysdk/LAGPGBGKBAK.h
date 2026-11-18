#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define LAGPGBGKBAK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15DDAF20)
#define LAGPGBGKBAK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15DDAE50)
#define LAGPGBGKBAK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15DDB280)
#define LAGPGBGKBAK__CTOR_OFFSET UNITYSDK_OFFSET(0x15DDB190)

inline static constexpr unsigned int LAGPGBGKBAK_TypeDefinitionIndex = 82305;

class LAGPGBGKBAK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* LFOEDIEBDOK; // 0x18
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAGPGBGKBAK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAGPGBGKBAK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LAGPGBGKBAK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAGPGBGKBAK_GDEOPIBNOIN_OFFSET))(this);
	}
};
