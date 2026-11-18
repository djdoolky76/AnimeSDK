#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define FKKGECPOKLF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11D80F90)
#define FKKGECPOKLF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11D80EA0)
#define FKKGECPOKLF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11D80D00)
#define FKKGECPOKLF__CTOR_OFFSET UNITYSDK_OFFSET(0x11D80F80)

inline static constexpr unsigned int FKKGECPOKLF_TypeDefinitionIndex = 40604;

class FKKGECPOKLF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* AOAMAGLMHIK; // 0x18
	::UnityEngine::RectTransform* NLHAPOEHCHJ; // 0x20
	::UnityEngine::RectTransform* IKOJHNPLIIA; // 0x28
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x30
	::FGCOIBFFCHB* FPMPNDMCIDH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKGECPOKLF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FKKGECPOKLF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKGECPOKLF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FKKGECPOKLF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
