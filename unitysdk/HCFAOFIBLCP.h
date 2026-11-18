#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOCCCDLFOPJ.h"

namespace UnityEngine { class Transform; }

#define HCFAOFIBLCP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14077420)
#define HCFAOFIBLCP_HHINJPDJNIA_OFFSET UNITYSDK_OFFSET(0x14077460)
#define HCFAOFIBLCP__CTOR_OFFSET UNITYSDK_OFFSET(0x14077470)

inline static constexpr unsigned int HCFAOFIBLCP_TypeDefinitionIndex = 42398;

class HCFAOFIBLCP : public ::JOCCCDLFOPJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFAOFIBLCP__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFAOFIBLCP_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Transform* HHINJPDJNIA()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFAOFIBLCP_HHINJPDJNIA_OFFSET))(this);
	}
};
