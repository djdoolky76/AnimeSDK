#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define ODNGOFDFOOJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15FD4F50)
#define ODNGOFDFOOJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15FD4EC0)
#define ODNGOFDFOOJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15FD4D40)
#define ODNGOFDFOOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD4F40)

inline static constexpr unsigned int ODNGOFDFOOJ_TypeDefinitionIndex = 91519;

class ODNGOFDFOOJ : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* EOMGAEONDMD; // 0x18
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* OPLCKBFDNHF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DOAIKOHLHGJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNGOFDFOOJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODNGOFDFOOJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODNGOFDFOOJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNGOFDFOOJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
