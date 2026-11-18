#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class ShaderAniHelp;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KOONAFGEAEC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16351D70)
#define KOONAFGEAEC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16351C70)
#define KOONAFGEAEC_KMOAMICDONM_OFFSET UNITYSDK_OFFSET(0x16351B20)
#define KOONAFGEAEC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16351840)
#define KOONAFGEAEC__CTOR_OFFSET UNITYSDK_OFFSET(0x16351D60)

inline static constexpr unsigned int KOONAFGEAEC_TypeDefinitionIndex = 74588;

class KOONAFGEAEC : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x18
	::GCIMMDDIFBJ* PFFNLILIFNA; // 0x20
	::UnityEngine::RectTransform* MNHDKBPHAKN; // 0x28
	::FGCOIBFFCHB* NEHMCGEKACP; // 0x30
	::GCIMMDDIFBJ* DGCJKPFJNAN; // 0x38
	::ShaderAniHelp* LCFLLDMNDJG; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* PMOLKKGOALH; // 0x48
	::UnityEngine::UI::SmoothMask* OKNFLEECEJC; // 0x50
	::UnityEngine::RectTransform* FKLDAPIJFGK; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* OAJFEOBGPML; // 0x60
	::UnityEngine::Rigidbody2D* DDKNFCGLBDJ; // 0x68
	::FGCOIBFFCHB* PGNMCDKBLGB; // 0x70
	::FGCOIBFFCHB* NJBKFCGDKJG; // 0x78
	::UnityEngine::RectTransform* PELMEAEIGJK; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOONAFGEAEC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KOONAFGEAEC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOONAFGEAEC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* KMOAMICDONM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KOONAFGEAEC_KMOAMICDONM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KOONAFGEAEC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
