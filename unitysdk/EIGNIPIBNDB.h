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

#define EIGNIPIBNDB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16146A00)
#define EIGNIPIBNDB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x161468A0)
#define EIGNIPIBNDB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x161465B0)
#define EIGNIPIBNDB__CTOR_OFFSET UNITYSDK_OFFSET(0x161469F0)

inline static constexpr unsigned int EIGNIPIBNDB_TypeDefinitionIndex = 46222;

class EIGNIPIBNDB : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x18
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x20
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x28
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x30
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x38
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x40
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x48
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x50
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x58
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x60
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x68
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x70
	::LGINJIKKBJA* KADDHBOOKAC; // 0x78
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGNIPIBNDB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EIGNIPIBNDB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGNIPIBNDB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EIGNIPIBNDB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
