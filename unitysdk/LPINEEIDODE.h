#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

#define LPINEEIDODE_FLJLACBDNKB_OFFSET UNITYSDK_OFFSET(0x6F9620)
#define LPINEEIDODE_JEHELAEMPOG_OFFSET UNITYSDK_OFFSET(0x5F1740)
#define LPINEEIDODE_JHPLAALDCIC_OFFSET UNITYSDK_OFFSET(0x358B00)
#define LPINEEIDODE_LJCMPDFIOMF_OFFSET UNITYSDK_OFFSET(0x408580)
#define LPINEEIDODE_MACDFIBECNH_OFFSET UNITYSDK_OFFSET(0x282350)
#define LPINEEIDODE_PHNGJLJLMGJ_OFFSET UNITYSDK_OFFSET(0x411A70)
#define LPINEEIDODE_PPHKDIPJILK_OFFSET UNITYSDK_OFFSET(0x5C7530)
#define LPINEEIDODE__CTOR_OFFSET UNITYSDK_OFFSET(0x8CFAF0)

inline static constexpr unsigned int LPINEEIDODE_TypeDefinitionIndex = 93822;

struct alignas(8) LPINEEIDODE
{
	::System::ValueTuple_2<::System::Int32, ::System::Int32> _KKMFMCNEIIJ_k__BackingField; // 0x10
	::System::Single _NCHIBLJKDFN_k__BackingField; // 0x18
	::System::Single _KABIFBOLECI_k__BackingField; // 0x1C

	::System::Void _ctor(::System::ValueTuple_2<::System::Int32, ::System::Int32> NIPCPCJIPOP, ::System::Single LMLPPLMKLFL, ::System::Single DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LPINEEIDODE__CTOR_OFFSET))(this, NIPCPCJIPOP, LMLPPLMKLFL, DMIAICJPPDL);
	}

	::System::Single PHNGJLJLMGJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPINEEIDODE_PHNGJLJLMGJ_OFFSET))(this);
	}

	::System::Void PPHKDIPJILK(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPINEEIDODE_PPHKDIPJILK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> MACDFIBECNH()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + LPINEEIDODE_MACDFIBECNH_OFFSET))(this);
	}

	::System::Void JHPLAALDCIC(::System::ValueTuple_2<::System::Int32, ::System::Int32> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + LPINEEIDODE_JHPLAALDCIC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JEHELAEMPOG(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPINEEIDODE_JEHELAEMPOG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single LJCMPDFIOMF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPINEEIDODE_LJCMPDFIOMF_OFFSET))(this);
	}

	::System::Single FLJLACBDNKB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPINEEIDODE_FLJLACBDNKB_OFFSET))(this);
	}
};
