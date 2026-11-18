#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define JMGOOJJPGCH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19462FD0)
#define JMGOOJJPGCH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19462EB0)
#define JMGOOJJPGCH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19462C60)
#define JMGOOJJPGCH__CTOR_OFFSET UNITYSDK_OFFSET(0x19462FC0)

inline static constexpr unsigned int JMGOOJJPGCH_TypeDefinitionIndex = 50025;

class JMGOOJJPGCH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DIOJIIKABIC; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIGeneralIconCardRarityWidgetController*>* MPPIKJIFCIA; // 0x28
	::FGCOIBFFCHB* JJGEEJBOIAO; // 0x30
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x38
	::UnityEngine::GameObject* KLNOPDPIIHI; // 0x40
	::UnityEngine::GameObject* PEIGAFDPMKI; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x50
	::FGCOIBFFCHB* NNKCDDCCOFE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGOOJJPGCH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JMGOOJJPGCH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JMGOOJJPGCH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGOOJJPGCH_KGEBDLGBGNM_OFFSET))(this);
	}
};
