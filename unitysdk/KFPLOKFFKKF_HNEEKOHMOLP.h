#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define KFPLOKFFKKF_HNEEKOHMOLP_COMPARE_OFFSET UNITYSDK_OFFSET(0x52F4E0)
#define KFPLOKFFKKF_HNEEKOHMOLP_GET_MAXPITCH_OFFSET UNITYSDK_OFFSET(0x52F540)
#define KFPLOKFFKKF_HNEEKOHMOLP_GET_MINPITCH_OFFSET UNITYSDK_OFFSET(0x52F530)
#define KFPLOKFFKKF_HNEEKOHMOLP__CTOR_OFFSET UNITYSDK_OFFSET(0x52F440)

inline static constexpr unsigned int KFPLOKFFKKF_HNEEKOHMOLP_TypeDefinitionIndex = 42445;

struct alignas(4) KFPLOKFFKKF_HNEEKOHMOLP
{
	::System::Single LKPMGBAAMMB; // 0x10
	::System::Single MKCPALBMJCK; // 0x14
	::System::Single JGKDPDBMGAP; // 0x18

	::System::Void _ctor(::UnityEngine::Quaternion FPNKBIPMBCA, ::System::Single KJHPKFCFAMP, ::System::Single BAFOIENGGLP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KFPLOKFFKKF_HNEEKOHMOLP__CTOR_OFFSET))(this, FPNKBIPMBCA, KJHPKFCFAMP, BAFOIENGGLP);
	}

	::UnityEngine::Quaternion Compare(::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> KILPCOMOCMD, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> BBCODANAFGI)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + KFPLOKFFKKF_HNEEKOHMOLP_COMPARE_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}

	::System::Double get_MinPitch()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPLOKFFKKF_HNEEKOHMOLP_GET_MINPITCH_OFFSET))(this);
	}

	::System::Double get_MaxPitch()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPLOKFFKKF_HNEEKOHMOLP_GET_MAXPITCH_OFFSET))(this);
	}
};
