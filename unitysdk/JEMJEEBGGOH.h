#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JEMJEEBGGOH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17B21F50)
#define JEMJEEBGGOH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17B21E60)
#define JEMJEEBGGOH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17B21C40)
#define JEMJEEBGGOH__CTOR_OFFSET UNITYSDK_OFFSET(0x17B21F40)

inline static constexpr unsigned int JEMJEEBGGOH_TypeDefinitionIndex = 73769;

class JEMJEEBGGOH : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadRegion* DIMNHJAMLDG; // 0x18
	::UnityEngine::RectTransform* HPFAKEMHPNK; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AONFLAFLEDL; // 0x28
	::FGCOIBFFCHB* BGCNNJHDFLJ; // 0x30
	::FGCOIBFFCHB* AMLAGCLMAPE; // 0x38
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* GIEBFLOGIFI; // 0x48
	::UnityEngine::RectTransform* MDPCEEDMINE; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* MCLBBDHMJJB; // 0x58
	::UnityEngine::RectTransform* HMHNFDPGOJA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMJEEBGGOH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEMJEEBGGOH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMJEEBGGOH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEMJEEBGGOH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
