#pragma once
#include "unitysdk/unitysdk.h"

#define ONEGFALEBAN_CTOR_OFFSET UNITYSDK_OFFSET(0xBF50810)
#define ONEGFALEBAN_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0xBF506B0)

	class ONEGFALEBAN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEGFALEBAN_CTOR_OFFSET))(this);
		}

		::System::Void InitInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEGFALEBAN_INITINTERNAL_OFFSET))(this);
		}

	};
