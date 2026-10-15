#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define HPIJDELNNNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C688F40)

	class HPIJDELNNNE : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIJDELNNNE_CTOR_OFFSET))(this);
		}

	};
