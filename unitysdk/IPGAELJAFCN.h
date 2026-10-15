#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define IPGAELJAFCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1651F930)

	class IPGAELJAFCN : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGAELJAFCN_CTOR_OFFSET))(this);
		}

	};
