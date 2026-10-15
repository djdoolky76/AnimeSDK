#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPerformanceCondition; }

#define BAFPCLJBKBD_CFDKGOMFNGA_OFFSET UNITYSDK_OFFSET(0x15BDAE60)
#define BAFPCLJBKBD_CTOR_OFFSET UNITYSDK_OFFSET(0x15BDA4A0)
#define BAFPCLJBKBD_DFOKFDBMEEO_OFFSET UNITYSDK_OFFSET(0x15BDA6A0)
#define BAFPCLJBKBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BDA5C0)
#define BAFPCLJBKBD_DNCFBGANPCD_OFFSET UNITYSDK_OFFSET(0x15BDB760)
#define BAFPCLJBKBD_GHCLHCKMGMB_OFFSET UNITYSDK_OFFSET(0x15BDB6B0)
#define BAFPCLJBKBD_GMFIDMIBPPB_OFFSET UNITYSDK_OFFSET(0x15BDBD40)
#define BAFPCLJBKBD_GODLOBCCAIO_OFFSET UNITYSDK_OFFSET(0x15BDC0D0)
#define BAFPCLJBKBD_HOODGGALJEL_OFFSET UNITYSDK_OFFSET(0x15BDB040)
#define BAFPCLJBKBD_JADOJOOOJNB_OFFSET UNITYSDK_OFFSET(0x15BDC8D0)
#define BAFPCLJBKBD_JGNNJKICJGF_OFFSET UNITYSDK_OFFSET(0x15BDBE40)
#define BAFPCLJBKBD_JKJLEKGNAEP_OFFSET UNITYSDK_OFFSET(0x15BDBA90)
#define BAFPCLJBKBD_KHGDMEBPDAP_OFFSET UNITYSDK_OFFSET(0x15BDA4E0)
#define BAFPCLJBKBD_KIGKKADGFCC_OFFSET UNITYSDK_OFFSET(0x15BDC340)
#define BAFPCLJBKBD_LJKLOKHHIEC_OFFSET UNITYSDK_OFFSET(0x15BDA780)
#define BAFPCLJBKBD_MGHBLMNCEMG_OFFSET UNITYSDK_OFFSET(0x15BDCA20)
#define BAFPCLJBKBD_MMDMMMCFHGO_OFFSET UNITYSDK_OFFSET(0x15BDC480)
#define BAFPCLJBKBD_OCNEKGGOIMG_OFFSET UNITYSDK_OFFSET(0x15BDB7E0)
#define BAFPCLJBKBD_OFDDFDGKNPJ_OFFSET UNITYSDK_OFFSET(0x15BDC6E0)
#define BAFPCLJBKBD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15BDADF0)
#define BAFPCLJBKBD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15BDAF10)
#define BAFPCLJBKBD_PIMHFOAHCPI_OFFSET UNITYSDK_OFFSET(0x15BDBA00)
#define BAFPCLJBKBD_TICK_OFFSET UNITYSDK_OFFSET(0x15BDAF60)

	class BAFPCLJBKBD : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* ICJPFMNDDDK; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::WaitPerformanceCondition* OFKGLJOAMLD; // 0x28
		::System::Boolean EELKHMGNMNB; // 0x30
		::System::Boolean ELNOBPACDPI; // 0x31
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
