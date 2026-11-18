#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIEquipStateController; }
namespace MoleMole { class UIGeneralEquipDetailV2WidgetController; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class MEKABAIJMNM_1;

#define MDPBKMIDAEA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15928C70)
#define MDPBKMIDAEA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15928AF0)
#define MDPBKMIDAEA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15928740)
#define MDPBKMIDAEA__CTOR_OFFSET UNITYSDK_OFFSET(0x15928C60)

inline static constexpr unsigned int MDPBKMIDAEA_TypeDefinitionIndex = 75966;

class MDPBKMIDAEA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CKHKPHBKAOJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* KONPMOGCPID; // 0x20
	::UnityEngine::RectTransform* JMMJCLDDNGJ; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIGeneralEquipDetailV2WidgetController*>* KNFEFHFGKOP; // 0x30
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x38
	::UnityEngine::GameObject* KFFNANEFEOB; // 0x40
	::UnityEngine::RectTransform* INLHOCMCAPK; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* MLKKFBEOHIB; // 0x50
	::UnityEngine::RectTransform* POJCKANNIGK; // 0x58
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x60
	::MonoUITableScrollV2* CMIOPLBECAN; // 0x68
	::MEKABAIJMNM_1<::MoleMole::UIGeneralSortWidgetController*>* ICONPHLDHDH; // 0x70
	::MoleMole::UIEquipStateController* LLFIIGKJAKJ; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* BEBFGFLILMP; // 0x80
	::UnityEngine::GameObject* IDIOIFDLMJI; // 0x88
	::FGCOIBFFCHB* LEPFMCKLENI; // 0x90
	::UnityEngine::UI::Extension::UITimeWidget* CCDNKBONPLB; // 0x98
	::MonoUITableScrollV2* MBINKKPNKJM; // 0xA0
	::MonoUITableScrollV2* HDOJABEPFOD; // 0xA8
	::UnityEngine::GameObject* NPLFBIHOPJN; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPBKMIDAEA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MDPBKMIDAEA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPBKMIDAEA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MDPBKMIDAEA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
