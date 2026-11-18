#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INLEFOLJLJJ.h"
#include "unitysdk/OPADOPFDNGD.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }

#define DNLHPAENHNE_HCJKGBACALF_OFFSET UNITYSDK_OFFSET(0x19D7EA30)
#define DNLHPAENHNE_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x7EEDE0)
#define DNLHPAENHNE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7EEDD0)
#define DNLHPAENHNE__CTOR_OFFSET UNITYSDK_OFFSET(0x7EECE0)

inline static constexpr unsigned int DNLHPAENHNE_TypeDefinitionIndex = 86701;

struct alignas(8) DNLHPAENHNE
{
	::UnityEngine::Material* KEHECMCDLFC; // 0x10
	::System::Int32 FJPBKADAMGC; // 0x18
	::System::Single JAPACFEMANE; // 0x1C
	::System::Single LLOJCOLCKJL; // 0x20
	::INLEFOLJLJJ GJCNOIEHIBG; // 0x24

	::System::Void _ctor(::UnityEngine::Material* HODAIDNDKHD, ::System::Int32 DABJIHHDFNO, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DNLHPAENHNE__CTOR_OFFSET))(this, HODAIDNDKHD, DABJIHHDFNO, KDEHMPGOCEP, PADJNMGMGHO, MDPPNMIPDMP);
	}

	::System::Void _ctor_1(::UnityEngine::Material* HODAIDNDKHD, ::System::Int32 DABJIHHDFNO, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::INLEFOLJLJJ& JIJFBNLHFGK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Single, ::System::Single, ::INLEFOLJLJJ&))((::PBYTE)hIl2Cpp + DNLHPAENHNE__CTOR_1_OFFSET))(this, HODAIDNDKHD, DABJIHHDFNO, KDEHMPGOCEP, PADJNMGMGHO, JIJFBNLHFGK);
	}

	/*
	static ::DNLHPAENHNE HCJKGBACALF(::UnityEngine::Material* HODAIDNDKHD, ::System::Int32 DABJIHHDFNO, ::System::Single PADJNMGMGHO, ::System::Single MDPPNMIPDMP, ::OPADOPFDNGD MDEIMMJBCDP)
	{
		return ((::DNLHPAENHNE(*)(::UnityEngine::Material*, ::System::Int32, ::System::Single, ::System::Single, ::OPADOPFDNGD))((::PBYTE)hIl2Cpp + DNLHPAENHNE_HCJKGBACALF_OFFSET))(HODAIDNDKHD, DABJIHHDFNO, PADJNMGMGHO, MDPPNMIPDMP, MDEIMMJBCDP);
	}
	*/

	::System::Single PDAADHDFGKP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLHPAENHNE_PDAADHDFGKP_OFFSET))(this);
	}
};
