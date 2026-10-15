#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHKIKPOPLPJ.h"

#define IPEMEHDBGOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1651F410)

	class IPEMEHDBGOE : public ::FHKIKPOPLPJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEMEHDBGOE_CTOR_OFFSET))(this);
		}

	};
