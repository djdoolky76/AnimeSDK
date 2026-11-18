#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define JOMDMOLJLOC_JFFACOPFAAB_JGBPLEODKEK_OFFSET UNITYSDK_OFFSET(0x13CD3FE0)
#define JOMDMOLJLOC_JFFACOPFAAB__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD3FD0)

inline static constexpr unsigned int JOMDMOLJLOC_JFFACOPFAAB_TypeDefinitionIndex = 77100;

class JOMDMOLJLOC_JFFACOPFAAB : public ::System::Object
{
public:
	::UnityEngine::Transform* GKBJOPJKCLB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_JFFACOPFAAB__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 JGBPLEODKEK()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_JFFACOPFAAB_JGBPLEODKEK_OFFSET))(this);
	}
};
