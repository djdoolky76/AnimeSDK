#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/HeightLimitedTarget.h"
#include "unitysdk/System/Object.h"

#define FJIHIJBNAHG_CTOR_OFFSET UNITYSDK_OFFSET(0x157C38C0)

inline static constexpr unsigned int FJIHIJBNAHG_TypeDefinitionIndex = 48429;

	class FJIHIJBNAHG : public ::System::Object
	{
	public:
		::RPGTools::Timeline::HeightLimitedTarget MCLLALGABAB; // 0x10
		::System::Single HBAMPJPOOLM; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIHIJBNAHG_CTOR_OFFSET))(this);
		}

	};
