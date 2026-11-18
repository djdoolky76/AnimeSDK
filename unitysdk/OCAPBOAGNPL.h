#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OCAPBOAGNPL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B773860)
#define OCAPBOAGNPL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1B773790)
#define OCAPBOAGNPL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B773610)
#define OCAPBOAGNPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B773850)

inline static constexpr unsigned int OCAPBOAGNPL_TypeDefinitionIndex = 52363;

class OCAPBOAGNPL : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x20
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x28
	::UnityEngine::Transform* FIOPMNMJBCG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAPBOAGNPL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCAPBOAGNPL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCAPBOAGNPL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAPBOAGNPL_KGEBDLGBGNM_OFFSET))(this);
	}
};
