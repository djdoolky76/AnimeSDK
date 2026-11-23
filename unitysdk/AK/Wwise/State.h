#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A2F3E384E505AFEB.h"
#include "unitysdk/AK/Wwise/BaseGroupType.h"

class WwiseObjectReference;
class WwiseStateReference;

#define AK_WWISE_STATE_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define AK_WWISE_STATE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1FC6CD0)
#define AK_WWISE_STATE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x2913530)
#define AK_WWISE_STATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace AK::Wwise
{
	inline static constexpr unsigned int State_TypeDefinitionIndex = 21579;

	class State : public ::AK::Wwise::BaseGroupType
	{
	public:
		::WwiseStateReference* WwiseObjectReference; // 0x30

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_STATE_GET_OBJECTREFERENCE_OFFSET))(this);
		}

		::System::Void SetValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_STATE_SETVALUE_OFFSET))(this);
		}

		::A2F3E384E505AFEB get_WwiseObjectType()
		{
			return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_STATE_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_STATE__CTOR_OFFSET))(this);
		}
	};
}
