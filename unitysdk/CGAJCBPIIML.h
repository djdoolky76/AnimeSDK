#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CGAJCBPIIML_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x132583D0)
#define CGAJCBPIIML_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x132582E0)
#define CGAJCBPIIML_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x132580E0)
#define CGAJCBPIIML__CTOR_OFFSET UNITYSDK_OFFSET(0x132583C0)

inline static constexpr unsigned int CGAJCBPIIML_TypeDefinitionIndex = 44179;

class CGAJCBPIIML : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CDLNLDILDGA; // 0x18
	::UnityEngine::GameObject* GIDKMPHPDJA; // 0x20
	::UnityEngine::GameObject* GNJILCIKOJO; // 0x28
	::UnityEngine::GameObject* FFHFHPAHDFK; // 0x30
	::UnityEngine::GameObject* FMHPAIJLHDK; // 0x38
	::UnityEngine::Animation* KOCAHFMIGDO; // 0x40
	::FGCOIBFFCHB* IFMBFJNPHNJ; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* DAMMLBIBHGE; // 0x50
	::FGCOIBFFCHB* NKLMAOANBHI; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAJCBPIIML__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CGAJCBPIIML_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAJCBPIIML_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CGAJCBPIIML_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
