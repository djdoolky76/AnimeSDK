#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray5_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define IJIDHNIJBLP_IMNEHJGKAEO_OFFSET UNITYSDK_OFFSET(0x779160)
#define IJIDHNIJBLP_MPPFDGIKINE_OFFSET UNITYSDK_OFFSET(0x778F60)
#define IJIDHNIJBLP_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7790D0)
#define IJIDHNIJBLP_OAJJFNNGLJD_OFFSET UNITYSDK_OFFSET(0x779020)
#define IJIDHNIJBLP_OMLBLFGFFPL_OFFSET UNITYSDK_OFFSET(0x779050)
#define IJIDHNIJBLP__CTOR_OFFSET UNITYSDK_OFFSET(0x778F50)

inline static constexpr unsigned int IJIDHNIJBLP_TypeDefinitionIndex = 62425;

struct alignas(8) IJIDHNIJBLP
{
	::Foundation::FixedArray5_1<::System::Single> PNMHDHECMAE; // 0x10

	::System::Void _ctor(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + IJIDHNIJBLP__CTOR_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Single MPPFDGIKINE(::System::Single ILDOPFJDHGE)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJIDHNIJBLP_MPPFDGIKINE_OFFSET))(this, ILDOPFJDHGE);
	}

	::System::Single OAJJFNNGLJD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIDHNIJBLP_OAJJFNNGLJD_OFFSET))(this);
	}

	::System::Single OMLBLFGFFPL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIDHNIJBLP_OMLBLFGFFPL_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + IJIDHNIJBLP_NPOLNFDBOOD_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Void IMNEHJGKAEO(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + IJIDHNIJBLP_IMNEHJGKAEO_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
