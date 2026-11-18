#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCIKBEJKPCB.h"

namespace MoleMole { class UIMainCityGuideItemWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IKGDGMJKBIP_ACFAACMNLEE_OFFSET UNITYSDK_OFFSET(0x197D22A0)
#define IKGDGMJKBIP_BMOGOGNIINE_OFFSET UNITYSDK_OFFSET(0x197D2330)
#define IKGDGMJKBIP_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x197D2210)
#define IKGDGMJKBIP_DIOOIKGBJCF_OFFSET UNITYSDK_OFFSET(0x197D1C90)
#define IKGDGMJKBIP_HIABONACIDH_OFFSET UNITYSDK_OFFSET(0x197D1930)
#define IKGDGMJKBIP_KBIDBAPIKHD_OFFSET UNITYSDK_OFFSET(0x197D1D20)
#define IKGDGMJKBIP_LNJOOFKCJNN_OFFSET UNITYSDK_OFFSET(0x197D1250)
#define IKGDGMJKBIP_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x197D1360)
#define IKGDGMJKBIP__CTOR_OFFSET UNITYSDK_OFFSET(0x197D1C80)

inline static constexpr unsigned int IKGDGMJKBIP_TypeDefinitionIndex = 60267;

class IKGDGMJKBIP : public ::OCIKBEJKPCB
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::Entity*, ::MoleMole::UIMainCityGuideItemWidgetController*>* FDKAINFDJAJ; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGDGMJKBIP__CTOR_OFFSET))(this);
	}

	::System::Void LNJOOFKCJNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGDGMJKBIP_LNJOOFKCJNN_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGDGMJKBIP_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void HIABONACIDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGDGMJKBIP_HIABONACIDH_OFFSET))(this);
	}

	::System::Void DIOOIKGBJCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGDGMJKBIP_DIOOIKGBJCF_OFFSET))(this);
	}

	::System::Void KBIDBAPIKHD(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + IKGDGMJKBIP_KBIDBAPIKHD_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGDGMJKBIP_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void ACFAACMNLEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGDGMJKBIP_ACFAACMNLEE_OFFSET))(this);
	}

	::System::Void BMOGOGNIINE(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + IKGDGMJKBIP_BMOGOGNIINE_OFFSET))(this, EIFONLCJOPG);
	}
};
