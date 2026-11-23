#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoLookDevFootCheck_EDCFACF38BDA5C11.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::InputSystem { class InputAction; }

#define MONOLOOKDEVFOOTCHECK_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x18AE7D0)
#define MONOLOOKDEVFOOTCHECK_BACA1E2DE135BBBE_OFFSET UNITYSDK_OFFSET(0x18AE620)
#define MONOLOOKDEVFOOTCHECK_BD8604A4E7811AE8_OFFSET UNITYSDK_OFFSET(0x18AE990)
#define MONOLOOKDEVFOOTCHECK_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x18AE830)
#define MONOLOOKDEVFOOTCHECK_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x18AEA20)
#define MONOLOOKDEVFOOTCHECK_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x18AE890)
#define MONOLOOKDEVFOOTCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x18AEBE0)

inline static constexpr unsigned int MonoLookDevFootCheck_TypeDefinitionIndex = 1303;

class MonoLookDevFootCheck : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Animator* A2B120FE2BB45477; // 0x20
	::System::Int32 E191A013AC9A91E8; // 0x28
	::System::Int32 AA4C9D6DFFDB318E; // 0x2C
	::System::Int32 A31CABE0A2324C40; // 0x30
	::System::Int32 E8385417EE83157E; // 0x34
	::UnityEngine::Transform* FootL; // 0x38
	::UnityEngine::Transform* FootR; // 0x40
	::MonoLookDevFootCheck_EDCFACF38BDA5C11 Footed; // 0x48
	::System::Single LeftFootAhead; // 0x4C
	::System::Single B54E1136B2C031B5; // 0x50
	::System::Boolean LeftFootForward; // 0x54
	::System::Byte _padding0[0x3];
	::System::Single F49F26947A1A41A6; // 0x58
	::System::Single DeltaAngle; // 0x5C
	::UnityEngine::InputSystem::InputAction* TimeAction; // 0x60
	::System::Boolean DebugOn; // 0x68
	::System::Byte _padding1[0x3];
	::System::Single TimeScale; // 0x6C

	::System::Void F328E4D8818B1E12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVFOOTCHECK_F328E4D8818B1E12_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVFOOTCHECK__CTOR_OFFSET))(this);
	}

	::System::Void A28D6A0C3E793E7D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVFOOTCHECK_A28D6A0C3E793E7D_OFFSET))(this);
	}

	::System::Void BD8604A4E7811AE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVFOOTCHECK_BD8604A4E7811AE8_OFFSET))(this);
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVFOOTCHECK_BF13C91AD80643D2_OFFSET))(this);
	}

	::System::Void E02954280801633F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVFOOTCHECK_E02954280801633F_OFFSET))(this);
	}

	::System::Void BACA1E2DE135BBBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVFOOTCHECK_BACA1E2DE135BBBE_OFFSET))(this);
	}
};
