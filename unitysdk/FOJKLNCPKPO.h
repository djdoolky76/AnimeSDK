#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define FOJKLNCPKPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE13A90)

	class FOJKLNCPKPO : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJKLNCPKPO_CTOR_OFFSET))(this);
		}

	};
