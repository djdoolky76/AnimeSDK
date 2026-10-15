#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WwiseObjectReference.h"
#include "unitysdk/WwiseObjectType.h"

#define WWISEEVENTREFERENCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F609280)
#define WWISEEVENTREFERENCE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1F609270)

inline static constexpr unsigned int WwiseEventReference_TypeDefinitionIndex = 44884;

	class WwiseEventReference : public ::WwiseObjectReference
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEEVENTREFERENCE_CTOR_OFFSET))(this);
		}

		::WwiseObjectType get_WwiseObjectType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEEVENTREFERENCE_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

	};
