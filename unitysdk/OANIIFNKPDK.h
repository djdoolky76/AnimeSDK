#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/Foundation/FixedArray2_1.h"
#include "unitysdk/IGOJCCPHHAC.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define OANIIFNKPDK_CELHLLIAIKB_OFFSET UNITYSDK_OFFSET(0x5FA830)
#define OANIIFNKPDK_COHDMPBBMPO_OFFSET UNITYSDK_OFFSET(0x5FA8E0)
#define OANIIFNKPDK_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x40C7D0)
#define OANIIFNKPDK_NCIBFJAIGNO_OFFSET UNITYSDK_OFFSET(0x5FA960)
#define OANIIFNKPDK__CTOR_OFFSET UNITYSDK_OFFSET(0x5FA820)

inline static constexpr unsigned int OANIIFNKPDK_TypeDefinitionIndex = 42308;

struct alignas(8) OANIIFNKPDK
{
	::Foundation::Unreal::Interval_1<::System::Single> AFLBKDHDNBN; // 0x10
	::System::Byte _padding0[0x8];
	::IGOJCCPHHAC FNLGDLHAEGD; // 0x20
	::Foundation::FixedArray2_1<::System::Single> JMLAGEHMINE; // 0x24

	::System::Void _ctor(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB, ::System::Boolean LCICILJOFHJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&, ::System::Boolean))((::PBYTE)hIl2Cpp + OANIIFNKPDK__CTOR_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB, LCICILJOFHJ);
	}

	::System::Single CELHLLIAIKB(::System::Single LALKNONLNEG)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OANIIFNKPDK_CELHLLIAIKB_OFFSET))(this, LALKNONLNEG);
	}

	::System::Boolean COHDMPBBMPO(::System::Single LALKNONLNEG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OANIIFNKPDK_COHDMPBBMPO_OFFSET))(this, LALKNONLNEG);
	}

	::IGOJCCPHHAC HKELPCLHLEC()
	{
		return ((::IGOJCCPHHAC(*)(::PVOID))((::PBYTE)hIl2Cpp + OANIIFNKPDK_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Boolean NCIBFJAIGNO(::Foundation::Unreal::Interval_1<::System::Single>& LNJFKBBFABK, ::Foundation::Unreal::Interval_1<::System::Single>& HDKIHFIPMNN, ::System::Boolean& HKKJCJLHOJC, ::System::Boolean& FKOJHKFKLML)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>&, ::Foundation::Unreal::Interval_1<::System::Single>&, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + OANIIFNKPDK_NCIBFJAIGNO_OFFSET))(this, LNJFKBBFABK, HDKIHFIPMNN, HKKJCJLHOJC, FKOJHKFKLML);
	}
};
