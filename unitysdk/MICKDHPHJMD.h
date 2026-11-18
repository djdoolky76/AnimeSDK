#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MICKDHPHJMD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17D352B0)
#define MICKDHPHJMD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17D35220)
#define MICKDHPHJMD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17D350B0)
#define MICKDHPHJMD__CTOR_OFFSET UNITYSDK_OFFSET(0x17D352A0)

inline static constexpr unsigned int MICKDHPHJMD_TypeDefinitionIndex = 40168;

class MICKDHPHJMD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x18
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICKDHPHJMD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MICKDHPHJMD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MICKDHPHJMD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICKDHPHJMD_KGEBDLGBGNM_OFFSET))(this);
	}
};
