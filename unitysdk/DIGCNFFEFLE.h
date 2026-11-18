#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DIGCNFFEFLE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12412AE0)
#define DIGCNFFEFLE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12412A30)
#define DIGCNFFEFLE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12412830)
#define DIGCNFFEFLE__CTOR_OFFSET UNITYSDK_OFFSET(0x12412AD0)

inline static constexpr unsigned int DIGCNFFEFLE_TypeDefinitionIndex = 74382;

class DIGCNFFEFLE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* AHKNHJKFDCH; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20
	::LGINJIKKBJA* MDHOCAOPCEC; // 0x28
	::FGCOIBFFCHB* MCBLBOLNFPL; // 0x30
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* IOBBIDNNCHH; // 0x40
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGCNFFEFLE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DIGCNFFEFLE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DIGCNFFEFLE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGCNFFEFLE_KGEBDLGBGNM_OFFSET))(this);
	}
};
