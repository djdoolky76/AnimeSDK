#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEGCAPDENJJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AEJLJONCNNJ_JGFOIPALFEG;

#define AEJLJONCNNJ_OLFNHHCAEKP_CJIGNAKCNHC_OFFSET UNITYSDK_OFFSET(0x154E8DB0)
#define AEJLJONCNNJ_OLFNHHCAEKP__CTOR_OFFSET UNITYSDK_OFFSET(0x154E8DA0)

inline static constexpr unsigned int AEJLJONCNNJ_OLFNHHCAEKP_TypeDefinitionIndex = 76682;

class AEJLJONCNNJ_OLFNHHCAEKP : public ::System::Object
{
public:
	::AEJLJONCNNJ_JGFOIPALFEG* FGBNBFHOKAA; // 0x10
	::DEGCAPDENJJ DENJNGAAIME; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_OLFNHHCAEKP__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 CJIGNAKCNHC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_OLFNHHCAEKP_CJIGNAKCNHC_OFFSET))(this);
	}
};
