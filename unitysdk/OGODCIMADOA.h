#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define OGODCIMADOA__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE0CD0)

inline static constexpr unsigned int OGODCIMADOA_TypeDefinitionIndex = 70980;

class OGODCIMADOA : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGODCIMADOA__CTOR_OFFSET))(this);
	}
};
