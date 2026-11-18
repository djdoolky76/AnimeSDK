#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/DualQuaternion.h"

namespace UnityEngine { class Transform; }

#define JOMDMOLJLOC_OEOCAGBNMED_KLPHOKLLEHG_OFFSET UNITYSDK_OFFSET(0x155D2770)
#define JOMDMOLJLOC_OEOCAGBNMED__CTOR_OFFSET UNITYSDK_OFFSET(0x155D2760)

inline static constexpr unsigned int JOMDMOLJLOC_OEOCAGBNMED_TypeDefinitionIndex = 77101;

class JOMDMOLJLOC_OEOCAGBNMED : public ::System::Object
{
public:
	::UnityEngine::Transform* GKBJOPJKCLB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_OEOCAGBNMED__CTOR_OFFSET))(this);
	}

	::Foundation::DualQuaternion KLPHOKLLEHG()
	{
		return ((::Foundation::DualQuaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_OEOCAGBNMED_KLPHOKLLEHG_OFFSET))(this);
	}
};
