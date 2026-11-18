#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Gradient; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define OONBHFCCFPN_AHDHFEMFPIE_JPMGFIOBELD_OFFSET UNITYSDK_OFFSET(0x15FF6830)
#define OONBHFCCFPN_AHDHFEMFPIE_KPEDEBOFILO_OFFSET UNITYSDK_OFFSET(0x15FF6810)
#define OONBHFCCFPN_AHDHFEMFPIE__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF6800)

inline static constexpr unsigned int OONBHFCCFPN_AHDHFEMFPIE_TypeDefinitionIndex = 57506;

class OONBHFCCFPN_AHDHFEMFPIE : public ::System::Object
{
public:
	::UnityEngine::Gradient* LMLPPLMKLFL; // 0x10
	::System::Boolean FBILHHBPEHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_AHDHFEMFPIE__CTOR_OFFSET))(this);
	}

	::System::Void KPEDEBOFILO(::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* GMFGAEKFDCC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*))((::PBYTE)hIl2Cpp + OONBHFCCFPN_AHDHFEMFPIE_KPEDEBOFILO_OFFSET))(this, GMFGAEKFDCC);
	}

	::System::Void JPMGFIOBELD(::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* GMFGAEKFDCC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*))((::PBYTE)hIl2Cpp + OONBHFCCFPN_AHDHFEMFPIE_JPMGFIOBELD_OFFSET))(this, GMFGAEKFDCC);
	}
};
