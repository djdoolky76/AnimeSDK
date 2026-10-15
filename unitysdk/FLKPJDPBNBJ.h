#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFJDNIMHGOG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define FLKPJDPBNBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15831C10)

inline static constexpr unsigned int FLKPJDPBNBJ_TypeDefinitionIndex = 55596;

	class FLKPJDPBNBJ : public ::CFJDNIMHGOG
	{
	public:
		::RPG::GameCore::FixPoint MLPAPJINGID; // 0x18
		::RPG::GameCore::FixPoint MJECLGFJOIA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKPJDPBNBJ_CTOR_OFFSET))(this);
		}

	};
