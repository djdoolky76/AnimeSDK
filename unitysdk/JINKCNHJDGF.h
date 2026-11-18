#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NameValueSortedArray_1.h"
#include "unitysdk/KNKPKFHMIPE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/NativeMemoryRefEnumerator_1.h"

#define JINKCNHJDGF_GBDNLMFAOLB_OFFSET UNITYSDK_OFFSET(0x7868A0)
#define JINKCNHJDGF_JMNBPAAGKCL_OFFSET UNITYSDK_OFFSET(0x786870)
#define JINKCNHJDGF_KJGFHDAMHGO_OFFSET UNITYSDK_OFFSET(0x786800)
#define JINKCNHJDGF_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x3D5A00)
#define JINKCNHJDGF__CCTOR_OFFSET UNITYSDK_OFFSET(0x165ADD40)
#define JINKCNHJDGF__CTOR_OFFSET UNITYSDK_OFFSET(0x358470)

inline static constexpr unsigned int JINKCNHJDGF_TypeDefinitionIndex = 83193;

struct alignas(8) JINKCNHJDGF
{
	static ::JINKCNHJDGF* StaticGet_FGBLILBNEHG()
	{
		return (::JINKCNHJDGF*)Il2CppClass::FromTypeDefinitionIndex(JINKCNHJDGF_TypeDefinitionIndex)->GetStaticField(0xB1F0);
	}
	::Foundation::NameValueSortedArray_1<::KNKPKFHMIPE> GNDPJABBAMA; // 0x10

	::System::Void _ctor(::Foundation::NameValueSortedArray_1<::KNKPKFHMIPE> OIOODJPHPMF)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NameValueSortedArray_1<::KNKPKFHMIPE>))((::PBYTE)hIl2Cpp + JINKCNHJDGF__CTOR_OFFSET))(this, OIOODJPHPMF);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JINKCNHJDGF__CCTOR_OFFSET))();
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JINKCNHJDGF_NKDCADABLCL_OFFSET))(this);
	}

	::Foundation::NativeMemoryRefEnumerator_1<::KNKPKFHMIPE> KJGFHDAMHGO()
	{
		return ((::Foundation::NativeMemoryRefEnumerator_1<::KNKPKFHMIPE>(*)(::PVOID))((::PBYTE)hIl2Cpp + JINKCNHJDGF_KJGFHDAMHGO_OFFSET))(this);
	}

	::System::Boolean JMNBPAAGKCL(::Foundation::Unreal::FName HIAIKHDFCLN)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + JINKCNHJDGF_JMNBPAAGKCL_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Boolean GBDNLMFAOLB(::Foundation::Unreal::FName EGEGIMGMJHN, ::KNKPKFHMIPE& PNEMFBIBOIB)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FName, ::KNKPKFHMIPE&))((::PBYTE)hIl2Cpp + JINKCNHJDGF_GBDNLMFAOLB_OFFSET))(this, EGEGIMGMJHN, PNEMFBIBOIB);
	}
};
