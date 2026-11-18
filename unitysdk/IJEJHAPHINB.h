#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class ShaderAniHelp;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IJEJHAPHINB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15EC8170)
#define IJEJHAPHINB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15EC8000)
#define IJEJHAPHINB__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC8160)

inline static constexpr unsigned int IJEJHAPHINB_TypeDefinitionIndex = 40873;

class IJEJHAPHINB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* OCJOCLEDABL; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20
	::UnityEngine::GameObject* COPKFNAFGME; // 0x28
	::UnityEngine::RectTransform* GEJMJPMFPKE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* CCIILJMPGGJ; // 0x38
	::UnityEngine::GameObject* IFFLHCDFOFG; // 0x40
	::ShaderAniHelp* EHJIOLOEHJI; // 0x48
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x50
	::UnityEngine::GameObject* LDIFOECAGEC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEJHAPHINB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJEJHAPHINB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJEJHAPHINB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
