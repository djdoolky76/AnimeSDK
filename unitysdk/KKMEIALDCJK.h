#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPCJLPMNJEL.h"

#define KKMEIALDCJK_CNEGHMJOODP_OFFSET UNITYSDK_OFFSET(0x15168F00)
#define KKMEIALDCJK_GPKCDBFOMNF_OFFSET UNITYSDK_OFFSET(0x15168DA0)
#define KKMEIALDCJK_NEEHEOAPJDF_OFFSET UNITYSDK_OFFSET(0x15168D50)
#define KKMEIALDCJK__CTOR_OFFSET UNITYSDK_OFFSET(0x15168EF0)

inline static constexpr unsigned int KKMEIALDCJK_TypeDefinitionIndex = 66508;

class KKMEIALDCJK : public ::LPCJLPMNJEL
{
public:
	::System::Int32 HCOIPNDKMEJ; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMEIALDCJK__CTOR_OFFSET))(this);
	}

	::System::Void NEEHEOAPJDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMEIALDCJK_NEEHEOAPJDF_OFFSET))(this);
	}

	::System::Void GPKCDBFOMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMEIALDCJK_GPKCDBFOMNF_OFFSET))(this);
	}

	::System::Void CNEGHMJOODP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMEIALDCJK_CNEGHMJOODP_OFFSET))(this);
	}
};
