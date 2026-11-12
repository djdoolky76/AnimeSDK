#pragma once
#include "unitysdk/unitysdk.h"

#define JCDJJEDDIMP_ADVENTURERETURNAUTOSHOWEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BD0E0)

inline static constexpr unsigned int JCDJJEDDIMP_AdventureReturnAutoShowEvent_TypeDefinitionIndex = 66116;

	class JCDJJEDDIMP_AdventureReturnAutoShowEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_ADVENTURERETURNAUTOSHOWEVENT_CTOR_OFFSET))(this);
		}

	};
