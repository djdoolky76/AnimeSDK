#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NBBAJMIICFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C934D90)

	class NBBAJMIICFE : public ::System::Object
	{
	public:
		::System::UInt32 CIHDMACAGPN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBAJMIICFE_CTOR_OFFSET))(this);
		}

	};
