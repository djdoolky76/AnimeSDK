#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GPPHJFJCNNF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1491F270)
#define GPPHJFJCNNF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1491F0A0)
#define GPPHJFJCNNF__CTOR_OFFSET UNITYSDK_OFFSET(0x1491F260)

inline static constexpr unsigned int GPPHJFJCNNF_TypeDefinitionIndex = 85441;

class GPPHJFJCNNF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* ACHBBPJIBIE; // 0x18
	::UnityEngine::UI::Text* LJPBJFAOFCG; // 0x20
	::UnityEngine::UI::Text* CFLAIKJJDJK; // 0x28
	::UnityEngine::RectTransform* BEIDHIDPLAL; // 0x30
	::UnityEngine::UI::Text* LILCKEGIMEN; // 0x38
	::UnityEngine::UI::Text* ICDKHHJADIA; // 0x40
	::UnityEngine::RectTransform* AHGHLLOBIHG; // 0x48
	::UnityEngine::RectTransform* OIKFAPBOMHL; // 0x50
	::UnityEngine::UI::Text* CMJLFAIMHLE; // 0x58
	::UnityEngine::UI::Text* DNCGFPGDDPH; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* CJHCCIAEBNP; // 0x68
	::UnityEngine::RectTransform* GCBOLADBPKE; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* FDGLCOGJALK; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPHJFJCNNF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GPPHJFJCNNF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GPPHJFJCNNF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
