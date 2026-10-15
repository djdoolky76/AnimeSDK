#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KAIKBCBEEAL_CTOR_OFFSET UNITYSDK_OFFSET(0xB2DA610)

	class KAIKBCBEEAL : public ::System::Object
	{
	public:
		::System::Single FIJLEDEKBJP; // 0x10
		::System::Single CCAOGMEFNLB; // 0x14
		::System::Int32 GMDBHJKEAEI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIKBCBEEAL_CTOR_OFFSET))(this);
		}

	};
