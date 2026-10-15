#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGGLOEAKFEI;
class FCOEMCEDLNL;

#define CGGLOEAKFEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC0C460)
#define CGGLOEAKFEI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC0C320)

	class CGGLOEAKFEI : public ::System::Object
	{
	public:
		::System::UInt32 AAGKEBFHLMC; // 0x10
		::System::UInt32 AGDJPAPAFEO; // 0x14
		::System::UInt32 MPHAIOHJKCD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGLOEAKFEI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CGGLOEAKFEI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CGGLOEAKFEI*))((::PBYTE)hIl2Cpp + CGGLOEAKFEI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
