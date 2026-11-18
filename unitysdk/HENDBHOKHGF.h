#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class ImgTextSkillParser; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HENDBHOKHGF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19E0A800)
#define HENDBHOKHGF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19E0A630)
#define HENDBHOKHGF__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0A7F0)

inline static constexpr unsigned int HENDBHOKHGF_TypeDefinitionIndex = 75900;

class HENDBHOKHGF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* KDADINNPFAK; // 0x18
	::UnityEngine::Transform* EOOOEEJMGGL; // 0x20
	::UnityEngine::UI::Text* CPKECLLFNBM; // 0x28
	::UnityEngine::GameObject* OHAOKFPOLJL; // 0x30
	::UnityEngine::UI::Text* BEGCOICMFFI; // 0x38
	::UnityEngine::GameObject* OEDOKBJLPJI; // 0x40
	::UnityEngine::GameObject* NIIFBCKBLPC; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* EJCAMBJEEGM; // 0x50
	::UnityEngine::UI::Text* NIIPLCNIDIO; // 0x58
	::MoleMole::ImgTextSkillParser* OIJMFDBGDJD; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* ECKHLEGLKPL; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* IJPKKNBMJHF; // 0x70
	::UnityEngine::GameObject* PFDEDDALBID; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENDBHOKHGF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HENDBHOKHGF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HENDBHOKHGF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
