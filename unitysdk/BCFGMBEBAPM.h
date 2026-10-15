#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BCFGMBEBAPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0D600)

	class BCFGMBEBAPM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFGMBEBAPM_CTOR_OFFSET))(this);
		}

	};
