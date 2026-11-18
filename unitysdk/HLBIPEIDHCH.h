#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNGFDKLCIBE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HLBIPEIDHCH_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x14955630)
#define HLBIPEIDHCH_ONSCENEANIMATIONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x149555E0)
#define HLBIPEIDHCH_ONSCENEANIMATIONPLAY_OFFSET UNITYSDK_OFFSET(0x14955570)
#define HLBIPEIDHCH__CTOR_OFFSET UNITYSDK_OFFSET(0x14955560)

inline static constexpr unsigned int HLBIPEIDHCH_TypeDefinitionIndex = 59107;

class HLBIPEIDHCH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBIPEIDHCH__CTOR_OFFSET))(this);
	}

	::HNGFDKLCIBE OnSceneAnimationPlay(::System::String* EOAOLNDPOEN, ::System::Int32 AMHLPIAIEDC, ::System::Int32 PHNMGNKKILJ, ::System::Boolean EPGLPGPOOJN, ::System::Boolean COEFBDIAGBI)
	{
		return ((::HNGFDKLCIBE(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HLBIPEIDHCH_ONSCENEANIMATIONPLAY_OFFSET))(this, EOAOLNDPOEN, AMHLPIAIEDC, PHNMGNKKILJ, EPGLPGPOOJN, COEFBDIAGBI);
	}

	::HNGFDKLCIBE OnSceneAnimationInterrupt(::System::String* EOAOLNDPOEN)
	{
		return ((::HNGFDKLCIBE(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HLBIPEIDHCH_ONSCENEANIMATIONINTERRUPT_OFFSET))(this, EOAOLNDPOEN);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBIPEIDHCH_BJANDJKKNCD_OFFSET))(this);
	}
};
