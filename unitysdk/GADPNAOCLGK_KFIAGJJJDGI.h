#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define GADPNAOCLGK_KFIAGJJJDGI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x359320)
#define GADPNAOCLGK_KFIAGJJJDGI_DPJGFIFIKOM_OFFSET UNITYSDK_OFFSET(0x359150)
#define GADPNAOCLGK_KFIAGJJJDGI_MALEOOPKNMI_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define GADPNAOCLGK_KFIAGJJJDGI_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define GADPNAOCLGK_KFIAGJJJDGI__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int GADPNAOCLGK_KFIAGJJJDGI_TypeDefinitionIndex = 56916;

struct alignas(4) GADPNAOCLGK_KFIAGJJJDGI
{
	::System::Int32 _JFPALPENGNB_k__BackingField; // 0x10
	::System::Int32 _LOPPOOPINOI_k__BackingField; // 0x14

	::System::Void _ctor(::System::Int32 MGMDLMBEDJF, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GADPNAOCLGK_KFIAGJJJDGI__CTOR_OFFSET))(this, MGMDLMBEDJF, JHFKDGBCOBA);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GADPNAOCLGK_KFIAGJJJDGI_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GADPNAOCLGK_KFIAGJJJDGI_ACOEONABOJL_OFFSET))(this);
	}

	::System::Void MALEOOPKNMI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GADPNAOCLGK_KFIAGJJJDGI_MALEOOPKNMI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DPJGFIFIKOM(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GADPNAOCLGK_KFIAGJJJDGI_DPJGFIFIKOM_OFFSET))(this, EGEGIMGMJHN);
	}
};
