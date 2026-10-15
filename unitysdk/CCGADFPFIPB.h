#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"

#define CCGADFPFIPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DD370)

	class CCGADFPFIPB : public ::System::Object
	{
	public:
		::System::Int32 GKJBKEDFHIB; // 0x10
		::RPG::GameCore::RestaurantNormalEventType LAOACNPDOLD; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGADFPFIPB_CTOR_OFFSET))(this);
		}

	};
