#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLIMHAFFHCE_CTOR_OFFSET UNITYSDK_OFFSET(0x158358A0)
#define FLIMHAFFHCE_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x158357D0)

	class FLIMHAFFHCE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIMHAFFHCE_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIMHAFFHCE_JJNFOPNOPBF_OFFSET))(this);
		}

	};
