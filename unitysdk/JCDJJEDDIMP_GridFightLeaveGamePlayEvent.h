#pragma once
#include "unitysdk/unitysdk.h"

#define JCDJJEDDIMP_GRIDFIGHTLEAVEGAMEPLAYEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BED70)

inline static constexpr unsigned int JCDJJEDDIMP_GridFightLeaveGamePlayEvent_TypeDefinitionIndex = 66119;

	class JCDJJEDDIMP_GridFightLeaveGamePlayEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_GRIDFIGHTLEAVEGAMEPLAYEVENT_CTOR_OFFSET))(this);
		}

	};
