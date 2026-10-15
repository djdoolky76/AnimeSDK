#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PCGGENBDKKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7EB480)

	class PCGGENBDKKK : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGGENBDKKK_CTOR_OFFSET))(this);
		}

	};
