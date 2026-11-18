#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPRECOVERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C67F140)

inline static constexpr unsigned int SpRecoverData_TypeDefinitionIndex = 57998;

class SpRecoverData : public ::System::Object
{
public:
	::System::Single DeltaValue; // 0x10
	::System::Single RatioValue; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPRECOVERDATA__CTOR_OFFSET))(this);
	}
};
