#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GKINKIPMOBO_EKDHAJDCCAK.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GKINKIPMOBO_BFNHFNCKMDP_OFFSET UNITYSDK_OFFSET(0x10F00550)
#define GKINKIPMOBO_CFFHAAOAMMA_1_OFFSET UNITYSDK_OFFSET(0x10F007A0)
#define GKINKIPMOBO_CFFHAAOAMMA_OFFSET UNITYSDK_OFFSET(0x10F002B0)
#define GKINKIPMOBO_IHBIGJLGNAF_OFFSET UNITYSDK_OFFSET(0x10F00600)

inline static constexpr unsigned int GKINKIPMOBO_TypeDefinitionIndex = 42078;

class GKINKIPMOBO : public ::System::Object
{
public:
	static ::System::Boolean CFFHAAOAMMA(::UnityEngine::Vector3 OPMPKFEHOBM, ::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII, ::System::Single NCCDJLDKFGA, ::System::Single& OMOEEOKGAJM)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + GKINKIPMOBO_CFFHAAOAMMA_OFFSET))(OPMPKFEHOBM, GIAEPMKCBIB, DOBFFIICAII, NCCDJLDKFGA, OMOEEOKGAJM);
	}

	static ::System::Single IHBIGJLGNAF(::UnityEngine::Vector3 OPMPKFEHOBM, ::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GKINKIPMOBO_IHBIGJLGNAF_OFFSET))(OPMPKFEHOBM, GIAEPMKCBIB, DOBFFIICAII);
	}

	static ::System::Boolean CFFHAAOAMMA_1(::UnityEngine::Vector3 OPMPKFEHOBM, ::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + GKINKIPMOBO_CFFHAAOAMMA_1_OFFSET))(OPMPKFEHOBM, GIAEPMKCBIB, DOBFFIICAII, NCCDJLDKFGA);
	}

	static ::System::Single BFNHFNCKMDP(::System::Single& CKELPHPMECF, ::GKINKIPMOBO_EKDHAJDCCAK& param_1)
	{
		return ((::System::Single(*)(::System::Single&, ::GKINKIPMOBO_EKDHAJDCCAK&))((::PBYTE)hIl2Cpp + GKINKIPMOBO_BFNHFNCKMDP_OFFSET))(CKELPHPMECF, param_1);
	}
};
