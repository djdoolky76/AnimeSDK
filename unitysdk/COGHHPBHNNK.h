#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBottomRewardInfoWidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class MEKABAIJMNM_1;

#define COGHHPBHNNK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1497A450)
#define COGHHPBHNNK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1497A2B0)
#define COGHHPBHNNK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14979FD0)
#define COGHHPBHNNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1497A440)

inline static constexpr unsigned int COGHHPBHNNK_TypeDefinitionIndex = 91370;

class COGHHPBHNNK : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BKDDKDMILCA; // 0x18
	::FGCOIBFFCHB* JNPFHFKJNEJ; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* NJNNALMMHFG; // 0x28
	::LGINJIKKBJA* AFCPBGIMNGM; // 0x30
	::LGINJIKKBJA* HEOACLIFDNO; // 0x38
	::LGINJIKKBJA* PMBLECALCKB; // 0x40
	::UnityEngine::UI::Extension::UITimeWidget* CCDNKBONPLB; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* MLKKFBEOHIB; // 0x50
	::MoleMole::UIGeneralButtonController* IHLJNLKGEOC; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* CKHKPHBKAOJ; // 0x60
	::MoleMole::MonoGamepadSpaceList* BBIADLDPLAH; // 0x68
	::MEKABAIJMNM_1<::MoleMole::UIGeneralBottomRewardInfoWidgetController*>* ONBNGDLNOMP; // 0x70
	::UnityEngine::RectTransform* HJIKFFIOAAM; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COGHHPBHNNK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COGHHPBHNNK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COGHHPBHNNK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COGHHPBHNNK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
