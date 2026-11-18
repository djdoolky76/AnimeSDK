#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMainCityMiniMenuInputConfig; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class LayoutElement; }

#define LHGCBFAMDLA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14DAF930)
#define LHGCBFAMDLA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14DAF860)
#define LHGCBFAMDLA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14DAF630)
#define LHGCBFAMDLA__CTOR_OFFSET UNITYSDK_OFFSET(0x14DAF920)

inline static constexpr unsigned int LHGCBFAMDLA_TypeDefinitionIndex = 83532;

class LHGCBFAMDLA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::LayoutElement* GKCBJIHEMCF; // 0x18
	::UIControllerExtensionData* NHPCCIFGOBF; // 0x20
	::UnityEngine::RectTransform* NFIGONJMFON; // 0x28
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::MoleMole::UIMainCityMiniMenuInputConfig* HIOEEOJBHAM; // 0x40
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x48
	::UnityEngine::UI::HorizontalLayoutGroup* JEPOIIDDBNM; // 0x50
	::UnityEngine::RectTransform* BMCNMANNEGL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHGCBFAMDLA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHGCBFAMDLA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHGCBFAMDLA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHGCBFAMDLA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
