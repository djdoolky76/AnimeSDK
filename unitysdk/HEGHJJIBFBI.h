#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFNEDOLPIOO.h"

namespace MoleMole { class UIMainCityGeneralTipsWidgetController; }
namespace MoleMole { class UIMainCityGeneralTipsWidgetController_Context; }
namespace System { class String; }

#define HEGHJJIBFBI_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x146F57E0)
#define HEGHJJIBFBI_CPOLHKPOMEC_OFFSET UNITYSDK_OFFSET(0x146F5E30)
#define HEGHJJIBFBI_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x146F5940)
#define HEGHJJIBFBI_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x146F5CB0)
#define HEGHJJIBFBI__CTOR_OFFSET UNITYSDK_OFFSET(0x146F57F0)

inline static constexpr unsigned int HEGHJJIBFBI_TypeDefinitionIndex = 40442;

class HEGHJJIBFBI : public ::BFNEDOLPIOO
{
public:
	// static const ::System::String* DJCOBMILLPG; // 0x0
	::MoleMole::UIMainCityGeneralTipsWidgetController_Context* DAAAEJDBNFI; // 0x30
	::MoleMole::UIMainCityGeneralTipsWidgetController* NHJJFLPHAGI; // 0x38

	::System::Void _ctor(::System::String* MCOHLHMKLIP, ::System::Boolean BGHANMFMBKA, ::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HEGHJJIBFBI__CTOR_OFFSET))(this, MCOHLHMKLIP, BGHANMFMBKA, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGHJJIBFBI_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGHJJIBFBI_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGHJJIBFBI_OENOEFBECOA_OFFSET))(this);
	}

	::System::Void CPOLHKPOMEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGHJJIBFBI_CPOLHKPOMEC_OFFSET))(this);
	}
};
