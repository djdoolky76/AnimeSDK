#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DGKINDNPMJI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19A44BB0)
#define DGKINDNPMJI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19A44B20)
#define DGKINDNPMJI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19A449D0)
#define DGKINDNPMJI__CTOR_OFFSET UNITYSDK_OFFSET(0x19A44BA0)

inline static constexpr unsigned int DGKINDNPMJI_TypeDefinitionIndex = 64703;

class DGKINDNPMJI : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKINDNPMJI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DGKINDNPMJI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DGKINDNPMJI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKINDNPMJI_KGEBDLGBGNM_OFFSET))(this);
	}
};
