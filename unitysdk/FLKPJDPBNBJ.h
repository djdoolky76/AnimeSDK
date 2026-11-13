#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFJDNIMHGOG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define FLKPJDPBNBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1896CAF0)

inline static constexpr unsigned int FLKPJDPBNBJ_TypeDefinitionIndex = 56792;

	class FLKPJDPBNBJ : public ::CFJDNIMHGOG
	{
	public:
		::RPG::GameCore::FixPoint MJECLGFJOIA; // 0x18
		::RPG::GameCore::FixPoint MLPAPJINGID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKPJDPBNBJ_CTOR_OFFSET))(this);
		}

	};
