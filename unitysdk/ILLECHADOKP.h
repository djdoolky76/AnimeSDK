#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"

#define ILLECHADOKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB784D0)

	class ILLECHADOKP : public ::System::Object
	{
	public:
		::System::ValueTuple IEGAMDMMOMN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLECHADOKP_CTOR_OFFSET))(this);
		}

	};
