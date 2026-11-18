#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CDEHPHLCMPC_MCIJJMNBEJA_BHKLMMAJGLH_OFFSET UNITYSDK_OFFSET(0x76D440)
#define CDEHPHLCMPC_MCIJJMNBEJA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x76D3D0)
#define CDEHPHLCMPC_MCIJJMNBEJA__CTOR_OFFSET UNITYSDK_OFFSET(0x3CCA00)

inline static constexpr unsigned int CDEHPHLCMPC_MCIJJMNBEJA_TypeDefinitionIndex = 68047;

struct alignas(4) CDEHPHLCMPC_MCIJJMNBEJA
{
	::UnityEngine::Vector3 CEHGFFDBHOJ; // 0x10
	::System::Single FOGJCJCLMMB; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 JBCNPOHMGPE, ::System::Single KMKBJKOEBMF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_MCIJJMNBEJA__CTOR_OFFSET))(this, JBCNPOHMGPE, KMKBJKOEBMF);
	}

	::System::Void _ctor_1(::UnityEngine::Vector3 PMKOELLKDDN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_MCIJJMNBEJA__CTOR_1_OFFSET))(this, PMKOELLKDDN);
	}

	::UnityEngine::Vector3 BHKLMMAJGLH()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_MCIJJMNBEJA_BHKLMMAJGLH_OFFSET))(this);
	}
};
