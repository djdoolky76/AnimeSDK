#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FeverTimePeriodType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define FHCFPENPFOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15772FE0)

inline static constexpr unsigned int FHCFPENPFOJ_TypeDefinitionIndex = 55234;

	class FHCFPENPFOJ : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint BDEMOIAOHJC; // 0x10
		::RPG::GameCore::FeverTimePeriodType JNCLBMMJOFE; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint KKCKMCDGCGK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCFPENPFOJ_CTOR_OFFSET))(this);
		}

	};
