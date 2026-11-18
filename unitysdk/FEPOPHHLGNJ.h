#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FEPOPHHLGNJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14AC4480)
#define FEPOPHHLGNJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14AC4370)
#define FEPOPHHLGNJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14AC41C0)
#define FEPOPHHLGNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC4470)

inline static constexpr unsigned int FEPOPHHLGNJ_TypeDefinitionIndex = 64670;

class FEPOPHHLGNJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* KBHFBLJPFJH; // 0x18
	::FGCOIBFFCHB* PLGNFEFEPFM; // 0x20
	::UnityEngine::Transform* AJDPODGNOKJ; // 0x28
	::FGCOIBFFCHB* DGMGMEICCGE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* KBGNPMJLJPP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPOPHHLGNJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FEPOPHHLGNJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FEPOPHHLGNJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPOPHHLGNJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
