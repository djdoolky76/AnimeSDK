#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define POLEDLDDGON_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C1E4780)
#define POLEDLDDGON_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C1E46F0)
#define POLEDLDDGON_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C1E4530)
#define POLEDLDDGON__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E4770)

inline static constexpr unsigned int POLEDLDDGON_TypeDefinitionIndex = 79545;

class POLEDLDDGON : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GIEBFLOGIFI; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* BJAJCBNMNLD; // 0x30
	::MoleMole::UIGeneralButtonController* ODGPNPPDILI; // 0x38
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLEDLDDGON__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POLEDLDDGON_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POLEDLDDGON_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLEDLDDGON_KGEBDLGBGNM_OFFSET))(this);
	}
};
