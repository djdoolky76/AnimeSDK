#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Object.h"

#define AGJLCABJAPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D861700)

inline static constexpr unsigned int AGJLCABJAPA_TypeDefinitionIndex = 43101;

	class AGJLCABJAPA : public ::System::Object
	{
	public:
		::System::Int32 GKJBKEDFHIB; // 0x10
		::RPG::GameCore::RestaurantSuperEventType LAOACNPDOLD; // 0x14
		::System::Boolean KEOKEELBKHI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJLCABJAPA_CTOR_OFFSET))(this);
		}

	};
