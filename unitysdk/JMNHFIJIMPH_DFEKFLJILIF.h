#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class FGCOIBFFCHB;
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JMNHFIJIMPH_DFEKFLJILIF_AOHLEGGAGDJ_OFFSET UNITYSDK_OFFSET(0x1309B4D0)
#define JMNHFIJIMPH_DFEKFLJILIF_CFCHIENGMMN_OFFSET UNITYSDK_OFFSET(0x1309B560)
#define JMNHFIJIMPH_DFEKFLJILIF_JJBMBPGPLKP_OFFSET UNITYSDK_OFFSET(0x1309B5E0)
#define JMNHFIJIMPH_DFEKFLJILIF_JKPPOMCNMMO_OFFSET UNITYSDK_OFFSET(0x1309B630)
#define JMNHFIJIMPH_DFEKFLJILIF_KEDDNGAEFKA_OFFSET UNITYSDK_OFFSET(0x1309B520)
#define JMNHFIJIMPH_DFEKFLJILIF__CTOR_OFFSET UNITYSDK_OFFSET(0x1309B4C0)

inline static constexpr unsigned int JMNHFIJIMPH_DFEKFLJILIF_TypeDefinitionIndex = 60020;

class JMNHFIJIMPH_DFEKFLJILIF : public ::System::Object
{
public:
	::System::Int32 MKNFBJBFLAB; // 0x10
	::System::Int32 MBNJLLBDIHA; // 0x14
	::System::Boolean AOLKFIKCNOH; // 0x18
	::System::Boolean LCAJMDLLJNK; // 0x19
	::System::Byte _padding0[0x2];
	::System::UInt32 DGEBDBEOEFO; // 0x1C
	::System::Int32 PGBOIPOEEFL; // 0x20
	::System::UInt32 EFNKGLNOMMC; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNHFIJIMPH_DFEKFLJILIF__CTOR_OFFSET))(this);
	}

	::System::Void AOHLEGGAGDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNHFIJIMPH_DFEKFLJILIF_AOHLEGGAGDJ_OFFSET))(this);
	}

	::System::UInt32 KEDDNGAEFKA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNHFIJIMPH_DFEKFLJILIF_KEDDNGAEFKA_OFFSET))(this);
	}

	::UnityEngine::Color CFCHIENGMMN()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNHFIJIMPH_DFEKFLJILIF_CFCHIENGMMN_OFFSET))(this);
	}

	::System::Boolean JJBMBPGPLKP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNHFIJIMPH_DFEKFLJILIF_JJBMBPGPLKP_OFFSET))(this);
	}

	::System::Void JKPPOMCNMMO(::UnityEngine::UI::Extension::UILocalizationText* KNBKCDCNKGH, ::FGCOIBFFCHB* DLOIINENNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + JMNHFIJIMPH_DFEKFLJILIF_JKPPOMCNMMO_OFFSET))(this, KNBKCDCNKGH, DLOIINENNCK);
	}
};
