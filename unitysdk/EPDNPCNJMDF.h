#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/CancelFadingReason.h"

#define EPDNPCNJMDF_CTOR_OFFSET UNITYSDK_OFFSET(0x155D2020)
#define EPDNPCNJMDF_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x155D2080)

inline static constexpr unsigned int EPDNPCNJMDF_TypeDefinitionIndex = 49418;

	class EPDNPCNJMDF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDNPCNJMDF_CTOR_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::EnviromentSystemV2Space::CancelFadingReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::CancelFadingReason))((::PBYTE)hIl2Cpp + EPDNPCNJMDF_HKKFFCBJOKM_OFFSET))(this, a1);
		}

	};
