#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define OIIAPFLPHBO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14F84950)
#define OIIAPFLPHBO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14F847E0)
#define OIIAPFLPHBO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F844F0)
#define OIIAPFLPHBO__CTOR_OFFSET UNITYSDK_OFFSET(0x14F84940)

inline static constexpr unsigned int OIIAPFLPHBO_TypeDefinitionIndex = 41247;

class OIIAPFLPHBO : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* CDPILOFPPKF; // 0x18
	::FGCOIBFFCHB* DCHOAMFEKGJ; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* NMEPBOPGFJF; // 0x28
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* JIGPEMFGBOF; // 0x38
	::MEKABAIJMNM_1<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* EOMGAEONDMD; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x48
	::KNLFLMMHALL_1<::System::Object*>* KBNFJENOFJJ; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIAPFLPHBO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIIAPFLPHBO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIIAPFLPHBO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIAPFLPHBO_KGEBDLGBGNM_OFFSET))(this);
	}
};
