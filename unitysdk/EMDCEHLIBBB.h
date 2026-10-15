#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EMDCEHLIBBB_CTOR_OFFSET UNITYSDK_OFFSET(0x155309B0)

	class EMDCEHLIBBB : public ::System::Object
	{
	public:
		::System::Single KBONICBINHB; // 0x10
		::System::Int32 HIBKMEDOBKG; // 0x14
		::System::Int32 IDFIOEBNPJF; // 0x18
		::System::Int32 MNDJCEFFCIC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDCEHLIBBB_CTOR_OFFSET))(this);
		}

	};
