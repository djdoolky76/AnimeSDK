#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KKPIINMGOMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C908440)

	class KKPIINMGOMA : public ::System::Object
	{
	public:
		::System::UInt32 FHJLPBHHPJE; // 0x10
		::System::Boolean MHAFEDMAJOH; // 0x14
		::System::Boolean LAMDNHEMNJJ; // 0x15
		::System::Boolean HCOFMFKFMDK; // 0x16
		::System::Boolean BGNDOAIPLMI; // 0x17
		::System::Boolean AGMAHCODGNP; // 0x18
		::System::Boolean DKAFAJBFFBI; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 KIHAKFOFPPA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPIINMGOMA_CTOR_OFFSET))(this);
		}

	};
