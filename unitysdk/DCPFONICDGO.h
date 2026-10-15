#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DCPFONICDGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA1B660)

	class DCPFONICDGO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCPFONICDGO_CTOR_OFFSET))(this);
		}

	};
