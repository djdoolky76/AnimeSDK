#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"

#define CCGADFPFIPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D9CE0)

inline static constexpr unsigned int CCGADFPFIPB_TypeDefinitionIndex = 43100;

	class CCGADFPFIPB : public ::System::Object
	{
	public:
		::RPG::GameCore::RestaurantNormalEventType LAOACNPDOLD; // 0x10
		::System::Int32 GKJBKEDFHIB; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGADFPFIPB_CTOR_OFFSET))(this);
		}

	};
