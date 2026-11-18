#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

#define GPHHEFLEJAL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15D90550)
#define GPHHEFLEJAL__CTOR_OFFSET UNITYSDK_OFFSET(0x15D90590)

inline static constexpr unsigned int GPHHEFLEJAL_TypeDefinitionIndex = 57706;

class GPHHEFLEJAL : public ::JJEJBPGJPJN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHHEFLEJAL__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHHEFLEJAL_ONCREATEPROPERTY_OFFSET))(this);
	}
};
