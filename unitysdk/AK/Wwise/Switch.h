#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A2F3E384E505AFEB.h"
#include "unitysdk/AK/Wwise/BaseGroupType.h"

class WwiseObjectReference;
class WwiseSwitchReference;
namespace UnityEngine { class GameObject; }

#define AK_WWISE_SWITCH_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define AK_WWISE_SWITCH_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x29136C0)
#define AK_WWISE_SWITCH_SETVALUE_OFFSET UNITYSDK_OFFSET(0x29135F0)
#define AK_WWISE_SWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace AK::Wwise
{
	inline static constexpr unsigned int Switch_TypeDefinitionIndex = 21581;

	class Switch : public ::AK::Wwise::BaseGroupType
	{
	public:
		::WwiseSwitchReference* WwiseObjectReference; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_SWITCH__CTOR_OFFSET))(this);
		}

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_SWITCH_GET_OBJECTREFERENCE_OFFSET))(this);
		}

		::System::Void SetValue(::UnityEngine::GameObject* BC63F4052E4478D7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AK_WWISE_SWITCH_SETVALUE_OFFSET))(this, BC63F4052E4478D7);
		}

		::A2F3E384E505AFEB get_WwiseObjectType()
		{
			return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_SWITCH_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}
	};
}
