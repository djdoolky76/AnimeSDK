#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DILHPBMCOFK.h"
#include "unitysdk/System/Object.h"
class FKIAHEEJGKH;

#define JPGJGHMCCJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7099A0)

	class JPGJGHMCCJP : public ::System::Object
	{
	public:
		::FKIAHEEJGKH* JEBKPBHELJP; // 0x10
		::System::Boolean DNBDKJIKCMO; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 DAIIECALKJK; // 0x1C
		::DILHPBMCOFK IPDDIKPHGPE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGJGHMCCJP_CTOR_OFFSET))(this);
		}

	};
