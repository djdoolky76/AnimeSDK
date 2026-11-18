#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define KNJPDGFPFFA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A2D6AD0)
#define KNJPDGFPFFA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A2D6A40)
#define KNJPDGFPFFA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A2D68C0)
#define KNJPDGFPFFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D6AC0)

inline static constexpr unsigned int KNJPDGFPFFA_TypeDefinitionIndex = 39787;

class KNJPDGFPFFA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* OEMEDHLBJEJ; // 0x18
	::UnityEngine::RectTransform* OCJOCLEDABL; // 0x20
	::UnityEngine::RectTransform* MMNNJEJOJIP; // 0x28
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJPDGFPFFA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KNJPDGFPFFA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KNJPDGFPFFA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJPDGFPFFA_KGEBDLGBGNM_OFFSET))(this);
	}
};
