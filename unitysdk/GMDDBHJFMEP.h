#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GMDDBHJFMEP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17A15180)
#define GMDDBHJFMEP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17A150B0)
#define GMDDBHJFMEP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17A14EE0)
#define GMDDBHJFMEP__CTOR_OFFSET UNITYSDK_OFFSET(0x17A15170)

inline static constexpr unsigned int GMDDBHJFMEP_TypeDefinitionIndex = 88247;

class GMDDBHJFMEP : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::UnityEngine::GameObject* ECMGJGNOMJJ; // 0x20
	::UnityEngine::Transform* OLLEHOJAOGN; // 0x28
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x30
	::UnityEngine::Transform* DEIPJONPFNG; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x40
	::UnityEngine::Transform* NEMJJKIFGJM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDDBHJFMEP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GMDDBHJFMEP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GMDDBHJFMEP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDDBHJFMEP_KGEBDLGBGNM_OFFSET))(this);
	}
};
