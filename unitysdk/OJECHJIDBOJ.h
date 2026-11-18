#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OJECHJIDBOJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15FE4660)
#define OJECHJIDBOJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15FE4570)
#define OJECHJIDBOJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15FE4380)
#define OJECHJIDBOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE4650)

inline static constexpr unsigned int OJECHJIDBOJ_TypeDefinitionIndex = 49004;

class OJECHJIDBOJ : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* AFLMMFFCJNO; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* POAANBBNPKG; // 0x20
	::LGINJIKKBJA* BBLAOLFAMIA; // 0x28
	::MonoUITableScrollV2* NCJECMPOGFB; // 0x30
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x38
	::MoleMole::MonoGamepadNavigatableList* LNELFKDMKOP; // 0x40
	::UnityEngine::Transform* KIMAPMJPBNJ; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* NIFCHKDNHPC; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJECHJIDBOJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OJECHJIDBOJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJECHJIDBOJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OJECHJIDBOJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
