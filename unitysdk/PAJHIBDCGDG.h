#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PAJHIBDCGDG_CTOR_OFFSET UNITYSDK_OFFSET(0xBFCB3F0)

	class PAJHIBDCGDG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJHIBDCGDG_CTOR_OFFSET))(this);
		}

	};
