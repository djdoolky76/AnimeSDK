#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define HDMJIEIAGBP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1407B1D0)
#define HDMJIEIAGBP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1407B0B0)
#define HDMJIEIAGBP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1407ADA0)
#define HDMJIEIAGBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1407B1C0)

inline static constexpr unsigned int HDMJIEIAGBP_TypeDefinitionIndex = 89692;

class HDMJIEIAGBP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x18
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x20
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x28
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x30
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x38
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x40
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x48
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x50
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x58
	::GCIMMDDIFBJ* EODPFKHDCFI; // 0x60
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x68
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x70
	::LGINJIKKBJA* KADDHBOOKAC; // 0x78
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x80
	::GCIMMDDIFBJ* LPOAEPILCEI; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDMJIEIAGBP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HDMJIEIAGBP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HDMJIEIAGBP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDMJIEIAGBP_KGEBDLGBGNM_OFFSET))(this);
	}
};
