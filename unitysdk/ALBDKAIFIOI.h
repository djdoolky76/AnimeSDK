#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

#define ALBDKAIFIOI_FNKNLPMABLH_OFFSET UNITYSDK_OFFSET(0x197B54A0)

inline static constexpr unsigned int ALBDKAIFIOI_TypeDefinitionIndex = 57296;

	class ALBDKAIFIOI : public ::System::Object
	{
	public:
		static ::System::Boolean FNKNLPMABLH(::RPG::GameCore::EvolveGearType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + ALBDKAIFIOI_FNKNLPMABLH_OFFSET))(a1);
		}

	};
