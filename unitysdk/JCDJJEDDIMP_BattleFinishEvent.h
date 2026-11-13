#pragma once
#include "unitysdk/unitysdk.h"

#define JCDJJEDDIMP_BATTLEFINISHEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x19A86980)

inline static constexpr unsigned int JCDJJEDDIMP_BattleFinishEvent_TypeDefinitionIndex = 66112;

	class JCDJJEDDIMP_BattleFinishEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_BATTLEFINISHEVENT_CTOR_OFFSET))(this);
		}

	};
