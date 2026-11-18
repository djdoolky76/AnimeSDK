#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Text; }

#define AHOCGFMGIBF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7A1140)
#define AHOCGFMGIBF__CTOR_2_OFFSET UNITYSDK_OFFSET(0x7A1180)
#define AHOCGFMGIBF__CTOR_3_OFFSET UNITYSDK_OFFSET(0x7A11B0)
#define AHOCGFMGIBF__CTOR_OFFSET UNITYSDK_OFFSET(0x7A1110)

inline static constexpr unsigned int AHOCGFMGIBF_TypeDefinitionIndex = 54537;

struct alignas(8) AHOCGFMGIBF
{
	::UnityEngine::UI::Text* KEHECMCDLFC; // 0x10
	::System::String* GPIOJBLKFAJ; // 0x18
	::UnityEngine::Material* EIHICLBDHCB; // 0x20
	::UnityEngine::Color ELBOLGJMGEF; // 0x28
	::System::Byte BDHOCJLJNKB; // 0x38

	::System::Void _ctor(::UnityEngine::UI::Text* HODAIDNDKHD, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*))((::PBYTE)hIl2Cpp + AHOCGFMGIBF__CTOR_OFFSET))(this, HODAIDNDKHD, EGEGIMGMJHN);
	}

	::System::Void _ctor_1(::UnityEngine::UI::Text* HODAIDNDKHD, ::UnityEngine::Material* AEIHFBNNLBP, ::UnityEngine::Color JBBFCGAMDHI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::UnityEngine::Material*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + AHOCGFMGIBF__CTOR_1_OFFSET))(this, HODAIDNDKHD, AEIHFBNNLBP, JBBFCGAMDHI);
	}

	::System::Void _ctor_2(::UnityEngine::UI::Text* HODAIDNDKHD, ::System::String* EGEGIMGMJHN, ::UnityEngine::Material* AEIHFBNNLBP, ::UnityEngine::Color JBBFCGAMDHI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::UnityEngine::Material*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + AHOCGFMGIBF__CTOR_2_OFFSET))(this, HODAIDNDKHD, EGEGIMGMJHN, AEIHFBNNLBP, JBBFCGAMDHI);
	}

	::System::Void _ctor_3(::UnityEngine::UI::Text* HODAIDNDKHD, ::System::String* EGEGIMGMJHN, ::UnityEngine::Material* AEIHFBNNLBP, ::UnityEngine::Color JBBFCGAMDHI, ::System::Byte MJCBFMPPDBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::UnityEngine::Material*, ::UnityEngine::Color, ::System::Byte))((::PBYTE)hIl2Cpp + AHOCGFMGIBF__CTOR_3_OFFSET))(this, HODAIDNDKHD, EGEGIMGMJHN, AEIHFBNNLBP, JBBFCGAMDHI, MJCBFMPPDBC);
	}
};
