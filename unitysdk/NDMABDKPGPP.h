#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NDMABDKPGPP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11F6B860)
#define NDMABDKPGPP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11F6B7D0)
#define NDMABDKPGPP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F6B5F0)
#define NDMABDKPGPP__CTOR_OFFSET UNITYSDK_OFFSET(0x11F6B850)

inline static constexpr unsigned int NDMABDKPGPP_TypeDefinitionIndex = 50240;

class NDMABDKPGPP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x20
	::MoleMole::MonoInputKey* GCOEMIMAGJG; // 0x28
	::LGINJIKKBJA* JBAGBGPNPDL; // 0x30
	::UnityEngine::RectTransform* BOGHCBIHHBF; // 0x38
	::UnityEngine::RectTransform* KKHENFOHJCI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMABDKPGPP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDMABDKPGPP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDMABDKPGPP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMABDKPGPP_KGEBDLGBGNM_OFFSET))(this);
	}
};
