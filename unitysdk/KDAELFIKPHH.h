#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KDAELFIKPHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB1620)

	class KDAELFIKPHH : public ::System::Object
	{
	public:
		::System::Int32 KJJEEBJNAAA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDAELFIKPHH_CTOR_OFFSET))(this);
		}

	};
