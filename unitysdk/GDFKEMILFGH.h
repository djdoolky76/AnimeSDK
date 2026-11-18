#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GDFKEMILFGH_JKAHFBMLIJK_OFFSET UNITYSDK_OFFSET(0x1EA7EAB0)
#define GDFKEMILFGH_PCNMNNNFDIK_OFFSET UNITYSDK_OFFSET(0x1EA7EAC0)
#define GDFKEMILFGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7EB70)

inline static constexpr unsigned int GDFKEMILFGH_TypeDefinitionIndex = 8256;

class GDFKEMILFGH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFKEMILFGH__CTOR_OFFSET))(this);
	}

	::System::Boolean JKAHFBMLIJK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFKEMILFGH_JKAHFBMLIJK_OFFSET))(this);
	}

	::UnityEngine::Vector3 PCNMNNNFDIK()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFKEMILFGH_PCNMNNNFDIK_OFFSET))(this);
	}
};
