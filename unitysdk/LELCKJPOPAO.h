#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LELCKJPOPAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E53E0)

	class LELCKJPOPAO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LELCKJPOPAO_CTOR_OFFSET))(this);
		}

	};
