#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GMDKILJNJBE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x149EDCD0)
#define GMDKILJNJBE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149EDB60)
#define GMDKILJNJBE__CTOR_OFFSET UNITYSDK_OFFSET(0x149EDCC0)

inline static constexpr unsigned int GMDKILJNJBE_TypeDefinitionIndex = 81421;

class GMDKILJNJBE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* CICOJBABMAM; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BJKGDKLCMPL; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DNGENJABFHP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* PPMCIMAADHI; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* FCGKEFIPGOG; // 0x38
	::UnityEngine::CanvasGroup* OKLLFEIJKHN; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* AFBOILBGNJG; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* CGNNGLJPIOP; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* PEEOOECBMAL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDKILJNJBE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GMDKILJNJBE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GMDKILJNJBE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
