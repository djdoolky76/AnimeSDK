#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPerformanceCondition; }

#define BAFPCLJBKBD_CFDKGOMFNGA_OFFSET UNITYSDK_OFFSET(0x15BCEDF0)
#define BAFPCLJBKBD_CTOR_OFFSET UNITYSDK_OFFSET(0x15BCE470)
#define BAFPCLJBKBD_DFOKFDBMEEO_OFFSET UNITYSDK_OFFSET(0x15BCE670)
#define BAFPCLJBKBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BCE590)
#define BAFPCLJBKBD_DNCFBGANPCD_OFFSET UNITYSDK_OFFSET(0x15BCF6B0)
#define BAFPCLJBKBD_GHCLHCKMGMB_OFFSET UNITYSDK_OFFSET(0x15BCF600)
#define BAFPCLJBKBD_GMFIDMIBPPB_OFFSET UNITYSDK_OFFSET(0x15BCFC90)
#define BAFPCLJBKBD_GODLOBCCAIO_OFFSET UNITYSDK_OFFSET(0x15BD0010)
#define BAFPCLJBKBD_HOODGGALJEL_OFFSET UNITYSDK_OFFSET(0x15BCEFD0)
#define BAFPCLJBKBD_JADOJOOOJNB_OFFSET UNITYSDK_OFFSET(0x15BD0810)
#define BAFPCLJBKBD_JGNNJKICJGF_OFFSET UNITYSDK_OFFSET(0x15BCFD80)
#define BAFPCLJBKBD_JKJLEKGNAEP_OFFSET UNITYSDK_OFFSET(0x15BCF9E0)
#define BAFPCLJBKBD_KHGDMEBPDAP_OFFSET UNITYSDK_OFFSET(0x15BCE4B0)
#define BAFPCLJBKBD_KIGKKADGFCC_OFFSET UNITYSDK_OFFSET(0x15BD0280)
#define BAFPCLJBKBD_LJKLOKHHIEC_OFFSET UNITYSDK_OFFSET(0x15BCE750)
#define BAFPCLJBKBD_MGHBLMNCEMG_OFFSET UNITYSDK_OFFSET(0x15BD0960)
#define BAFPCLJBKBD_MMDMMMCFHGO_OFFSET UNITYSDK_OFFSET(0x15BD03C0)
#define BAFPCLJBKBD_OCNEKGGOIMG_OFFSET UNITYSDK_OFFSET(0x15BCF730)
#define BAFPCLJBKBD_OFDDFDGKNPJ_OFFSET UNITYSDK_OFFSET(0x15BD0620)
#define BAFPCLJBKBD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15BCED80)
#define BAFPCLJBKBD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15BCEEA0)
#define BAFPCLJBKBD_PIMHFOAHCPI_OFFSET UNITYSDK_OFFSET(0x15BCF950)
#define BAFPCLJBKBD_TICK_OFFSET UNITYSDK_OFFSET(0x15BCEEF0)

inline static constexpr unsigned int BAFPCLJBKBD_TypeDefinitionIndex = 55811;

	class BAFPCLJBKBD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* ICJPFMNDDDK; // 0x20
		::RPG::GameCore::WaitPerformanceCondition* OFKGLJOAMLD; // 0x28
		::System::Boolean ELNOBPACDPI; // 0x30
		::System::Boolean EELKHMGNMNB; // 0x31
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPerformanceCondition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPerformanceCondition*))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_TICK_OFFSET))(this, a1);
		}

		::System::Void CFDKGOMFNGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_CFDKGOMFNGA_OFFSET))(this);
		}

		::System::Void HOODGGALJEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_HOODGGALJEL_OFFSET))(this);
		}

		::System::Void LJKLOKHHIEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_LJKLOKHHIEC_OFFSET))(this);
		}

		::System::Void GHCLHCKMGMB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_GHCLHCKMGMB_OFFSET))(this, a1);
		}

		::System::Void OCNEKGGOIMG(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_OCNEKGGOIMG_OFFSET))(this, a1);
		}

		::System::Void PIMHFOAHCPI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_PIMHFOAHCPI_OFFSET))(this, a1);
		}

		::System::Void JKJLEKGNAEP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_JKJLEKGNAEP_OFFSET))(this, a1);
		}

		::System::Void GMFIDMIBPPB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_GMFIDMIBPPB_OFFSET))(this, a1);
		}

		::System::Void JGNNJKICJGF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_JGNNJKICJGF_OFFSET))(this, a1);
		}

		::System::Void GODLOBCCAIO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_GODLOBCCAIO_OFFSET))(this, a1);
		}

		::System::Void KIGKKADGFCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_KIGKKADGFCC_OFFSET))(this, a1);
		}

		::System::Void MMDMMMCFHGO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_MMDMMMCFHGO_OFFSET))(this, a1);
		}

		::System::Void OFDDFDGKNPJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_OFDDFDGKNPJ_OFFSET))(this, a1);
		}

		::System::Void DNCFBGANPCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_DNCFBGANPCD_OFFSET))(this);
		}

		::System::Void KHGDMEBPDAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_KHGDMEBPDAP_OFFSET))(this);
		}

		::System::Void DFOKFDBMEEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_DFOKFDBMEEO_OFFSET))(this);
		}

		::System::Void JADOJOOOJNB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_JADOJOOOJNB_OFFSET))(this, a1);
		}

		::System::Void MGHBLMNCEMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFPCLJBKBD_MGHBLMNCEMG_OFFSET))(this);
		}

	};
