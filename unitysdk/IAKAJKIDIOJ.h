#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define IAKAJKIDIOJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16A8F150)
#define IAKAJKIDIOJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16A8EFF0)
#define IAKAJKIDIOJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16A8EDA0)
#define IAKAJKIDIOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8F140)

inline static constexpr unsigned int IAKAJKIDIOJ_TypeDefinitionIndex = 51386;

class IAKAJKIDIOJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x18
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x20
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x28
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x30
	::LGINJIKKBJA* JDBDAFFFOJK; // 0x38
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x40
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x48
	::UnityEngine::Animation* EAKCNMHGKHL; // 0x50
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKAJKIDIOJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAKAJKIDIOJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKAJKIDIOJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAKAJKIDIOJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
