#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define LKGOFKEOPPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60FC50)

inline static constexpr unsigned int LKGOFKEOPPL_TypeDefinitionIndex = 88056;

class LKGOFKEOPPL : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGOFKEOPPL__CTOR_OFFSET))(this);
	}
};
