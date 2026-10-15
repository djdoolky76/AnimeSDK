#pragma once
#include "unitysdk/unitysdk.h"

#define MLLFELNBJNB_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B2E00)
#define MLLFELNBJNB_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0xB9B2CE0)

inline static constexpr unsigned int MLLFELNBJNB_TypeDefinitionIndex = 69744;

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
