#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKKPMDKOJML.h"
#include "unitysdk/HCBKBMKCBJO.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ABPDLNDJLME_ADBCMPKJFDL_OFFSET UNITYSDK_OFFSET(0x16438680)
#define ABPDLNDJLME_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x16438350)
#define ABPDLNDJLME_DFIBDGKNBMP_OFFSET UNITYSDK_OFFSET(0x16438660)
#define ABPDLNDJLME_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x16438340)
#define ABPDLNDJLME_HEMOHDFDKEG_OFFSET UNITYSDK_OFFSET(0x164385E0)
#define ABPDLNDJLME_IGGNMANJPHA_OFFSET UNITYSDK_OFFSET(0x16438690)
#define ABPDLNDJLME_JENCFBLNJBL_OFFSET UNITYSDK_OFFSET(0x16438360)
#define ABPDLNDJLME_KFBGNKBGKBK_OFFSET UNITYSDK_OFFSET(0x164384A0)
#define ABPDLNDJLME_KPHHGOOBPJE_OFFSET UNITYSDK_OFFSET(0x16438670)
#define ABPDLNDJLME_MEKEHBEEBPO_OFFSET UNITYSDK_OFFSET(0x16438330)
#define ABPDLNDJLME_PHJMCBIHIAK_OFFSET UNITYSDK_OFFSET(0x16438650)
#define ABPDLNDJLME__CTOR_OFFSET UNITYSDK_OFFSET(0x16438640)

inline static constexpr unsigned int ABPDLNDJLME_TypeDefinitionIndex = 53441;

class ABPDLNDJLME : public ::System::Object
{
public:
	::System::Int32 _MPMFPODFDNK_k__BackingField; // 0x10
	::System::Int32 _OECPHFKMKNJ_k__BackingField; // 0x14
	::System::Int32 _HBLEIHCPMMP_k__BackingField; // 0x18
	::FKKPMDKOJML _AHDHFHEMLAO_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPDLNDJLME__CTOR_OFFSET))(this);
	}

	::System::Int32 MEKEHBEEBPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPDLNDJLME_MEKEHBEEBPO_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPDLNDJLME_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPDLNDJLME_APCKPKCNFJE_OFFSET))(this);
	}

	::System::String* JENCFBLNJBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPDLNDJLME_JENCFBLNJBL_OFFSET))(this);
	}

	::System::Int32 KFBGNKBGKBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPDLNDJLME_KFBGNKBGKBK_OFFSET))(this);
	}

	::HCBKBMKCBJO HEMOHDFDKEG()
	{
		return ((::HCBKBMKCBJO(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPDLNDJLME_HEMOHDFDKEG_OFFSET))(this);
	}

	::System::Void PHJMCBIHIAK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABPDLNDJLME_PHJMCBIHIAK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DFIBDGKNBMP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABPDLNDJLME_DFIBDGKNBMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::FKKPMDKOJML KPHHGOOBPJE()
	{
		return ((::FKKPMDKOJML(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPDLNDJLME_KPHHGOOBPJE_OFFSET))(this);
	}

	::System::Void ADBCMPKJFDL(::FKKPMDKOJML EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FKKPMDKOJML))((::PBYTE)hIl2Cpp + ABPDLNDJLME_ADBCMPKJFDL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IGGNMANJPHA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABPDLNDJLME_IGGNMANJPHA_OFFSET))(this, EGEGIMGMJHN);
	}
};
