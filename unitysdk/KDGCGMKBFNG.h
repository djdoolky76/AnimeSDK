#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"

#define KDGCGMKBFNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB1630)

	class KDGCGMKBFNG : public ::System::Object
	{
	public:
		::System::ValueTuple PPAKDOKNNGD; // 0x10
		::System::ValueTuple EJMABLPGKFF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGCGMKBFNG_CTOR_OFFSET))(this);
		}

	};
