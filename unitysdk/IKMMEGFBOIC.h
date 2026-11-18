#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHGCFCKEDAP.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define IKMMEGFBOIC_AEDINCHNBPJ_OFFSET UNITYSDK_OFFSET(0x759770)
#define IKMMEGFBOIC_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x759860)
#define IKMMEGFBOIC_JPFGLOPDGFG_OFFSET UNITYSDK_OFFSET(0x759C70)
#define IKMMEGFBOIC_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x58FF40)
#define IKMMEGFBOIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x153B30C0)
#define IKMMEGFBOIC__CTOR_OFFSET UNITYSDK_OFFSET(0x58F800)

inline static constexpr unsigned int IKMMEGFBOIC_TypeDefinitionIndex = 85369;

struct alignas(4) IKMMEGFBOIC
{
	static ::IKMMEGFBOIC* StaticGet_FGBLILBNEHG()
	{
		return (::IKMMEGFBOIC*)Il2CppClass::FromTypeDefinitionIndex(IKMMEGFBOIC_TypeDefinitionIndex)->GetStaticField(0xE6F0);
	}
	::BHGCFCKEDAP FCEJJJPPLJN; // 0x10
	::BHGCFCKEDAP NKADHAGEBKM; // 0x70
	::BHGCFCKEDAP NMDKIJDPBHM; // 0xD0

	::System::Void _ctor(::BHGCFCKEDAP HAAEBCOBKFF, ::BHGCFCKEDAP BFMMEICFNCD, ::BHGCFCKEDAP GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::PVOID, ::BHGCFCKEDAP, ::BHGCFCKEDAP, ::BHGCFCKEDAP))((::PBYTE)hIl2Cpp + IKMMEGFBOIC__CTOR_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD, GNHOCNHLCCA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKMMEGFBOIC__CCTOR_OFFSET))();
	}

	::UnityEngine::Quaternion AEDINCHNBPJ(::System::Single LALKNONLNEG)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKMMEGFBOIC_AEDINCHNBPJ_OFFSET))(this, LALKNONLNEG);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMMEGFBOIC_NKDCADABLCL_OFFSET))(this);
	}

	::UnityEngine::Quaternion FCFOEJGPDNO(::System::Single LALKNONLNEG)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKMMEGFBOIC_FCFOEJGPDNO_OFFSET))(this, LALKNONLNEG);
	}

	::Foundation::Unreal::Interval_1<::System::Single> JPFGLOPDGFG()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMMEGFBOIC_JPFGLOPDGFG_OFFSET))(this);
	}
};
