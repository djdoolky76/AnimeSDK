#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KLNKLOMDIIC.h"
namespace RPG::GameCore { class FiveDimSurfacePoint; }

#define GEOADLJHBHG_KIFAGHIPEDN_OFFSET UNITYSDK_OFFSET(0x1CA89690)

inline static constexpr unsigned int GEOADLJHBHG_TypeDefinitionIndex = 43592;

	class GEOADLJHBHG : public ::System::Object
	{
	public:
		static ::KLNKLOMDIIC KIFAGHIPEDN(::RPG::GameCore::FiveDimSurfacePoint* a1)
		{
			return ((::KLNKLOMDIIC(*)(::RPG::GameCore::FiveDimSurfacePoint*))((::PBYTE)hIl2Cpp + GEOADLJHBHG_KIFAGHIPEDN_OFFSET))(a1);
		}

	};
