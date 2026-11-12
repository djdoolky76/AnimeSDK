#pragma once
#include "unitysdk/unitysdk.h"

#define JCDJJEDDIMP_SETTLERESULTEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xB8C13E0)
#define JCDJJEDDIMP_SETTLERESULTEVENT_GET_ISMANUALQUIT_OFFSET UNITYSDK_OFFSET(0xB8C12C0)

inline static constexpr unsigned int JCDJJEDDIMP_SettleResultEvent_TypeDefinitionIndex = 66118;

	class JCDJJEDDIMP_SettleResultEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_SETTLERESULTEVENT_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsManualQuit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_SETTLERESULTEVENT_GET_ISMANUALQUIT_OFFSET))(this);
		}

	};
