#pragma once
#include "unitysdk/unitysdk.h"

#define MLLFELNBJNB_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B8A70)
#define MLLFELNBJNB_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0xB9B8950)

	class MLLFELNBJNB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLFELNBJNB_CTOR_OFFSET))(this);
		}

		::System::Void InitInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLFELNBJNB_INITINTERNAL_OFFSET))(this);
		}

	};
