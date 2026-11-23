#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A2F3E384E505AFEB.h"
#include "unitysdk/AK/Wwise/BaseType.h"

class WwiseObjectReference;
class WwiseTriggerReference;
namespace UnityEngine { class GameObject; }

#define AK_WWISE_TRIGGER_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define AK_WWISE_TRIGGER_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x2913790)
#define AK_WWISE_TRIGGER_POST_OFFSET UNITYSDK_OFFSET(0x29136D0)
#define AK_WWISE_TRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace AK::Wwise
{
	inline static constexpr unsigned int Trigger_TypeDefinitionIndex = 21576;

	class Trigger : public ::AK::Wwise::BaseType
	{
	public:
		::WwiseTriggerReference* WwiseObjectReference; // 0x20

		::A2F3E384E505AFEB get_WwiseObjectType()
		{
			return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_TRIGGER_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_TRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void Post(::UnityEngine::GameObject* BC63F4052E4478D7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AK_WWISE_TRIGGER_POST_OFFSET))(this, BC63F4052E4478D7);
		}

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_TRIGGER_GET_OBJECTREFERENCE_OFFSET))(this);
		}
	};
}
