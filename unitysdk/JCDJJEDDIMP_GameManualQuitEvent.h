#pragma once
#include "unitysdk/unitysdk.h"

#define JCDJJEDDIMP_GAMEMANUALQUITEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BED50)

inline static constexpr unsigned int JCDJJEDDIMP_GameManualQuitEvent_TypeDefinitionIndex = 66117;

	class JCDJJEDDIMP_GameManualQuitEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_GAMEMANUALQUITEVENT_CTOR_OFFSET))(this);
		}

	};
