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

#define EMMJLMOFMAL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1724B0B0)
#define EMMJLMOFMAL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1724AF50)
#define EMMJLMOFMAL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1724ACC0)
#define EMMJLMOFMAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1724B0A0)

inline static constexpr unsigned int EMMJLMOFMAL_TypeDefinitionIndex = 68488;

class EMMJLMOFMAL : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x20
	::FGCOIBFFCHB* OGPBJLNLLFO; // 0x28
	::FGCOIBFFCHB* MDIJNNMPCNA; // 0x30
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x38
	::UnityEngine::GameObject* IJJHBGCDJDD; // 0x40
	::FGCOIBFFCHB* AJIBHBJNOCE; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* GFGDCGAJIGK; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* GKLLAOOJGCO; // 0x58
	::FGCOIBFFCHB* APPIEHBBKMA; // 0x60
	::UnityEngine::GameObject* DEIPJONPFNG; // 0x68
	::UnityEngine::Transform* CPKBFFAKDBP; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMMJLMOFMAL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMMJLMOFMAL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMMJLMOFMAL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMMJLMOFMAL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
