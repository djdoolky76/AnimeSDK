#pragma once
#include "unitysdk/unitysdk.h"
class HAEELHPFFGH;
class HIKAAGHELPH;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }

#define SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE977960)
#define SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE976F10)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderTextWithStatusControl_TypeDefinitionIndex = 49738;

	class TabHeaderTextWithStatusControl
	{
	public:
		::RPG::Client::LocalizedText* _LabelText; // 0x70
		::UnityEngine::Transform* _LockedRoot; // 0x78
		::UnityEngine::Transform* _FinishedRoot; // 0x80
		::UnityEngine::Transform* _HintRoot; // 0x88
		::UnityEngine::Transform* _RedDotRoot; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}
