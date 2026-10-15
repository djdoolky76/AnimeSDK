#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BJNAPLKBEEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BC1E0)

	class BJNAPLKBEEA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNAPLKBEEA_CTOR_OFFSET))(this);
		}

	};
