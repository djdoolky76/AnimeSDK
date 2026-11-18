#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define NCAELPKNFGN__CTOR_OFFSET UNITYSDK_OFFSET(0x113BC250)

inline static constexpr unsigned int NCAELPKNFGN_TypeDefinitionIndex = 43663;

class NCAELPKNFGN : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCAELPKNFGN__CTOR_OFFSET))(this);
	}
};
