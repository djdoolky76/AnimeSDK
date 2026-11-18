#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OHDFDAOKNHE.h"
#include "unitysdk/System/ValueType.h"

#define KNKLMAIENDF__CTOR_OFFSET UNITYSDK_OFFSET(0x771CC0)

inline static constexpr unsigned int KNKLMAIENDF_TypeDefinitionIndex = 46515;

struct alignas(4) KNKLMAIENDF
{
	::OHDFDAOKNHE AAEDPMHMDIK; // 0x10
	::System::Single DIJDGECHAFA; // 0x14
	::System::Int32 DFFBGMLDFOJ; // 0x18
	::System::Byte _padding0[0x4];
	::System::UInt64 ABEDAPFIKFO; // 0x20

	::System::Void _ctor(::OHDFDAOKNHE MIDGBLDKHMI, ::System::Single INFBOGLAJAE, ::System::Int32 FAKHCNLCBCE, ::System::UInt64 AJLEKPAGONP)
	{
		return ((::System::Void(*)(::PVOID, ::OHDFDAOKNHE, ::System::Single, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + KNKLMAIENDF__CTOR_OFFSET))(this, MIDGBLDKHMI, INFBOGLAJAE, FAKHCNLCBCE, AJLEKPAGONP);
	}
};
