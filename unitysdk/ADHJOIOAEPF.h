#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"

namespace MoleMole::Timeline { class IKKFrame; }
namespace System { class String; }
namespace UnityEngine::Timeline { class PropertyCurve; }

#define ADHJOIOAEPF_BIMKJIJLDCH_OFFSET UNITYSDK_OFFSET(0x16D621C0)
#define ADHJOIOAEPF__CTOR_OFFSET UNITYSDK_OFFSET(0x16D621B0)

inline static constexpr unsigned int ADHJOIOAEPF_TypeDefinitionIndex = 53949;

class ADHJOIOAEPF : public ::System::Object
{
public:
	::UnityEngine::Timeline::PropertyCurve* FAJHPKBELMF; // 0x10
	::UnityEngine::Timeline::KFrameFieldType AALKIBOPDOC; // 0x18

	::System::Void _ctor(::UnityEngine::Timeline::PropertyCurve* FAJHPKBELMF, ::MoleMole::Timeline::IKKFrame* LCIGMFNPCAD, ::UnityEngine::Timeline::KFrameFieldType GLPLOOEONEA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::PropertyCurve*, ::MoleMole::Timeline::IKKFrame*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + ADHJOIOAEPF__CTOR_OFFSET))(this, FAJHPKBELMF, LCIGMFNPCAD, GLPLOOEONEA);
	}

	::System::String* BIMKJIJLDCH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHJOIOAEPF_BIMKJIJLDCH_OFFSET))(this);
	}
};
