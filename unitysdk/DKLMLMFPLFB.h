#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define DKLMLMFPLFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F5A30)

	class DKLMLMFPLFB : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLMLMFPLFB_CTOR_OFFSET))(this);
		}

	};
