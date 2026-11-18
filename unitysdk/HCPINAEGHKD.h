#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HCPINAEGHKD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x149FDAD0)
#define HCPINAEGHKD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x149FDA00)
#define HCPINAEGHKD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149FD810)
#define HCPINAEGHKD__CTOR_OFFSET UNITYSDK_OFFSET(0x149FDAC0)

inline static constexpr unsigned int HCPINAEGHKD_TypeDefinitionIndex = 50966;

class HCPINAEGHKD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* NMMCKDHAHHH; // 0x18
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x20
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x28
	::LGINJIKKBJA* KADDHBOOKAC; // 0x30
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x38
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPINAEGHKD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCPINAEGHKD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPINAEGHKD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCPINAEGHKD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
