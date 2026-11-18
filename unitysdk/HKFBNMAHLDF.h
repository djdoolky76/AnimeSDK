#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Delegate; }

#define HKFBNMAHLDF_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x3D5A00)
#define HKFBNMAHLDF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x8619E0)
#define HKFBNMAHLDF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE96580)

inline static constexpr unsigned int HKFBNMAHLDF_TypeDefinitionIndex = 34763;

struct alignas(8) HKFBNMAHLDF
{
	static ::HKFBNMAHLDF* StaticGet_FGBLILBNEHG()
	{
		return (::HKFBNMAHLDF*)Il2CppClass::FromTypeDefinitionIndex(HKFBNMAHLDF_TypeDefinitionIndex)->GetStaticField(0x2A610);
	}
	::System::Delegate* MAACAKIDLJK; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKFBNMAHLDF__CCTOR_OFFSET))();
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFBNMAHLDF_NKDCADABLCL_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFBNMAHLDF_PHOADBJGFBE_OFFSET))(this);
	}
};
