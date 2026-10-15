#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantFacilityType.h"
#include "unitysdk/System/Object.h"

#define HEEGFPMGDNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CABDF90)

inline static constexpr unsigned int HEEGFPMGDNP_TypeDefinitionIndex = 42109;

	class HEEGFPMGDNP : public ::System::Object
	{
	public:
		::RPG::GameCore::RestaurantFacilityType GMPGDEINODK; // 0x10
		::System::Boolean HFOMODEHDNL; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 PHFMCACHFIJ; // 0x18
		::System::UInt32 AAGKEBFHLMC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEEGFPMGDNP_CTOR_OFFSET))(this);
		}

	};
