#pragma once
#include "unitysdk/unitysdk.h"

#define JCDJJEDDIMP_BATTLESTARTEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BD3D0)

inline static constexpr unsigned int JCDJJEDDIMP_BattleStartEvent_TypeDefinitionIndex = 66111;

	class JCDJJEDDIMP_BattleStartEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_BATTLESTARTEVENT_CTOR_OFFSET))(this);
		}

	};
