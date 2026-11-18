#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray7_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define MFEDCIKJFJF_IMNEHJGKAEO_OFFSET UNITYSDK_OFFSET(0x773FD0)
#define MFEDCIKJFJF_MPPFDGIKINE_OFFSET UNITYSDK_OFFSET(0x773E70)
#define MFEDCIKJFJF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x773F30)
#define MFEDCIKJFJF_OAJJFNNGLJD_OFFSET UNITYSDK_OFFSET(0x773E80)
#define MFEDCIKJFJF_OMLBLFGFFPL_OFFSET UNITYSDK_OFFSET(0x773EB0)
#define MFEDCIKJFJF__CTOR_OFFSET UNITYSDK_OFFSET(0x773FC0)

inline static constexpr unsigned int MFEDCIKJFJF_TypeDefinitionIndex = 68308;

struct alignas(8) MFEDCIKJFJF
{
	::System::Single GEINELFJJOA; // 0x10
	::System::Single LIPKGGPGEPH; // 0x14
	::Foundation::FixedArray7_1<::System::Single> PNMHDHECMAE; // 0x18

	::System::Void _ctor(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + MFEDCIKJFJF__CTOR_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Single MPPFDGIKINE(::System::Single ILDOPFJDHGE)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFEDCIKJFJF_MPPFDGIKINE_OFFSET))(this, ILDOPFJDHGE);
	}

	::System::Single OAJJFNNGLJD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEDCIKJFJF_OAJJFNNGLJD_OFFSET))(this);
	}

	::System::Single OMLBLFGFFPL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEDCIKJFJF_OMLBLFGFFPL_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + MFEDCIKJFJF_NPOLNFDBOOD_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Void IMNEHJGKAEO(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + MFEDCIKJFJF_IMNEHJGKAEO_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
