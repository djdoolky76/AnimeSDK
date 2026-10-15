#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LGLEBDPBHHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90EB20)

	class LGLEBDPBHHM : public ::System::Object
	{
	public:
		::System::Single ECKNFNIPAKN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGLEBDPBHHM_CTOR_OFFSET))(this);
		}

	};
