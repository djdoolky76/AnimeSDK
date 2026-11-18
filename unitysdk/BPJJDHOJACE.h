#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define BPJJDHOJACE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1858E5B0)
#define BPJJDHOJACE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1858E500)
#define BPJJDHOJACE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1858E2D0)
#define BPJJDHOJACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1858E5A0)

inline static constexpr unsigned int BPJJDHOJACE_TypeDefinitionIndex = 56468;

class BPJJDHOJACE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* BEFIFNDEPEG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JAPNMEOKEII; // 0x20
	::LGINJIKKBJA* OKGBOAENDNC; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OFNMKHFOJMA; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::UnityEngine::UI::Extension::UITimeWidget* OIIGEGFNEHI; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* FNOGABKMGNC; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* AFKLJBMEJBJ; // 0x50
	::UnityEngine::Transform* EICCPKPBLAM; // 0x58
	::UnityEngine::Transform* COILHPABGPG; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* OLHCBFJLONE; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJJDHOJACE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPJJDHOJACE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPJJDHOJACE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJJDHOJACE_KGEBDLGBGNM_OFFSET))(this);
	}
};
