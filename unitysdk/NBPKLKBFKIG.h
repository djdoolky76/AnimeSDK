#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NBPKLKBFKIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C943960)

	class NBPKLKBFKIG : public ::System::Object
	{
	public:
		::System::Single MNDFOPKBHKP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPKLKBFKIG_CTOR_OFFSET))(this);
		}

	};
