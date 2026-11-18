#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FOFLDALJAGP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x142B8C40)
#define FOFLDALJAGP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x142B8B70)
#define FOFLDALJAGP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x142B89D0)
#define FOFLDALJAGP__CTOR_OFFSET UNITYSDK_OFFSET(0x142B8C30)

inline static constexpr unsigned int FOFLDALJAGP_TypeDefinitionIndex = 54836;

class FOFLDALJAGP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* LHEJDEMABKF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* LOAJCGPLMLC; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* LIPJLGMFENK; // 0x28
	::FGCOIBFFCHB* PFNAFELKHHP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* JHONJBJPEHD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFLDALJAGP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FOFLDALJAGP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFLDALJAGP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FOFLDALJAGP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
