#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IIHJIBPAOMA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F6FF70)
#define IIHJIBPAOMA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F6FEE0)
#define IIHJIBPAOMA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F6FD90)
#define IIHJIBPAOMA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6FF60)

inline static constexpr unsigned int IIHJIBPAOMA_TypeDefinitionIndex = 41850;

class IIHJIBPAOMA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIHJIBPAOMA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IIHJIBPAOMA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IIHJIBPAOMA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIHJIBPAOMA_KGEBDLGBGNM_OFFSET))(this);
	}
};
