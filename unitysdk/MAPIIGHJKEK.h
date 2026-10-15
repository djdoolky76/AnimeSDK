#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MAPIIGHJKEK_CTOR_OFFSET UNITYSDK_OFFSET(0xB856CC0)

	class MAPIIGHJKEK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAPIIGHJKEK_CTOR_OFFSET))(this);
		}

	};
