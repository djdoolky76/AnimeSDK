#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKMMEGFBOIC.h"
#include "unitysdk/LKOIIFHLGFD.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"

#define NILCIBBMEJE_AEDINCHNBPJ_1_OFFSET UNITYSDK_OFFSET(0x650340)
#define NILCIBBMEJE_AEDINCHNBPJ_OFFSET UNITYSDK_OFFSET(0x64FC00)
#define NILCIBBMEJE_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x64F460)
#define NILCIBBMEJE_JPFGLOPDGFG_OFFSET UNITYSDK_OFFSET(0x64FF70)
#define NILCIBBMEJE_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x64FC90)
#define NILCIBBMEJE__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D7AE20)

inline static constexpr unsigned int NILCIBBMEJE_TypeDefinitionIndex = 63679;

struct alignas(4) NILCIBBMEJE
{
	static ::NILCIBBMEJE* StaticGet_FGBLILBNEHG()
	{
		return (::NILCIBBMEJE*)Il2CppClass::FromTypeDefinitionIndex(NILCIBBMEJE_TypeDefinitionIndex)->GetStaticField(0x10C00);
	}
	::LKOIIFHLGFD LFCABNNPNIA; // 0x10
	::IKMMEGFBOIC IFEFGIHOKOC; // 0x130

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NILCIBBMEJE__CCTOR_OFFSET))();
	}

	::Foundation::Unreal::FTransform FCFOEJGPDNO(::Foundation::Unreal::Interval_1<::System::Single> HPCILAJBBHH)
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + NILCIBBMEJE_FCFOEJGPDNO_OFFSET))(this, HPCILAJBBHH);
	}

	::Foundation::Unreal::FTransform AEDINCHNBPJ(::Foundation::Unreal::Interval_1<::System::Single> HPCILAJBBHH)
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + NILCIBBMEJE_AEDINCHNBPJ_OFFSET))(this, HPCILAJBBHH);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCIBBMEJE_NKDCADABLCL_OFFSET))(this);
	}

	::Foundation::Unreal::Interval_1<::System::Single> JPFGLOPDGFG()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + NILCIBBMEJE_JPFGLOPDGFG_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform AEDINCHNBPJ_1(::System::Single LALKNONLNEG)
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NILCIBBMEJE_AEDINCHNBPJ_1_OFFSET))(this, LALKNONLNEG);
	}
};
