#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHGCFCKEDAP.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LKOIIFHLGFD_AEDINCHNBPJ_OFFSET UNITYSDK_OFFSET(0x78D0E0)
#define LKOIIFHLGFD_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x78D170)
#define LKOIIFHLGFD_JPFGLOPDGFG_OFFSET UNITYSDK_OFFSET(0x753340)
#define LKOIIFHLGFD_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x58FF40)
#define LKOIIFHLGFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16856D20)
#define LKOIIFHLGFD__CTOR_OFFSET UNITYSDK_OFFSET(0x58F800)

inline static constexpr unsigned int LKOIIFHLGFD_TypeDefinitionIndex = 85265;

struct alignas(4) LKOIIFHLGFD
{
	static ::LKOIIFHLGFD* StaticGet_FGBLILBNEHG()
	{
		return (::LKOIIFHLGFD*)Il2CppClass::FromTypeDefinitionIndex(LKOIIFHLGFD_TypeDefinitionIndex)->GetStaticField(0xCD50);
	}
	::BHGCFCKEDAP FCEJJJPPLJN; // 0x10
	::BHGCFCKEDAP NKADHAGEBKM; // 0x70
	::BHGCFCKEDAP NMDKIJDPBHM; // 0xD0

	::System::Void _ctor(::BHGCFCKEDAP HAAEBCOBKFF, ::BHGCFCKEDAP BFMMEICFNCD, ::BHGCFCKEDAP GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::PVOID, ::BHGCFCKEDAP, ::BHGCFCKEDAP, ::BHGCFCKEDAP))((::PBYTE)hIl2Cpp + LKOIIFHLGFD__CTOR_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD, GNHOCNHLCCA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKOIIFHLGFD__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 AEDINCHNBPJ(::System::Single LALKNONLNEG)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKOIIFHLGFD_AEDINCHNBPJ_OFFSET))(this, LALKNONLNEG);
	}

	::UnityEngine::Vector3 FCFOEJGPDNO(::System::Single LALKNONLNEG)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKOIIFHLGFD_FCFOEJGPDNO_OFFSET))(this, LALKNONLNEG);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOIIFHLGFD_NKDCADABLCL_OFFSET))(this);
	}

	::Foundation::Unreal::Interval_1<::System::Single> JPFGLOPDGFG()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOIIFHLGFD_JPFGLOPDGFG_OFFSET))(this);
	}
};
