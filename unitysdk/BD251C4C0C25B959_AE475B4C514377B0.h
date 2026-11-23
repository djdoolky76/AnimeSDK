#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define BD251C4C0C25B959_AE475B4C514377B0_AB2C32597CDAC8BF_OFFSET UNITYSDK_OFFSET(0x184B140)
#define BD251C4C0C25B959_AE475B4C514377B0_AFF6FCDB9A1621C3_OFFSET UNITYSDK_OFFSET(0x184B510)
#define BD251C4C0C25B959_AE475B4C514377B0_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x184B200)
#define BD251C4C0C25B959_AE475B4C514377B0__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int BD251C4C0C25B959_AE475B4C514377B0_TypeDefinitionIndex = 1189;

class BD251C4C0C25B959_AE475B4C514377B0 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoUIAutoView* AE442F7D881522D8; // 0x80
	::UnityEngine::UI::SmoothMask* BB53382B1D4DD011; // 0x88
	::UnityEngine::UI::Image* A755F7FBEEB96C4B; // 0x90
	::UnityEngine::UI::Image* E12CD075454645BD; // 0x98
	::UnityEngine::UI::Image* F252D4013AA55C38; // 0xA0
	::UnityEngine::Animation* EBECCB6DC301ED9B; // 0xA8
	::UnityEngine::ParticleSystem* B2E216EACFF359CB; // 0xB0
	::UnityEngine::ParticleSystem* F1157E0544F2A8EA; // 0xB8
	::UnityEngine::ParticleSystem* EAEB6B21A114D2D0; // 0xC0

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD251C4C0C25B959_AE475B4C514377B0_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void AFF6FCDB9A1621C3(::System::Single F6157DFAECEE18E3, ::System::Single BB0ABF75B838DC6B, ::System::Single E66AB9B5E31EDF4A, ::System::Int32 F663A8C32F901144)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BD251C4C0C25B959_AE475B4C514377B0_AFF6FCDB9A1621C3_OFFSET))(this, F6157DFAECEE18E3, BB0ABF75B838DC6B, E66AB9B5E31EDF4A, F663A8C32F901144);
	}

	::System::Void AB2C32597CDAC8BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD251C4C0C25B959_AE475B4C514377B0_AB2C32597CDAC8BF_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD251C4C0C25B959_AE475B4C514377B0__CTOR_OFFSET))(this);
	}
};
