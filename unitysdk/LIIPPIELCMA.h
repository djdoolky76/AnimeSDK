#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class LIIPPIELCMA_Settings;

#define LIIPPIELCMA_JKAHFBMLIJK_OFFSET UNITYSDK_OFFSET(0x1EE99960)
#define LIIPPIELCMA_PCNMNNNFDIK_OFFSET UNITYSDK_OFFSET(0x1EE99980)
#define LIIPPIELCMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE999B0)

inline static constexpr unsigned int LIIPPIELCMA_TypeDefinitionIndex = 8632;

class LIIPPIELCMA : public ::System::Object
{
public:
	::LIIPPIELCMA_Settings* AMGLHPDJKDI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIPPIELCMA__CTOR_OFFSET))(this);
	}

	::System::Boolean JKAHFBMLIJK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIPPIELCMA_JKAHFBMLIJK_OFFSET))(this);
	}

	::UnityEngine::Vector3 PCNMNNNFDIK()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIPPIELCMA_PCNMNNNFDIK_OFFSET))(this);
	}
};
