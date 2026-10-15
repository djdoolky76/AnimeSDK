#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class IExposedPropertyTable; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_TIMELINEEXPOSEDREFERENCE_KHJNHDOJDDP_OFFSET UNITYSDK_OFFSET(0xF9370)
#define RPGTOOLS_TIMELINE_TIMELINEEXPOSEDREFERENCE_OABECOGKJPM_OFFSET UNITYSDK_OFFSET(0xF9380)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TimelineExposedReference_TypeDefinitionIndex = 48518;

	struct alignas(8) TimelineExposedReference
	{
		::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*> reference; // 0x10
		::System::Byte _padding0[0x8];
		::System::String* nodePath; // 0x20
		::System::String* attachPointName; // 0x28
		::UnityEngine::GameObject* KHJNHDOJDDP(::UnityEngine::IExposedPropertyTable* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::IExposedPropertyTable*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEXPOSEDREFERENCE_KHJNHDOJDDP_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* OABECOGKJPM(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEXPOSEDREFERENCE_OABECOGKJPM_OFFSET))(this, a1, a2);
		}

	};
}
