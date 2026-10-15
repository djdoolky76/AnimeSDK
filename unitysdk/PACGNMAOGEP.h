#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PACGNMAOGEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E6070)

	class PACGNMAOGEP : public ::System::Object
	{
	public:
		::System::UInt32 NKGDAAOPLJK; // 0x10
		::System::UInt32 GMPGDEINODK; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACGNMAOGEP_CTOR_OFFSET))(this);
		}

	};
