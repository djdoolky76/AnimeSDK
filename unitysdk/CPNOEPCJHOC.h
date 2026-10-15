#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CPNOEPCJHOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E2CD0)

	class CPNOEPCJHOC : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNOEPCJHOC_CTOR_OFFSET))(this);
		}

	};
