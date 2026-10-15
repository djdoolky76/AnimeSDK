#pragma once
#include "unitysdk/unitysdk.h"
class HIKAAGHELPH;
class JCCLCIJBBJD;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define SOFA_RUNTIME_TABHEADERIMAGEWITHSTATUSCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE976850)
#define SOFA_RUNTIME_TABHEADERIMAGEWITHSTATUSCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE975E00)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderImageWithStatusControl_TypeDefinitionIndex = 49734;

	class TabHeaderImageWithStatusControl
	{
	public:
		::UnityEngine::UI::Image* _IconImage; // 0x70
		::UnityEngine::Transform* _LockedRoot; // 0x78
		::UnityEngine::Transform* _FinishedRoot; // 0x80
		::UnityEngine::Transform* _HintRoot; // 0x88
		::UnityEngine::Transform* _RedDotRoot; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGEWITHSTATUSCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGEWITHSTATUSCONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}
