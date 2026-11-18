#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DJKBNMADEDN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x149B0A30)
#define DJKBNMADEDN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x149B0940)
#define DJKBNMADEDN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149B0720)
#define DJKBNMADEDN__CTOR_OFFSET UNITYSDK_OFFSET(0x149B0A20)

inline static constexpr unsigned int DJKBNMADEDN_TypeDefinitionIndex = 55472;

class DJKBNMADEDN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KDADINNPFAK; // 0x18
	::UnityEngine::GameObject* IDPLAFNHJEL; // 0x20
	::UnityEngine::GameObject* IDIBOCGJNLF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* CIGMFHAFHIL; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* GONGHKCHNMI; // 0x38
	::FGCOIBFFCHB* JDIAGCOMHKJ; // 0x40
	::UnityEngine::GameObject* PKIOACELFJG; // 0x48
	::UnityEngine::GameObject* NBOAFLELGFA; // 0x50
	::FGCOIBFFCHB* KCMIOBDMFGE; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKBNMADEDN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DJKBNMADEDN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKBNMADEDN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DJKBNMADEDN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
