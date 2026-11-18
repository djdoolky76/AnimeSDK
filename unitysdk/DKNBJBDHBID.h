#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define DKNBJBDHBID__CTOR_OFFSET UNITYSDK_OFFSET(0x19416BA0)

inline static constexpr unsigned int DKNBJBDHBID_TypeDefinitionIndex = 72990;

class DKNBJBDHBID : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNBJBDHBID__CTOR_OFFSET))(this);
	}
};
