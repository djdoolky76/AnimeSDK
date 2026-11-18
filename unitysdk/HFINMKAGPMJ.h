#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGPHFADIIBM.h"

namespace MoleMole { class UIRewardTipsWidgetController; }

#define HFINMKAGPMJ_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x14945A00)
#define HFINMKAGPMJ_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x14945E90)
#define HFINMKAGPMJ_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x14945F00)
#define HFINMKAGPMJ_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x14945AF0)
#define HFINMKAGPMJ_HFMHKBAPHAI_OFFSET UNITYSDK_OFFSET(0x149461A0)
#define HFINMKAGPMJ_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x14946080)
#define HFINMKAGPMJ_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x14946110)
#define HFINMKAGPMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14945A10)

inline static constexpr unsigned int HFINMKAGPMJ_TypeDefinitionIndex = 86176;

class HFINMKAGPMJ : public ::KGPHFADIIBM
{
public:
	::MoleMole::UIRewardTipsWidgetController* MBFAFIPMIGD; // 0x30

	::System::Void _ctor(::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFINMKAGPMJ__CTOR_OFFSET))(this, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFINMKAGPMJ_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFINMKAGPMJ_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFINMKAGPMJ_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFINMKAGPMJ_OENOEFBECOA_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFINMKAGPMJ_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFINMKAGPMJ_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Void HFMHKBAPHAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFINMKAGPMJ_HFMHKBAPHAI_OFFSET))(this);
	}
};
