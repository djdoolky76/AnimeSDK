#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHGCFCKEDAP.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"

#define NKOGBOOEGDD_AEDINCHNBPJ_OFFSET UNITYSDK_OFFSET(0x5A4570)
#define NKOGBOOEGDD_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x5A4630)
#define NKOGBOOEGDD_JPFGLOPDGFG_OFFSET UNITYSDK_OFFSET(0x5A45D0)
#define NKOGBOOEGDD_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x5A4500)
#define NKOGBOOEGDD__CCTOR_OFFSET UNITYSDK_OFFSET(0xE58F0C0)
#define NKOGBOOEGDD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x471CA0)
#define NKOGBOOEGDD__CTOR_OFFSET UNITYSDK_OFFSET(0x5A4460)

inline static constexpr unsigned int NKOGBOOEGDD_TypeDefinitionIndex = 52857;

struct alignas(4) NKOGBOOEGDD
{
	static ::NKOGBOOEGDD* StaticGet_FGBLILBNEHG()
	{
		return (::NKOGBOOEGDD*)Il2CppClass::FromTypeDefinitionIndex(NKOGBOOEGDD_TypeDefinitionIndex)->GetStaticField(0xFF50);
	}
	::BHGCFCKEDAP KMGIPLIKEJG; // 0x10

	::System::Void _ctor(::Foundation::DefaultConstruct PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::DefaultConstruct))((::PBYTE)hIl2Cpp + NKOGBOOEGDD__CTOR_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void _ctor_1(::BHGCFCKEDAP ELHMOANKHFM)
	{
		return ((::System::Void(*)(::PVOID, ::BHGCFCKEDAP))((::PBYTE)hIl2Cpp + NKOGBOOEGDD__CTOR_1_OFFSET))(this, ELHMOANKHFM);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKOGBOOEGDD__CCTOR_OFFSET))();
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOGBOOEGDD_NKDCADABLCL_OFFSET))(this);
	}

	::System::Single AEDINCHNBPJ(::Foundation::Unreal::Interval_1<::System::Single> HPCILAJBBHH)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + NKOGBOOEGDD_AEDINCHNBPJ_OFFSET))(this, HPCILAJBBHH);
	}

	::Foundation::Unreal::Interval_1<::System::Single> JPFGLOPDGFG()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOGBOOEGDD_JPFGLOPDGFG_OFFSET))(this);
	}

	::System::Single FCFOEJGPDNO(::Foundation::Unreal::Interval_1<::System::Single> HPCILAJBBHH)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + NKOGBOOEGDD_FCFOEJGPDNO_OFFSET))(this, HPCILAJBBHH);
	}
};
