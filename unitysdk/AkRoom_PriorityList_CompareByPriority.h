#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkRoom;

#define AKROOM_PRIORITYLIST_COMPAREBYPRIORITY_COMPARE_OFFSET UNITYSDK_OFFSET(0x2086A3B0)
#define AKROOM_PRIORITYLIST_COMPAREBYPRIORITY_CTOR_OFFSET UNITYSDK_OFFSET(0x2086A3A0)

inline static constexpr unsigned int AkRoom_PriorityList_CompareByPriority_TypeDefinitionIndex = 46020;

	class AkRoom_PriorityList_CompareByPriority : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_PRIORITYLIST_COMPAREBYPRIORITY_CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::AkRoom* a1, ::AkRoom* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::AkRoom*, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOM_PRIORITYLIST_COMPAREBYPRIORITY_COMPARE_OFFSET))(this, a1, a2);
		}

	};
