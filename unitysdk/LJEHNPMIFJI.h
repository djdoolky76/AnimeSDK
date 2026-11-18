#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAKHLPLDGNA.h"
#include "unitysdk/HCBKBMKCBJO.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define LJEHNPMIFJI_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x16C5EE20)
#define LJEHNPMIFJI_DFIBDGKNBMP_OFFSET UNITYSDK_OFFSET(0x16C5F000)
#define LJEHNPMIFJI_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x16C5EE10)
#define LJEHNPMIFJI_HEMOHDFDKEG_OFFSET UNITYSDK_OFFSET(0x16C5EF80)
#define LJEHNPMIFJI_IGGNMANJPHA_OFFSET UNITYSDK_OFFSET(0x16C5F010)
#define LJEHNPMIFJI_JENCFBLNJBL_OFFSET UNITYSDK_OFFSET(0x16C5EE30)
#define LJEHNPMIFJI_JHENBHHNHCK_OFFSET UNITYSDK_OFFSET(0x16C5F020)
#define LJEHNPMIFJI_KFBGNKBGKBK_OFFSET UNITYSDK_OFFSET(0x16C5EF70)
#define LJEHNPMIFJI_MEKEHBEEBPO_OFFSET UNITYSDK_OFFSET(0x16C5EE00)
#define LJEHNPMIFJI_MNMAHDHCADA_OFFSET UNITYSDK_OFFSET(0x16C5F030)
#define LJEHNPMIFJI_PHJMCBIHIAK_OFFSET UNITYSDK_OFFSET(0x16C5EFF0)
#define LJEHNPMIFJI__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5EFE0)

inline static constexpr unsigned int LJEHNPMIFJI_TypeDefinitionIndex = 84380;

class LJEHNPMIFJI : public ::System::Object
{
public:
	// static const ::System::Int32 IHFONOLBMJL = 0x5; // 0x0
	::System::Int32 _HBLEIHCPMMP_k__BackingField; // 0x10
	::DAKHLPLDGNA _KEAHEMCFMFE_k__BackingField; // 0x14
	::System::Int32 _OECPHFKMKNJ_k__BackingField; // 0x18
	::System::Int32 _MPMFPODFDNK_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHNPMIFJI__CTOR_OFFSET))(this);
	}

	::System::Int32 MEKEHBEEBPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHNPMIFJI_MEKEHBEEBPO_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHNPMIFJI_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHNPMIFJI_APCKPKCNFJE_OFFSET))(this);
	}

	::System::String* JENCFBLNJBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHNPMIFJI_JENCFBLNJBL_OFFSET))(this);
	}

	::System::Int32 KFBGNKBGKBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHNPMIFJI_KFBGNKBGKBK_OFFSET))(this);
	}

	::HCBKBMKCBJO HEMOHDFDKEG()
	{
		return ((::HCBKBMKCBJO(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHNPMIFJI_HEMOHDFDKEG_OFFSET))(this);
	}

	::System::Void PHJMCBIHIAK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJEHNPMIFJI_PHJMCBIHIAK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DFIBDGKNBMP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJEHNPMIFJI_DFIBDGKNBMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IGGNMANJPHA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJEHNPMIFJI_IGGNMANJPHA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JHENBHHNHCK(::DAKHLPLDGNA EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DAKHLPLDGNA))((::PBYTE)hIl2Cpp + LJEHNPMIFJI_JHENBHHNHCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::DAKHLPLDGNA MNMAHDHCADA()
	{
		return ((::DAKHLPLDGNA(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHNPMIFJI_MNMAHDHCADA_OFFSET))(this);
	}
};
