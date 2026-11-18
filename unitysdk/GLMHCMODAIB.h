#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadScrollView; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIInvitationMessageWidgetController; }
namespace MoleMole { class UIPrivateMessageNewMessageHintKeyWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define GLMHCMODAIB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1814E340)
#define GLMHCMODAIB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1814E270)
#define GLMHCMODAIB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1814E040)
#define GLMHCMODAIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1814E330)

inline static constexpr unsigned int GLMHCMODAIB_TypeDefinitionIndex = 41940;

class GLMHCMODAIB : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIInvitationMessageWidgetController*>* CEIODKBBHNK; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIPrivateMessageNewMessageHintKeyWidgetController*>* IKIKADJNPED; // 0x28
	::UnityEngine::GameObject* JMIFIKPCMNC; // 0x30
	::LGINJIKKBJA* OJAGIJHEDOG; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x40
	::MoleMole::MonoGamepadScrollView* JODKLLLCLCL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMHCMODAIB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLMHCMODAIB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLMHCMODAIB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMHCMODAIB_KGEBDLGBGNM_OFFSET))(this);
	}
};
