#pragma once
#include "unitysdk/unitysdk.h"

#define JCDJJEDDIMP_STAGEHINTCLOSEDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BF9F0)
#define JCDJJEDDIMP_STAGEHINTCLOSEDEVENT_GET_HASPORTALBUFFSELECTION_OFFSET UNITYSDK_OFFSET(0xB8C1400)

inline static constexpr unsigned int JCDJJEDDIMP_StageHintClosedEvent_TypeDefinitionIndex = 66109;

	class JCDJJEDDIMP_StageHintClosedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_STAGEHINTCLOSEDEVENT_CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasPortalBuffSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_STAGEHINTCLOSEDEVENT_GET_HASPORTALBUFFSELECTION_OFFSET))(this);
		}

	};
