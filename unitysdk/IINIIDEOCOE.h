#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IINIIDEOCOE_CTOR_OFFSET UNITYSDK_OFFSET(0x164539B0)

	class IINIIDEOCOE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IINIIDEOCOE_CTOR_OFFSET))(this);
		}

	};
