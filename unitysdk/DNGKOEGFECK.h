#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IAEJFPPBODG;

#define DNGKOEGFECK_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x16979A70)
#define DNGKOEGFECK_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x169796F0)
#define DNGKOEGFECK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x169799B0)
#define DNGKOEGFECK_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x16979750)
#define DNGKOEGFECK_MPKNBCJENDJ_OFFSET UNITYSDK_OFFSET(0x16979820)
#define DNGKOEGFECK_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x16979960)
#define DNGKOEGFECK_PGALFPNDMLD_OFFSET UNITYSDK_OFFSET(0x16979890)
#define DNGKOEGFECK__CTOR_OFFSET UNITYSDK_OFFSET(0x169796E0)

inline static constexpr unsigned int DNGKOEGFECK_TypeDefinitionIndex = 49054;

class DNGKOEGFECK : public ::System::Object
{
public:
	::IAEJFPPBODG* KFHNIGHMIFP; // 0x10
	::UnityEngine::Vector3 GJLBPCDCCCF; // 0x18
	::System::Int32 JFFKPLIAGFK; // 0x24
	::System::Boolean NAIEGIPGHPD; // 0x28
	::System::Byte _padding0[0x3];
	::System::Single EOGIGJNBBAN; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGKOEGFECK__CTOR_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGKOEGFECK_FFCPIEDHBDP_OFFSET))(this);
	}

	::UnityEngine::Vector3 LBCBPEJEHNB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGKOEGFECK_LBCBPEJEHNB_OFFSET))(this);
	}

	::System::Void PGALFPNDMLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGKOEGFECK_PGALFPNDMLD_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGKOEGFECK_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGKOEGFECK_FINALIZE_OFFSET))(this);
	}

	::System::Void AMEGHCHMIOD(::IAEJFPPBODG* FALMIFIINHD, ::System::Single EOGIGJNBBAN, ::System::Boolean NAIEGIPGHPD)
	{
		return ((::System::Void(*)(::PVOID, ::IAEJFPPBODG*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DNGKOEGFECK_AMEGHCHMIOD_OFFSET))(this, FALMIFIINHD, EOGIGJNBBAN, NAIEGIPGHPD);
	}

	::System::Void MPKNBCJENDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGKOEGFECK_MPKNBCJENDJ_OFFSET))(this);
	}
};
