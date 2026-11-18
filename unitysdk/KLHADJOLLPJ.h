#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define KLHADJOLLPJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x129A3A10)
#define KLHADJOLLPJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x129A38D0)
#define KLHADJOLLPJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x129A35C0)
#define KLHADJOLLPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x129A3A00)

inline static constexpr unsigned int KLHADJOLLPJ_TypeDefinitionIndex = 80414;

class KLHADJOLLPJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* KDGDNBGJDHN; // 0x18
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x20
	::LGINJIKKBJA* JDBDAFFFOJK; // 0x28
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x30
	::GCIMMDDIFBJ* ODAKHLNHMCD; // 0x38
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x40
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x48
	::GCIMMDDIFBJ* EAKCNMHGKHL; // 0x50
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x58
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x60
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x68
	::GCIMMDDIFBJ* DOEKEKKIPOO; // 0x70
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x78
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHADJOLLPJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KLHADJOLLPJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KLHADJOLLPJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHADJOLLPJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
