#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"

#define CCGADFPFIPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8AF0E0)

inline static constexpr unsigned int CCGADFPFIPB_TypeDefinitionIndex = 42125;

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
