#pragma once
#include "unitysdk/unitysdk.h"
class FDFGOEGFHMC;
class HIKAAGHELPH;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define SOFA_RUNTIME_TABHEADERIMAGECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE97F390)
#define SOFA_RUNTIME_TABHEADERIMAGECONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE97F020)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderImageControl_TypeDefinitionIndex = 49730;

	class TabHeaderImageControl
	{
	public:
		::UnityEngine::UI::Image* _IconImage; // 0x70
		::UnityEngine::Transform* _RedDotRoot; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGECONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGECONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}
