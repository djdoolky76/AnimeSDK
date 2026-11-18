#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KMEJFPIAOBJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17667030)
#define KMEJFPIAOBJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17666F40)
#define KMEJFPIAOBJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17666D20)
#define KMEJFPIAOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17667020)

inline static constexpr unsigned int KMEJFPIAOBJ_TypeDefinitionIndex = 89068;

class KMEJFPIAOBJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DONFACDNMGF; // 0x18
	::FGCOIBFFCHB* AOGOBHHFIEJ; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PAGDCPDHCNE; // 0x28
	::FGCOIBFFCHB* OHPDGPEPFIE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* PALPDKGCLKD; // 0x38
	::UnityEngine::RectTransform* CGHKKMDMMOP; // 0x40
	::UnityEngine::RectTransform* GDBPAOEKCOM; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* JEBLIFINKFI; // 0x50
	::UnityEngine::RectTransform* ILIALHJPJGH; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* BPJGCHENFNK; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEJFPIAOBJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KMEJFPIAOBJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KMEJFPIAOBJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEJFPIAOBJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
