#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFNEDOLPIOO.h"

class JFLHGHFBNGJ;
namespace MoleMole { class UIGeneralAchievementTipsRowWidgetController; }

#define ONGNOMHCAJD_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x16F89460)
#define ONGNOMHCAJD_CPOLHKPOMEC_OFFSET UNITYSDK_OFFSET(0x16F89AC0)
#define ONGNOMHCAJD_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x16F89490)
#define ONGNOMHCAJD_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x16F898E0)
#define ONGNOMHCAJD__CTOR_OFFSET UNITYSDK_OFFSET(0x16F89470)

inline static constexpr unsigned int ONGNOMHCAJD_TypeDefinitionIndex = 70097;

class ONGNOMHCAJD : public ::BFNEDOLPIOO
{
public:
	::JFLHGHFBNGJ* EFFAONJBCOG; // 0x30
	::MoleMole::UIGeneralAchievementTipsRowWidgetController* NHJJFLPHAGI; // 0x38

	::System::Void _ctor(::JFLHGHFBNGJ* LJBPECKCCEA, ::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::JFLHGHFBNGJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + ONGNOMHCAJD__CTOR_OFFSET))(this, LJBPECKCCEA, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGNOMHCAJD_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGNOMHCAJD_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGNOMHCAJD_OENOEFBECOA_OFFSET))(this);
	}

	::System::Void CPOLHKPOMEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGNOMHCAJD_CPOLHKPOMEC_OFFSET))(this);
	}
};
