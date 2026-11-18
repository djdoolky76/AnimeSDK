#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"

namespace MoleMole::Timeline { class VolumeKFrame; }
namespace System { class String; }
namespace UnityEngine::Timeline { class PropertyCurve; }

#define GLFAINLADBP_BIMKJIJLDCH_OFFSET UNITYSDK_OFFSET(0x13D5F450)
#define GLFAINLADBP__CTOR_OFFSET UNITYSDK_OFFSET(0x13D5F440)

inline static constexpr unsigned int GLFAINLADBP_TypeDefinitionIndex = 53905;

class GLFAINLADBP : public ::System::Object
{
public:
	::UnityEngine::Timeline::PropertyCurve* FAJHPKBELMF; // 0x10
	::UnityEngine::Timeline::KFrameFieldType AALKIBOPDOC; // 0x18

	::System::Void _ctor(::UnityEngine::Timeline::PropertyCurve* FAJHPKBELMF, ::MoleMole::Timeline::VolumeKFrame* MPJIHLFOGIK, ::UnityEngine::Timeline::KFrameFieldType GLPLOOEONEA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::PropertyCurve*, ::MoleMole::Timeline::VolumeKFrame*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + GLFAINLADBP__CTOR_OFFSET))(this, FAJHPKBELMF, MPJIHLFOGIK, GLPLOOEONEA);
	}

	::System::String* BIMKJIJLDCH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFAINLADBP_BIMKJIJLDCH_OFFSET))(this);
	}
};
