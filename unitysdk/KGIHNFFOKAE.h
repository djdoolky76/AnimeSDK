#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }
template <typename T> class MEKABAIJMNM_1;

#define KGIHNFFOKAE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13C5D730)
#define KGIHNFFOKAE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13C5D640)
#define KGIHNFFOKAE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13C5D430)
#define KGIHNFFOKAE__CTOR_OFFSET UNITYSDK_OFFSET(0x13C5D720)

inline static constexpr unsigned int KGIHNFFOKAE_TypeDefinitionIndex = 41252;

class KGIHNFFOKAE : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIDoubleTipsInfoWidgetController*>* LLNLKIKBBMF; // 0x20
	::UnityEngine::GameObject* IMDLHCPGEDN; // 0x28
	::UnityEngine::UI::Extension::UITabButton* HJDAMCBKNEI; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* EPMEILNJMFF; // 0x40
	::UnityEngine::Transform* IDOFGDOOGJJ; // 0x48
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGIHNFFOKAE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGIHNFFOKAE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGIHNFFOKAE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGIHNFFOKAE_KGEBDLGBGNM_OFFSET))(this);
	}
};
