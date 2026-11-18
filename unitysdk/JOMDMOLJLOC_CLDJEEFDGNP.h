#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/DualQuaternion.h"

namespace UnityEngine { class Transform; }

#define JOMDMOLJLOC_CLDJEEFDGNP_NJHOCGDOKFO_OFFSET UNITYSDK_OFFSET(0x157D4AA0)
#define JOMDMOLJLOC_CLDJEEFDGNP__CTOR_OFFSET UNITYSDK_OFFSET(0x157D4A90)

inline static constexpr unsigned int JOMDMOLJLOC_CLDJEEFDGNP_TypeDefinitionIndex = 77105;

class JOMDMOLJLOC_CLDJEEFDGNP : public ::System::Object
{
public:
	::UnityEngine::Transform* CBOMBHILAEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_CLDJEEFDGNP__CTOR_OFFSET))(this);
	}

	::Foundation::DualQuaternion NJHOCGDOKFO()
	{
		return ((::Foundation::DualQuaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_CLDJEEFDGNP_NJHOCGDOKFO_OFFSET))(this);
	}
};
