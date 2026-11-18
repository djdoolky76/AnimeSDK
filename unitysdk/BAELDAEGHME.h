#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BAELDAEGHME_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12678AA0)
#define BAELDAEGHME_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12678940)
#define BAELDAEGHME_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x126786B0)
#define BAELDAEGHME__CTOR_OFFSET UNITYSDK_OFFSET(0x12678A90)

inline static constexpr unsigned int BAELDAEGHME_TypeDefinitionIndex = 64999;

class BAELDAEGHME : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* IJJHBGCDJDD; // 0x18
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x20
	::FGCOIBFFCHB* APPIEHBBKMA; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::FGCOIBFFCHB* OGPBJLNLLFO; // 0x38
	::FGCOIBFFCHB* MDIJNNMPCNA; // 0x40
	::FGCOIBFFCHB* AJIBHBJNOCE; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* GFGDCGAJIGK; // 0x50
	::UnityEngine::GameObject* DEIPJONPFNG; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* GKLLAOOJGCO; // 0x60
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x68
	::UnityEngine::Transform* CPKBFFAKDBP; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAELDAEGHME__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BAELDAEGHME_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BAELDAEGHME_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAELDAEGHME_KGEBDLGBGNM_OFFSET))(this);
	}
};
