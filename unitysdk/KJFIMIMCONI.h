#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define KJFIMIMCONI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6C590)

	class KJFIMIMCONI : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFIMIMCONI_CTOR_OFFSET))(this);
		}

	};
