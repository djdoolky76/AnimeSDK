#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MBLCCFAFPFD_MPPAFMHFEEA_CTOR_OFFSET UNITYSDK_OFFSET(0xB860750)

	class MBLCCFAFPFD_MPPAFMHFEEA : public ::System::Object
	{
	public:
		::System::Single MNDFOPKBHKP; // 0x10
		::System::Single OKFCCDJGKCK; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLCCFAFPFD_MPPAFMHFEEA_CTOR_OFFSET))(this);
		}

	};
