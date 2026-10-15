#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDKNHKCLPIC;

#define HPDGCJJCBIH_CTOR_OFFSET UNITYSDK_OFFSET(0x15DC22C0)

	class HPDGCJJCBIH : public ::System::Object
	{
	public:
		::BDKNHKCLPIC* KJEIFIDKANK; // 0x10
		::BDKNHKCLPIC* EMNPNGMDDHP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDGCJJCBIH_CTOR_OFFSET))(this);
		}

	};
