#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPKNAJFMBLA_HJOBCDMCLMC_ICMCDMNIKIK.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MPKNAJFMBLA_HJOBCDMCLMC_CBBAJFDFFGJ_OFFSET UNITYSDK_OFFSET(0x6F9410)
#define MPKNAJFMBLA_HJOBCDMCLMC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x6F9460)

inline static constexpr unsigned int MPKNAJFMBLA_HJOBCDMCLMC_TypeDefinitionIndex = 39470;

struct alignas(8) MPKNAJFMBLA_HJOBCDMCLMC
{
	::MPKNAJFMBLA_HJOBCDMCLMC_ICMCDMNIKIK KAEHFOOMEGJ; // 0x10
	::UnityEngine::Vector3 GDKJLFIAIEN; // 0x14
	::System::ValueTuple_2<::System::Single, ::System::Single> KGMOABMKBKG; // 0x20
	::System::Single NDACLBFGPDI; // 0x28
	::UnityEngine::Vector3 BMHDHLELNMO; // 0x2C
	::UnityEngine::Transform* LMIDGCDCEGP; // 0x38

	::System::Boolean CBBAJFDFFGJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKNAJFMBLA_HJOBCDMCLMC_CBBAJFDFFGJ_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKNAJFMBLA_HJOBCDMCLMC_NPOLNFDBOOD_OFFSET))(this);
	}
};
