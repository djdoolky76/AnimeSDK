#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NJGKOJBIJHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96D370)

	class NJGKOJBIJHE : public ::System::Object
	{
	public:
		::System::Boolean CKECINOEDKI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGKOJBIJHE_CTOR_OFFSET))(this);
		}

	};
