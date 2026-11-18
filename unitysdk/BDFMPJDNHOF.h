#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define BDFMPJDNHOF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x143CE3F0)
#define BDFMPJDNHOF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x143CE230)
#define BDFMPJDNHOF__CTOR_OFFSET UNITYSDK_OFFSET(0x143CE3E0)

inline static constexpr unsigned int BDFMPJDNHOF_TypeDefinitionIndex = 77874;

class BDFMPJDNHOF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DDDEGOLKBAJ; // 0x18
	::GCIMMDDIFBJ* IKLCJDGBMCG; // 0x20
	::UnityEngine::UI::Extension::UISlider* GOPFAPHEBGK; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* COAMBIHHBLP; // 0x30
	::GCIMMDDIFBJ* OEOKLHIMCJK; // 0x38
	::GCIMMDDIFBJ* KPILLAMMJKM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* LHOLPLELKKI; // 0x48
	::UnityEngine::UI::Extension::UISlider* BENOBFOBIJD; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* ABKJMICDKJP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFMPJDNHOF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDFMPJDNHOF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDFMPJDNHOF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
