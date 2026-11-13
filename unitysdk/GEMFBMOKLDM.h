#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAnimState.h"
#include "unitysdk/System/Object.h"

#define GEMFBMOKLDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA4A970)

inline static constexpr unsigned int GEMFBMOKLDM_TypeDefinitionIndex = 38177;

	class GEMFBMOKLDM : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceAnimState FMHBDAOIDED; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMFBMOKLDM_CTOR_OFFSET))(this);
		}

	};
