#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJAHGGHILMB.h"
#include "unitysdk/NKOGBOOEGDD.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OMFPGFJGCLF_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x6EAF60)
#define OMFPGFJGCLF_JPFGLOPDGFG_OFFSET UNITYSDK_OFFSET(0x6EACD0)
#define OMFPGFJGCLF_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x6EAAF0)
#define OMFPGFJGCLF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1294B720)

inline static constexpr unsigned int OMFPGFJGCLF_TypeDefinitionIndex = 45268;

struct alignas(4) OMFPGFJGCLF
{
	static ::OMFPGFJGCLF* StaticGet_FGBLILBNEHG()
	{
		return (::OMFPGFJGCLF*)Il2CppClass::FromTypeDefinitionIndex(OMFPGFJGCLF_TypeDefinitionIndex)->GetStaticField(0x11D40);
	}
	::NJAHGGHILMB LFCABNNPNIA; // 0x10
	::NKOGBOOEGDD IFEFGIHOKOC; // 0x130

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMFPGFJGCLF__CCTOR_OFFSET))();
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFPGFJGCLF_NKDCADABLCL_OFFSET))(this);
	}

	::Foundation::Unreal::Interval_1<::System::Single> JPFGLOPDGFG()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFPGFJGCLF_JPFGLOPDGFG_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single> FCFOEJGPDNO(::Foundation::Unreal::Interval_1<::System::Single> HPCILAJBBHH)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single>(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + OMFPGFJGCLF_FCFOEJGPDNO_OFFSET))(this, HPCILAJBBHH);
	}
};
