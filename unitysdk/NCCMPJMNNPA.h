#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NCCMPJMNNPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C943970)

	class NCCMPJMNNPA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCMPJMNNPA_CTOR_OFFSET))(this);
		}

	};
