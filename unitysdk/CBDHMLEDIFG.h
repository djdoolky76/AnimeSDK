#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }

#define CBDHMLEDIFG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1141E620)
#define CBDHMLEDIFG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1141E590)
#define CBDHMLEDIFG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1141EDB0)
#define CBDHMLEDIFG_GETBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x1141E9B0)
#define CBDHMLEDIFG_JKHKOGCEHBO_OFFSET UNITYSDK_OFFSET(0x1141EDC0)
#define CBDHMLEDIFG_OPENBUBBLEROW_OFFSET UNITYSDK_OFFSET(0x1141EBB0)
#define CBDHMLEDIFG_PPLEAHKKMIG_OFFSET UNITYSDK_OFFSET(0x1141E6A0)
#define CBDHMLEDIFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1141ED60)

inline static constexpr unsigned int CBDHMLEDIFG_TypeDefinitionIndex = 86377;

class CBDHMLEDIFG : public ::MHMFINLCNFN
{
public:
	::HOFAIFGAHGJ* LMLBAMFHPLL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDHMLEDIFG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDHMLEDIFG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CBDHMLEDIFG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::MoleMole::UIGeneralNewsBubbleWidgetController* GetBubbleWidget()
	{
		return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDHMLEDIFG_GETBUBBLEWIDGET_OFFSET))(this);
	}

	::MoleMole::UIGeneralNewsBubbleRowWidgetController* OpenBubbleRow()
	{
		return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDHMLEDIFG_OPENBUBBLEROW_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDHMLEDIFG_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void PPLEAHKKMIG(::System::Boolean CIFBMLFIKDO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CBDHMLEDIFG_PPLEAHKKMIG_OFFSET))(this, CIFBMLFIKDO);
	}

	static ::System::UInt32 JKHKOGCEHBO()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CBDHMLEDIFG_JKHKOGCEHBO_OFFSET))();
	}
};
