#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGENEONNBML;
class GMIFBFGDGJK;
class IFBFJDCECML;
class LMIOHCMPBJB;
class PBGNKMMDBGD;
namespace RPG::GameCore { class AIConfig; }
namespace RPG::GameCore { class CakeRaceAoeConfig; }
namespace RPG::GameCore { class CakeRaceCatAIConfig; }
namespace RPG::GameCore { class CakeRaceCatRow; }
namespace RPG::GameCore { class CakeRacePickupItemConfig; }
namespace RPG::GameCore { class CakeRaceRegionCellConfig; }
namespace RPG::GameCore { class CakeRaceRegionConfig; }
namespace System { class String; }

#define NHDIFJHFKLC_AIIMKGEDNEK_OFFSET UNITYSDK_OFFSET(0x1C799E60)
#define NHDIFJHFKLC_BCHKIDPMIOJ_OFFSET UNITYSDK_OFFSET(0x1C799580)
#define NHDIFJHFKLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7964F0)
#define NHDIFJHFKLC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C796500)
#define NHDIFJHFKLC_FAHOHMDDCNP_OFFSET UNITYSDK_OFFSET(0x1C79A060)
#define NHDIFJHFKLC_FBEIOCJNOFE_OFFSET UNITYSDK_OFFSET(0x1C797040)
#define NHDIFJHFKLC_GFOEOBHDKDH_OFFSET UNITYSDK_OFFSET(0x1C798610)
#define NHDIFJHFKLC_GIDHHFJNPIK_OFFSET UNITYSDK_OFFSET(0x1C796550)
#define NHDIFJHFKLC_IAHKGFKIMOO_OFFSET UNITYSDK_OFFSET(0x1C7965D0)
#define NHDIFJHFKLC_ICBMNOPJLLF_OFFSET UNITYSDK_OFFSET(0x1C79A300)
#define NHDIFJHFKLC_KIFHGGICNCM_OFFSET UNITYSDK_OFFSET(0x1C799270)
#define NHDIFJHFKLC_KKHHOFFNKIF_OFFSET UNITYSDK_OFFSET(0x1C7996D0)
#define NHDIFJHFKLC_MMKHLOJKKCF_OFFSET UNITYSDK_OFFSET(0x1C799110)
#define NHDIFJHFKLC_NBKDDHCGFNE_OFFSET UNITYSDK_OFFSET(0x1C7979C0)
#define NHDIFJHFKLC_NFADOBPFFPF_OFFSET UNITYSDK_OFFSET(0x1C796EC0)
#define NHDIFJHFKLC_NHHJKCLMOPB_OFFSET UNITYSDK_OFFSET(0x1C798410)
#define NHDIFJHFKLC_PMOKJAJHIAH_OFFSET UNITYSDK_OFFSET(0x1C799840)

	class NHDIFJHFKLC : public ::System::Object
	{
	public:
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x10
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x18
		::AGENEONNBML* HEJHGJIGEGK; // 0x20
		::System::Void _ctor(::AGENEONNBML* a1, ::PBGNKMMDBGD* a2, ::GMIFBFGDGJK* a3)
		{
			return ((::System::Void(*)(::PVOID, ::AGENEONNBML*, ::PBGNKMMDBGD*, ::GMIFBFGDGJK*))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_DISPOSE_OFFSET))(this);
		}

		::IFBFJDCECML* GIDHHFJNPIK()
		{
			return ((::IFBFJDCECML*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_GIDHHFJNPIK_OFFSET))(this);
		}

		::IFBFJDCECML* IAHKGFKIMOO(::RPG::GameCore::CakeRaceCatAIConfig* a1, ::RPG::GameCore::CakeRaceCatRow* a2, ::RPG::GameCore::AIConfig* a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Int32 a6)
		{
			return ((::IFBFJDCECML*(*)(::PVOID, ::RPG::GameCore::CakeRaceCatAIConfig*, ::RPG::GameCore::CakeRaceCatRow*, ::RPG::GameCore::AIConfig*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_IAHKGFKIMOO_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void NFADOBPFFPF(::RPG::GameCore::CakeRaceRegionConfig* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_NFADOBPFFPF_OFFSET))(this, a1, a2, a3);
		}

		::IFBFJDCECML* FBEIOCJNOFE(::RPG::GameCore::CakeRaceRegionCellConfig* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::IFBFJDCECML*(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionCellConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_FBEIOCJNOFE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NHHJKCLMOPB(::IFBFJDCECML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_NHHJKCLMOPB_OFFSET))(this, a1);
		}

		::IFBFJDCECML* GFOEOBHDKDH(::RPG::GameCore::CakeRaceRegionCellConfig* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::IFBFJDCECML*(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionCellConfig*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_GFOEOBHDKDH_OFFSET))(this, a1, a2, a3, a4);
		}

		::IFBFJDCECML* NBKDDHCGFNE(::RPG::GameCore::CakeRaceRegionCellConfig* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::IFBFJDCECML*(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionCellConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_NBKDDHCGFNE_OFFSET))(this, a1, a2, a3);
		}

		::IFBFJDCECML* MMKHLOJKKCF(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::RPG::GameCore::AIConfig* a4)
		{
			return ((::IFBFJDCECML*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::RPG::GameCore::AIConfig*))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_MMKHLOJKKCF_OFFSET))(this, a1, a2, a3, a4);
		}

		::IFBFJDCECML* KIFHGGICNCM(::RPG::GameCore::CakeRacePickupItemConfig* a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::UInt32 a4)
		{
			return ((::IFBFJDCECML*(*)(::PVOID, ::RPG::GameCore::CakeRacePickupItemConfig*, ::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_KIFHGGICNCM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 BCHKIDPMIOJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_BCHKIDPMIOJ_OFFSET))(this);
		}

		::System::Void KKHHOFFNKIF(::RPG::GameCore::CakeRaceRegionConfig* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_KKHHOFFNKIF_OFFSET))(this, a1, a2, a3);
		}

		::IFBFJDCECML* PMOKJAJHIAH(::RPG::GameCore::CakeRaceRegionCellConfig* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::IFBFJDCECML*(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionCellConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_PMOKJAJHIAH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AIIMKGEDNEK(::IFBFJDCECML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_AIIMKGEDNEK_OFFSET))(this, a1);
		}

		::IFBFJDCECML* FAHOHMDDCNP()
		{
			return ((::IFBFJDCECML*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_FAHOHMDDCNP_OFFSET))(this);
		}

		::System::Boolean ICBMNOPJLLF(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceAoeConfig* a2, ::LMIOHCMPBJB* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*, ::RPG::GameCore::CakeRaceAoeConfig*, ::LMIOHCMPBJB*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NHDIFJHFKLC_ICBMNOPJLLF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
