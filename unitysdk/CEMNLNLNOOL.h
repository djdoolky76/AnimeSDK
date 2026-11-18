#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CEMNLNLNOOL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16865A50)
#define CEMNLNLNOOL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16865980)
#define CEMNLNLNOOL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16865C00)
#define CEMNLNLNOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x16865B10)

inline static constexpr unsigned int CEMNLNLNOOL_TypeDefinitionIndex = 74625;

class CEMNLNLNOOL : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x18
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEMNLNLNOOL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEMNLNLNOOL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CEMNLNLNOOL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEMNLNLNOOL_GDEOPIBNOIN_OFFSET))(this);
	}
};
