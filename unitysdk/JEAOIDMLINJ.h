#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDHGEKBAEBE.h"
#include "unitysdk/PDHGEKBAEBE_IFOBEDHEDNH.h"

namespace System { class String; }
template <typename T> class DBMAHDDGMHM_1;
template <typename T> class JIOLFCAGOFH_1;

#define JEAOIDMLINJ_DINDGMLHGKA_OFFSET UNITYSDK_OFFSET(0x14A5A280)
#define JEAOIDMLINJ_GMIBJJHKEKM_OFFSET UNITYSDK_OFFSET(0x14A5A170)
#define JEAOIDMLINJ_KFPBKBFJLLM_OFFSET UNITYSDK_OFFSET(0x14A59D70)
#define JEAOIDMLINJ_LACIHFJMCFG_OFFSET UNITYSDK_OFFSET(0x14A59EA0)
#define JEAOIDMLINJ_LKNBCFOKJLO_OFFSET UNITYSDK_OFFSET(0x14A5A1F0)
#define JEAOIDMLINJ_NIIMDLHGGLK_OFFSET UNITYSDK_OFFSET(0x14A5A300)
#define JEAOIDMLINJ_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x14A59B40)
#define JEAOIDMLINJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14A59E90)

inline static constexpr unsigned int JEAOIDMLINJ_TypeDefinitionIndex = 69955;

class JEAOIDMLINJ : public ::PDHGEKBAEBE
{
public:
	::DBMAHDDGMHM_1<::System::Int32>* DGIAGIMPCEA; // 0xB0
	::JIOLFCAGOFH_1<::System::Boolean>* KOIELMLMGDM; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAOIDMLINJ__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAOIDMLINJ_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void KFPBKBFJLLM(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JEAOIDMLINJ_KFPBKBFJLLM_OFFSET))(this, ABHBKFJKINO);
	}

	::PDHGEKBAEBE_IFOBEDHEDNH LACIHFJMCFG()
	{
		return ((::PDHGEKBAEBE_IFOBEDHEDNH(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAOIDMLINJ_LACIHFJMCFG_OFFSET))(this);
	}

	::System::Boolean GMIBJJHKEKM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAOIDMLINJ_GMIBJJHKEKM_OFFSET))(this);
	}

	::System::Void LKNBCFOKJLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAOIDMLINJ_LKNBCFOKJLO_OFFSET))(this);
	}

	::System::Void DINDGMLHGKA(::System::Int32 BOBBHFPEPHC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JEAOIDMLINJ_DINDGMLHGKA_OFFSET))(this, BOBBHFPEPHC);
	}

	::System::String* NIIMDLHGGLK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAOIDMLINJ_NIIMDLHGGLK_OFFSET))(this);
	}
};
