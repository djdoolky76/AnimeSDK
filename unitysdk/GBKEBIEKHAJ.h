#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class KNLFLMMHALL_1;

#define GBKEBIEKHAJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10EE0BC0)
#define GBKEBIEKHAJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10EE0AF0)
#define GBKEBIEKHAJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10EE08D0)
#define GBKEBIEKHAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE0BB0)

inline static constexpr unsigned int GBKEBIEKHAJ_TypeDefinitionIndex = 80261;

class GBKEBIEKHAJ : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::UI::Extension::UITabButtonGroup* FJPCAHJIAGA; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* AMLGJLFOLKE; // 0x28
	::UnityEngine::GameObject* NLADLFCHHBO; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* HLACHANLLLJ; // 0x38
	::KNLFLMMHALL_1<::System::Object*>* JLBIMNKLBHG; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* FAIOLCDEHEK; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKEBIEKHAJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GBKEBIEKHAJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GBKEBIEKHAJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKEBIEKHAJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
