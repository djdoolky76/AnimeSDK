#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NKAKKMMLOPA_CTOR_OFFSET UNITYSDK_OFFSET(0xBC2DB30)

	class NKAKKMMLOPA : public ::System::Object
	{
	public:
		::System::Single HOHCBNCEJBF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAKKMMLOPA_CTOR_OFFSET))(this);
		}

	};
