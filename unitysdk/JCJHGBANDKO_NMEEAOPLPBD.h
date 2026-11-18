#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define JCJHGBANDKO_NMEEAOPLPBD_OMPKEDDJLMH_OFFSET UNITYSDK_OFFSET(0x1659B930)
#define JCJHGBANDKO_NMEEAOPLPBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1659B920)

inline static constexpr unsigned int JCJHGBANDKO_NMEEAOPLPBD_TypeDefinitionIndex = 85315;

class JCJHGBANDKO_NMEEAOPLPBD : public ::System::Object
{
public:
	::System::Single GEGOALONGBI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJHGBANDKO_NMEEAOPLPBD__CTOR_OFFSET))(this);
	}

	::System::Single OMPKEDDJLMH(::UnityEngine::Vector2 HAAEBCOBKFF)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JCJHGBANDKO_NMEEAOPLPBD_OMPKEDDJLMH_OFFSET))(this, HAAEBCOBKFF);
	}
};
