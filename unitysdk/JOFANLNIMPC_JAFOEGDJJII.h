#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/System/ValueTuple_2.h"

#define JOFANLNIMPC_JAFOEGDJJII_COMPARE_OFFSET UNITYSDK_OFFSET(0x7719B0)
#define JOFANLNIMPC_JAFOEGDJJII_GET_MAXPITCH_OFFSET UNITYSDK_OFFSET(0x6FFFB0)
#define JOFANLNIMPC_JAFOEGDJJII_GET_MINPITCH_OFFSET UNITYSDK_OFFSET(0x6FFFA0)
#define JOFANLNIMPC_JAFOEGDJJII__CTOR_OFFSET UNITYSDK_OFFSET(0x6FFF10)

inline static constexpr unsigned int JOFANLNIMPC_JAFOEGDJJII_TypeDefinitionIndex = 54091;

struct alignas(4) JOFANLNIMPC_JAFOEGDJJII
{
	::UnityEngine::Quaternion GAFNNKAPHPH; // 0x10

	::System::Void _ctor(::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + JOFANLNIMPC_JAFOEGDJJII__CTOR_OFFSET))(this, BFBELMDIAHI);
	}

	::UnityEngine::Quaternion Compare(::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> KILPCOMOCMD, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> BBCODANAFGI)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + JOFANLNIMPC_JAFOEGDJJII_COMPARE_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}

	::System::Double get_MinPitch()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_JAFOEGDJJII_GET_MINPITCH_OFFSET))(this);
	}

	::System::Double get_MaxPitch()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_JAFOEGDJJII_GET_MAXPITCH_OFFSET))(this);
	}
};
