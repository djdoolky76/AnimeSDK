#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KDBJHIOOOLB_CTOR_OFFSET UNITYSDK_OFFSET(0xB347A50)

	class KDBJHIOOOLB : public ::System::Object
	{
	public:
		::System::Int32 FNHLJAHDEFB; // 0x10
		::System::Single FECIPBPNCME; // 0x14
		::System::Int32 DHMPEOAJCCK; // 0x18
		::System::Int32 EPKJNNKPIPI; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJHIOOOLB_CTOR_OFFSET))(this);
		}

	};
