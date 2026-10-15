#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NBEAPDPABLI_CTOR_OFFSET UNITYSDK_OFFSET(0xBABE910)

	class NBEAPDPABLI : public ::System::Object
	{
	public:
		::System::UInt32 HLKCKMIGJFJ; // 0x10
		::System::Byte _padding0[0x4];
		::System::Double NNGIBDOJELK; // 0x18
		::System::Double DGDNJNKCJGB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEAPDPABLI_CTOR_OFFSET))(this);
		}

	};
