#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define FKBAHIEGCII_ENNMGGJKANF_OLNOMOALHOF_OFFSET UNITYSDK_OFFSET(0x15E68CE0)
#define FKBAHIEGCII_ENNMGGJKANF__CTOR_OFFSET UNITYSDK_OFFSET(0x15E68CD0)

inline static constexpr unsigned int FKBAHIEGCII_ENNMGGJKANF_TypeDefinitionIndex = 55181;

class FKBAHIEGCII_ENNMGGJKANF : public ::System::Object
{
public:
	::UnityEngine::Transform* HODAIDNDKHD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBAHIEGCII_ENNMGGJKANF__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* OLNOMOALHOF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBAHIEGCII_ENNMGGJKANF_OLNOMOALHOF_OFFSET))(this);
	}
};
