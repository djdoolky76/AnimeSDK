#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define FIACMGLAPIO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14297390)
#define FIACMGLAPIO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x142971E0)
#define FIACMGLAPIO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14297C80)
#define FIACMGLAPIO__CTOR_OFFSET UNITYSDK_OFFSET(0x14297B20)

inline static constexpr unsigned int FIACMGLAPIO_TypeDefinitionIndex = 53394;

class FIACMGLAPIO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* CJILKJBKMAA; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* AKDFDBBJJJA; // 0x30
	::KCMIFNGABDC_1<::System::Single>* CKDEAPCLPBB; // 0x38
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* JNLHJHOBEHI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIACMGLAPIO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIACMGLAPIO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FIACMGLAPIO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIACMGLAPIO_GDEOPIBNOIN_OFFSET))(this);
	}
};
