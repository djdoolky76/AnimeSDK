#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define PCMMEMKLHEF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15533820)
#define PCMMEMKLHEF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15533790)
#define PCMMEMKLHEF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x155335F0)
#define PCMMEMKLHEF__CTOR_OFFSET UNITYSDK_OFFSET(0x15533810)

inline static constexpr unsigned int PCMMEMKLHEF_TypeDefinitionIndex = 88672;

class PCMMEMKLHEF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::UnityEngine::UI::Extension::UITabButton* HJIHNMPIEJL; // 0x28
	::UnityEngine::GameObject* IMDLHCPGEDN; // 0x30
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMMEMKLHEF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCMMEMKLHEF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMMEMKLHEF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCMMEMKLHEF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
