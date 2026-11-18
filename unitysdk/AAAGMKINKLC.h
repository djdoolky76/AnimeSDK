#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define AAAGMKINKLC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14391710)
#define AAAGMKINKLC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14391660)
#define AAAGMKINKLC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x143914C0)
#define AAAGMKINKLC__CTOR_OFFSET UNITYSDK_OFFSET(0x14391700)

inline static constexpr unsigned int AAAGMKINKLC_TypeDefinitionIndex = 77179;

class AAAGMKINKLC : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* BFJPFKCCANA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAAGMKINKLC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AAAGMKINKLC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AAAGMKINKLC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAAGMKINKLC_KGEBDLGBGNM_OFFSET))(this);
	}
};
