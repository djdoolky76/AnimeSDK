#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A2F3E384E505AFEB.h"
#include "unitysdk/AK/Wwise/BaseType.h"

class WwiseAuxBusReference;
class WwiseObjectReference;

#define AK_WWISE_AUXBUS_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define AK_WWISE_AUXBUS_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x165D460)
#define AK_WWISE_AUXBUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace AK::Wwise
{
	inline static constexpr unsigned int AuxBus_TypeDefinitionIndex = 21569;

	class AuxBus : public ::AK::Wwise::BaseType
	{
	public:
		::WwiseAuxBusReference* WwiseObjectReference; // 0x20

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_AUXBUS_GET_OBJECTREFERENCE_OFFSET))(this);
		}

		::A2F3E384E505AFEB get_WwiseObjectType()
		{
			return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_AUXBUS_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_AUXBUS__CTOR_OFFSET))(this);
		}
	};
}
