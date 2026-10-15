#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameValueCompareType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define LEJBLBEAPAH_CJDNCBHLOGD_OFFSET UNITYSDK_OFFSET(0xB650D90)

inline static constexpr unsigned int LEJBLBEAPAH_TypeDefinitionIndex = 77364;

	class LEJBLBEAPAH : public ::System::Object
	{
	public:
		static ::System::Boolean CJDNCBHLOGD(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::LittleGameValueCompareType a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::LittleGameValueCompareType))((::PBYTE)hIl2Cpp + LEJBLBEAPAH_CJDNCBHLOGD_OFFSET))(a1, a2, a3);
		}

	};
