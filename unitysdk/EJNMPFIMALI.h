#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EJNMPFIMALI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17119FA0)
#define EJNMPFIMALI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17119F10)
#define EJNMPFIMALI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17119DC0)
#define EJNMPFIMALI__CTOR_OFFSET UNITYSDK_OFFSET(0x17119F90)

inline static constexpr unsigned int EJNMPFIMALI_TypeDefinitionIndex = 42509;

class EJNMPFIMALI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x18
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNMPFIMALI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJNMPFIMALI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNMPFIMALI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJNMPFIMALI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
