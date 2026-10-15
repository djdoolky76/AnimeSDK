#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Object.h"

#define AGJLCABJAPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C85D3A0)

inline static constexpr unsigned int AGJLCABJAPA_TypeDefinitionIndex = 42126;

	class AGJLCABJAPA : public ::System::Object
	{
	public:
		::RPG::GameCore::RestaurantSuperEventType LAOACNPDOLD; // 0x10
		::System::Int32 GKJBKEDFHIB; // 0x14
		::System::Boolean KEOKEELBKHI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJLCABJAPA_CTOR_OFFSET))(this);
		}

	};
