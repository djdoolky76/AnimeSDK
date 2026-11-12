#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WwiseObjectReference.h"
#include "unitysdk/WwiseObjectType.h"

#define WWISESWITCHGROUPREFERENCE_CTOR_OFFSET UNITYSDK_OFFSET(0x208E6B90)
#define WWISESWITCHGROUPREFERENCE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x208E6B80)

inline static constexpr unsigned int WwiseSwitchGroupReference_TypeDefinitionIndex = 45966;

	class WwiseSwitchGroupReference : public ::WwiseObjectReference
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESWITCHGROUPREFERENCE_CTOR_OFFSET))(this);
		}

		::WwiseObjectType get_WwiseObjectType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESWITCHGROUPREFERENCE_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

	};
