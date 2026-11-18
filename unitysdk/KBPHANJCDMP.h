#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class ShaderAniHelp;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KBPHANJCDMP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B815B0)
#define KBPHANJCDMP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B81410)
#define KBPHANJCDMP__CTOR_OFFSET UNITYSDK_OFFSET(0x15B815A0)

inline static constexpr unsigned int KBPHANJCDMP_TypeDefinitionIndex = 42981;

class KBPHANJCDMP : public ::GIBMJLOJLKD
{
public:
	::ShaderAniHelp* BINGIGENGDL; // 0x18
	::GCIMMDDIFBJ* DNAMCHPOLGL; // 0x20
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* PLAEINEAEGI; // 0x30
	::GCIMMDDIFBJ* LFMMDGILCBH; // 0x38
	::ShaderAniHelp* MMOCPIEFFKO; // 0x40
	::UnityEngine::RectTransform* GIKJLNJEMNO; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* MFGPCFNAPHA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPHANJCDMP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBPHANJCDMP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBPHANJCDMP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
