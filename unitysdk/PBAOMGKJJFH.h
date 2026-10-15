#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDKNIMHHNPA;

#define PBAOMGKJJFH_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE0FE0)
#define PBAOMGKJJFH_GET_NOTIFY_OFFSET UNITYSDK_OFFSET(0xBFE0FD0)

	class PBAOMGKJJFH : public ::System::Object
	{
	public:
		::DDKNIMHHNPA* _Notify_k__BackingField; // 0x10
		::System::Void _ctor(::DDKNIMHHNPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDKNIMHHNPA*))((::PBYTE)hIl2Cpp + PBAOMGKJJFH_CTOR_OFFSET))(this, a1);
		}

		::DDKNIMHHNPA* get_Notify()
		{
			return ((::DDKNIMHHNPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAOMGKJJFH_GET_NOTIFY_OFFSET))(this);
		}

	};
