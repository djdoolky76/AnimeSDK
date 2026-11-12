#pragma once
#include "unitysdk/unitysdk.h"

#define JCDJJEDDIMP_ADVENTUREPHASEENTEREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BD0C0)

inline static constexpr unsigned int JCDJJEDDIMP_AdventurePhaseEnterEvent_TypeDefinitionIndex = 66115;

	class JCDJJEDDIMP_AdventurePhaseEnterEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_ADVENTUREPHASEENTEREVENT_CTOR_OFFSET))(this);
		}

	};
