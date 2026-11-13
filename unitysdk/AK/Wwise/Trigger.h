#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AK/Wwise/BaseType.h"
#include "unitysdk/WwiseObjectType.h"
class WwiseObjectReference;
class WwiseTriggerReference;
namespace UnityEngine { class GameObject; }

#define AK_WWISE_TRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF00C0)
#define AK_WWISE_TRIGGER_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1EEEFF70)
#define AK_WWISE_TRIGGER_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1EEEFFF0)
#define AK_WWISE_TRIGGER_POST_OFFSET UNITYSDK_OFFSET(0x1EEF0000)
#define AK_WWISE_TRIGGER_SET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1EEEFF80)

namespace AK::Wwise
{
	inline static constexpr unsigned int Trigger_TypeDefinitionIndex = 46060;

	class Trigger : public ::AK::Wwise::BaseType
	{
	public:
		::WwiseTriggerReference* WwiseObjectReference; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_TRIGGER_CTOR_OFFSET))(this);
		}

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_TRIGGER_GET_OBJECTREFERENCE_OFFSET))(this);
		}

		::System::Void set_ObjectReference(::WwiseObjectReference* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + AK_WWISE_TRIGGER_SET_OBJECTREFERENCE_OFFSET))(this, a1);
		}

		::WwiseObjectType get_WwiseObjectType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_TRIGGER_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::System::Void Post(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AK_WWISE_TRIGGER_POST_OFFSET))(this, a1);
		}

	};
}
