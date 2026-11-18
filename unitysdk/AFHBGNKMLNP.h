#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AFHBGNKMLNP_IIHDDBDJIAL_OFFSET UNITYSDK_OFFSET(0x1420FD20)
#define AFHBGNKMLNP_LOIPAIBCKKA_OFFSET UNITYSDK_OFFSET(0x1420FC90)

inline static constexpr unsigned int AFHBGNKMLNP_TypeDefinitionIndex = 88759;

class AFHBGNKMLNP : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 LOIPAIBCKKA(::RVO::Vector2 HFMHOELKCAJ, ::System::Single BFMMEICFNCD)
	{
		return ((::UnityEngine::Vector3(*)(::RVO::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + AFHBGNKMLNP_LOIPAIBCKKA_OFFSET))(HFMHOELKCAJ, BFMMEICFNCD);
	}

	static ::RVO::Vector2 IIHDDBDJIAL(::UnityEngine::Vector3 HFMHOELKCAJ)
	{
		return ((::RVO::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AFHBGNKMLNP_IIHDDBDJIAL_OFFSET))(HFMHOELKCAJ);
	}
};
