#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define HJLBIGIAMLB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14A1CBC0)
#define HJLBIGIAMLB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14A1CAF0)
#define HJLBIGIAMLB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14A1C900)
#define HJLBIGIAMLB__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1CBB0)

inline static constexpr unsigned int HJLBIGIAMLB_TypeDefinitionIndex = 72001;

class HJLBIGIAMLB : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* KBNFJENOFJJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* EOMGAEONDMD; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* NMEPBOPGFJF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLBIGIAMLB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJLBIGIAMLB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJLBIGIAMLB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLBIGIAMLB_KGEBDLGBGNM_OFFSET))(this);
	}
};
