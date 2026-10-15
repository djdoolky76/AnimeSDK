#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBHJHADOEID.h"

#define PMAPCLKFJGK_CTOR_OFFSET UNITYSDK_OFFSET(0xC30BAF0)
#define PMAPCLKFJGK_FAHFGDHGFLG_OFFSET UNITYSDK_OFFSET(0xC30B910)
#define PMAPCLKFJGK_HFNAOBEBGDE_OFFSET UNITYSDK_OFFSET(0xC30BA10)

inline static constexpr unsigned int PMAPCLKFJGK_TypeDefinitionIndex = 69439;

	class PMAPCLKFJGK : public ::BBHJHADOEID
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMAPCLKFJGK_CTOR_OFFSET))(this);
		}

		::System::Boolean FAHFGDHGFLG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMAPCLKFJGK_FAHFGDHGFLG_OFFSET))(this);
		}

		::System::Boolean HFNAOBEBGDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMAPCLKFJGK_HFNAOBEBGDE_OFFSET))(this);
		}

	};
