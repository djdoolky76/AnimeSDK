#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define FFLJBFBJJFD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x116AD980)
#define FFLJBFBJJFD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x116AD8F0)
#define FFLJBFBJJFD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x116AD740)
#define FFLJBFBJJFD__CTOR_OFFSET UNITYSDK_OFFSET(0x116AD970)

inline static constexpr unsigned int FFLJBFBJJFD_TypeDefinitionIndex = 47734;

class FFLJBFBJJFD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x18
	::UnityEngine::UI::Extension::UISlider* MPPJIMNMHLN; // 0x20
	::UnityEngine::RectTransform* EPFNAHDACLG; // 0x28
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLJBFBJJFD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFLJBFBJJFD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFLJBFBJJFD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLJBFBJJFD_KGEBDLGBGNM_OFFSET))(this);
	}
};
