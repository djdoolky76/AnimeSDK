#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class DONGCBIGJJL;
class MonoUITableScrollV2;

#define DONGCBIGJJL_GCDFPNMNOGO_MGAHHFEFJML_OFFSET UNITYSDK_OFFSET(0x12BD75B0)
#define DONGCBIGJJL_GCDFPNMNOGO__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD75A0)

inline static constexpr unsigned int DONGCBIGJJL_GCDFPNMNOGO_TypeDefinitionIndex = 70500;

class DONGCBIGJJL_GCDFPNMNOGO : public ::System::Object
{
public:
	::MonoUITableScrollV2* FAMGIABLFPH; // 0x10
	::DONGCBIGJJL* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_GCDFPNMNOGO__CTOR_OFFSET))(this);
	}

	::System::Void MGAHHFEFJML(::UnityEngine::Vector2 MKHLBMMKCJL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DONGCBIGJJL_GCDFPNMNOGO_MGAHHFEFJML_OFFSET))(this, MKHLBMMKCJL);
	}
};
