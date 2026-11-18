#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHGCFCKEDAP.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NJAHGGHILMB_AEDINCHNBPJ_OFFSET UNITYSDK_OFFSET(0x58FE40)
#define NJAHGGHILMB_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x58F960)
#define NJAHGGHILMB_JPFGLOPDGFG_OFFSET UNITYSDK_OFFSET(0x5900A0)
#define NJAHGGHILMB_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x58FF40)
#define NJAHGGHILMB__CCTOR_OFFSET UNITYSDK_OFFSET(0xE09F190)
#define NJAHGGHILMB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x58F800)
#define NJAHGGHILMB__CTOR_OFFSET UNITYSDK_OFFSET(0x58F6B0)

inline static constexpr unsigned int NJAHGGHILMB_TypeDefinitionIndex = 81818;

struct alignas(4) NJAHGGHILMB
{
	static ::NJAHGGHILMB* StaticGet_FGBLILBNEHG()
	{
		return (::NJAHGGHILMB*)Il2CppClass::FromTypeDefinitionIndex(NJAHGGHILMB_TypeDefinitionIndex)->GetStaticField(0x11C20);
	}
	::BHGCFCKEDAP FCEJJJPPLJN; // 0x10
	::BHGCFCKEDAP NKADHAGEBKM; // 0x70
	::BHGCFCKEDAP NMDKIJDPBHM; // 0xD0

	::System::Void _ctor(::Foundation::DefaultConstruct PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::DefaultConstruct))((::PBYTE)hIl2Cpp + NJAHGGHILMB__CTOR_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void _ctor_1(::BHGCFCKEDAP HAAEBCOBKFF, ::BHGCFCKEDAP BFMMEICFNCD, ::BHGCFCKEDAP GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::PVOID, ::BHGCFCKEDAP, ::BHGCFCKEDAP, ::BHGCFCKEDAP))((::PBYTE)hIl2Cpp + NJAHGGHILMB__CTOR_1_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD, GNHOCNHLCCA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJAHGGHILMB__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 FCFOEJGPDNO(::Foundation::Unreal::Interval_1<::System::Single> HPCILAJBBHH)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + NJAHGGHILMB_FCFOEJGPDNO_OFFSET))(this, HPCILAJBBHH);
	}

	::UnityEngine::Vector3 AEDINCHNBPJ(::Foundation::Unreal::Interval_1<::System::Single> HPCILAJBBHH)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + NJAHGGHILMB_AEDINCHNBPJ_OFFSET))(this, HPCILAJBBHH);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAHGGHILMB_NKDCADABLCL_OFFSET))(this);
	}

	::Foundation::Unreal::Interval_1<::System::Single> JPFGLOPDGFG()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAHGGHILMB_JPFGLOPDGFG_OFFSET))(this);
	}
};
