#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBPMACLHLOP;

#define PMHPPMJAECI_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9F6BE0)
#define PMHPPMJAECI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F6C40)

	class PMHPPMJAECI : public ::System::Object
	{
	public:
		::EBPMACLHLOP* IECLHGKEMFL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHPPMJAECI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHPPMJAECI_CLEAR_OFFSET))(this);
		}

	};
