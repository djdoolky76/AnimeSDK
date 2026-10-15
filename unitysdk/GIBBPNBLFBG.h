#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define GIBBPNBLFBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE4D220)

	class GIBBPNBLFBG : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIBBPNBLFBG_CTOR_OFFSET))(this);
		}

	};
