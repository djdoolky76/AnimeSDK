#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define KFEAJDMJLME_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15207F30)
#define KFEAJDMJLME_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15207E50)
#define KFEAJDMJLME_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15208200)
#define KFEAJDMJLME__CTOR_OFFSET UNITYSDK_OFFSET(0x15208110)

inline static constexpr unsigned int KFEAJDMJLME_TypeDefinitionIndex = 62885;

class KFEAJDMJLME : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* DAHFAPBJMCN; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEAJDMJLME__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEAJDMJLME_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KFEAJDMJLME_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEAJDMJLME_GDEOPIBNOIN_OFFSET))(this);
	}
};
