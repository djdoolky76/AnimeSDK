#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BAMPJJAPJJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B0970)

	class BAMPJJAPJJG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMPJJAPJJG_CTOR_OFFSET))(this);
		}

	};
