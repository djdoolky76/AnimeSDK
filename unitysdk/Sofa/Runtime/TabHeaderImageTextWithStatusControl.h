#pragma once
#include "unitysdk/unitysdk.h"
class HIKAAGHELPH;
class PDBILPPIHIG;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define SOFA_RUNTIME_TABHEADERIMAGETEXTWITHSTATUSCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE980120)
#define SOFA_RUNTIME_TABHEADERIMAGETEXTWITHSTATUSCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE97F490)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderImageTextWithStatusControl_TypeDefinitionIndex = 49732;

	class TabHeaderImageTextWithStatusControl
	{
	public:
		::UnityEngine::UI::Image* _IconImage; // 0x70
		::RPG::Client::LocalizedText* _LabelText; // 0x78
		::UnityEngine::Transform* _LockedRoot; // 0x80
		::UnityEngine::Transform* _FinishedRoot; // 0x88
		::UnityEngine::Transform* _HintRoot; // 0x90
		::UnityEngine::Transform* _RedDotRoot; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGETEXTWITHSTATUSCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGETEXTWITHSTATUSCONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}
