#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define DBLCLECBNCF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14991E10)
#define DBLCLECBNCF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14991D20)
#define DBLCLECBNCF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14991B10)
#define DBLCLECBNCF__CTOR_OFFSET UNITYSDK_OFFSET(0x14991E00)

inline static constexpr unsigned int DBLCLECBNCF_TypeDefinitionIndex = 49068;

class DBLCLECBNCF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* NPLJLLOJMAD; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x30
	::UnityEngine::GameObject* NGNBNKKHBPJ; // 0x38
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* JONKKOCDBIP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* EPMEILNJMFF; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCLECBNCF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DBLCLECBNCF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DBLCLECBNCF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCLECBNCF_KGEBDLGBGNM_OFFSET))(this);
	}
};
