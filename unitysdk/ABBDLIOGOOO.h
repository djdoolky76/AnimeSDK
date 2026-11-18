#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class ShaderAniHelp;
namespace MoleMole { class MonoUIStyleColorConfig; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ABBDLIOGOOO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11B85AE0)
#define ABBDLIOGOOO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11B85970)
#define ABBDLIOGOOO__CTOR_OFFSET UNITYSDK_OFFSET(0x11B85AD0)

inline static constexpr unsigned int ABBDLIOGOOO_TypeDefinitionIndex = 63074;

class ABBDLIOGOOO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MMNNLOMMNGL; // 0x20
	::GCIMMDDIFBJ* MENLDDAPGAI; // 0x28
	::ShaderAniHelp* OBEMLOACGAF; // 0x30
	::GCIMMDDIFBJ* LIMPLNKGIKJ; // 0x38
	::MoleMole::MonoUIStyleColorConfig* PEIMIFBEONG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBDLIOGOOO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABBDLIOGOOO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABBDLIOGOOO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
