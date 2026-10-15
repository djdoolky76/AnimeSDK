#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEBPFBNCALB;
class KKGMHJNMOID;

#define POIONNNNCMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C57E0B0)
#define POIONNNNCMJ_GET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1C57E090)
#define POIONNNNCMJ_GET_TRACKER_OFFSET UNITYSDK_OFFSET(0x1C57E0A0)

	class POIONNNNCMJ : public ::System::Object
	{
	public:
		::KKGMHJNMOID* _Constraint_k__BackingField; // 0x10
		::JEBPFBNCALB* _Tracker_k__BackingField; // 0x18
		::System::Void _ctor(::KKGMHJNMOID* a1, ::JEBPFBNCALB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KKGMHJNMOID*, ::JEBPFBNCALB*))((::PBYTE)hIl2Cpp + POIONNNNCMJ_CTOR_OFFSET))(this, a1, a2);
		}

		::KKGMHJNMOID* get_Constraint()
		{
			return ((::KKGMHJNMOID*(*)(::PVOID))((::PBYTE)hIl2Cpp + POIONNNNCMJ_GET_CONSTRAINT_OFFSET))(this);
		}

		::JEBPFBNCALB* get_Tracker()
		{
			return ((::JEBPFBNCALB*(*)(::PVOID))((::PBYTE)hIl2Cpp + POIONNNNCMJ_GET_TRACKER_OFFSET))(this);
		}

	};
