#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIPhotoTaskRowWidgetController; }
namespace UnityEngine { class RectTransform; }
template <typename T> class MEKABAIJMNM_1;

#define ADHIEHKDMFN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14396C00)
#define ADHIEHKDMFN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14396B30)
#define ADHIEHKDMFN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14396960)
#define ADHIEHKDMFN__CTOR_OFFSET UNITYSDK_OFFSET(0x14396BF0)

inline static constexpr unsigned int ADHIEHKDMFN_TypeDefinitionIndex = 81707;

class ADHIEHKDMFN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* POPGLGEDFFG; // 0x18
	::FGCOIBFFCHB* HIKHFOHLCIB; // 0x20
	::UnityEngine::RectTransform* LMEHICMMJNN; // 0x28
	::MonoUITableScrollV2* IIEGFIPLDLP; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIPhotoTaskRowWidgetController*>* ICBAHBLINDK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHIEHKDMFN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ADHIEHKDMFN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ADHIEHKDMFN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHIEHKDMFN_KGEBDLGBGNM_OFFSET))(this);
	}
};
