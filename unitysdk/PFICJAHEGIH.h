#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABKHJBACHOO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FAKLBEIDKMD;
class FFCGHKGDAJF;
class GIJPBMMNJKO;
class PFICJAHEGIH;
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define PFICJAHEGIH_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xCAF2C00)
#define PFICJAHEGIH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCAF2810)
#define PFICJAHEGIH_CDFGGCGIKBM_OFFSET UNITYSDK_OFFSET(0xCAF5090)
#define PFICJAHEGIH_CHBMGMKAHCJ_OFFSET UNITYSDK_OFFSET(0xCAF42D0)
#define PFICJAHEGIH_CTOR_OFFSET UNITYSDK_OFFSET(0xCAF2A40)
#define PFICJAHEGIH_DEJMGAPBBID_OFFSET UNITYSDK_OFFSET(0xCAF5890)
#define PFICJAHEGIH_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xCAF2BC0)
#define PFICJAHEGIH_FGHDHHOEHHJ_OFFSET UNITYSDK_OFFSET(0xCAF32E0)
#define PFICJAHEGIH_GCKADCMDNJG_1_OFFSET UNITYSDK_OFFSET(0xCAF4570)
#define PFICJAHEGIH_GCKADCMDNJG_OFFSET UNITYSDK_OFFSET(0xCAF4400)
#define PFICJAHEGIH_GMIKIGIODJD_1_OFFSET UNITYSDK_OFFSET(0xCAF3420)
#define PFICJAHEGIH_GMIKIGIODJD_OFFSET UNITYSDK_OFFSET(0xCAF34B0)
#define PFICJAHEGIH_HAMGAFJLHFO_OFFSET UNITYSDK_OFFSET(0xCAF5400)
#define PFICJAHEGIH_HKMACLGCIIP_OFFSET UNITYSDK_OFFSET(0xCAF3D30)
#define PFICJAHEGIH_HLCFNABLEMC_OFFSET UNITYSDK_OFFSET(0xCAF3550)
#define PFICJAHEGIH_HMOIGKDGLFA_OFFSET UNITYSDK_OFFSET(0xCAF27D0)
#define PFICJAHEGIH_KGOGCDHEGEC_OFFSET UNITYSDK_OFFSET(0xCAF4C80)
#define PFICJAHEGIH_KPDFLKHJDPN_OFFSET UNITYSDK_OFFSET(0xCAF3BE0)
#define PFICJAHEGIH_MHJHIBFBPAB_OFFSET UNITYSDK_OFFSET(0xCAF3690)
#define PFICJAHEGIH_NFKOAJIPIGD_OFFSET UNITYSDK_OFFSET(0xCAF4AA0)
#define PFICJAHEGIH_OEJDGFGJIPK_1_OFFSET UNITYSDK_OFFSET(0xCAF4720)
#define PFICJAHEGIH_OEJDGFGJIPK_2_OFFSET UNITYSDK_OFFSET(0xCAF4920)
#define PFICJAHEGIH_OEJDGFGJIPK_OFFSET UNITYSDK_OFFSET(0xCAF3F20)
#define PFICJAHEGIH_OGJOHNGPGCP_OFFSET UNITYSDK_OFFSET(0xCAF41E0)
#define PFICJAHEGIH_PIHIIEAJLDE_OFFSET UNITYSDK_OFFSET(0xCAF4320)

inline static constexpr unsigned int PFICJAHEGIH_TypeDefinitionIndex = 76758;

	class PFICJAHEGIH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* DBEIHKOCALJ; // 0x10
		::System::Collections::Generic::Dictionary_2<::ABKHJBACHOO, ::System::UInt32>* HNKOBJBLIJC; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GIJPBMMNJKO*>* AKKODLGIOOC; // 0x20
		::FFCGHKGDAJF* DCOPELFHOLO; // 0x28
		::System::UInt32 OHBAMLJJGKA; // 0x30
		::System::Void _ctor(::FFCGHKGDAJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFCGHKGDAJF*))((::PBYTE)hIl2Cpp + PFICJAHEGIH_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::GIJPBMMNJKO*>* HMOIGKDGLFA()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::GIJPBMMNJKO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFICJAHEGIH_HMOIGKDGLFA_OFFSET))(this);
		}

		static ::PFICJAHEGIH* BPLPBPMEODA(::FFCGHKGDAJF* a1)
		{
			return ((::PFICJAHEGIH*(*)(::FFCGHKGDAJF*))((::PBYTE)hIl2Cpp + PFICJAHEGIH_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFICJAHEGIH_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFICJAHEGIH_BJMNKLGEMPM_OFFSET))(this);
		}

		::GIJPBMMNJKO* FGHDHHOEHHJ(::System::UInt32 a1)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFICJAHEGIH_FGHDHHOEHHJ_OFFSET))(this, a1);
		}

		::GIJPBMMNJKO* GMIKIGIODJD(::RPG::Client::NavMap::ITrackPointInfo* a1)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + PFICJAHEGIH_GMIKIGIODJD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::GIJPBMMNJKO*>* MHJHIBFBPAB(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::GIJPBMMNJKO*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PFICJAHEGIH_MHJHIBFBPAB_OFFSET))(this, a1);
		}

		::GIJPBMMNJKO* GMIKIGIODJD_1(::System::UInt32 a1)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFICJAHEGIH_GMIKIGIODJD_1_OFFSET))(this, a1);
		}

		::GIJPBMMNJKO* KPDFLKHJDPN(::System::String* a1)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PFICJAHEGIH_KPDFLKHJDPN_OFFSET))(this, a1);
		}

		::System::UInt32 HKMACLGCIIP(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PFICJAHEGIH_HKMACLGCIIP_OFFSET))(this, a1);
		}

		::GIJPBMMNJKO* HLCFNABLEMC(::ABKHJBACHOO a1)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::ABKHJBACHOO))((::PBYTE)hIl2Cpp + PFICJAHEGIH_HLCFNABLEMC_OFFSET))(this, a1);
		}

		::GIJPBMMNJKO* OGJOHNGPGCP(::ABKHJBACHOO a1)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::ABKHJBACHOO))((::PBYTE)hIl2Cpp + PFICJAHEGIH_OGJOHNGPGCP_OFFSET))(this, a1);
		}

		::System::UInt32 CHBMGMKAHCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFICJAHEGIH_CHBMGMKAHCJ_OFFSET))(this);
		}

		::GIJPBMMNJKO* PIHIIEAJLDE(::RPG::Client::NavMap::ITrackPointInfo* a1)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + PFICJAHEGIH_PIHIIEAJLDE_OFFSET))(this, a1);
		}

		::GIJPBMMNJKO* GCKADCMDNJG(::RPG::Client::NavMap::ITrackPointInfo* a1)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + PFICJAHEGIH_GCKADCMDNJG_OFFSET))(this, a1);
		}

		::GIJPBMMNJKO* GCKADCMDNJG_1(::UnityEngine::Vector3 a1)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PFICJAHEGIH_GCKADCMDNJG_1_OFFSET))(this, a1);
		}

		::GIJPBMMNJKO* OEJDGFGJIPK(::System::String* a1)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PFICJAHEGIH_OEJDGFGJIPK_OFFSET))(this, a1);
		}

		::GIJPBMMNJKO* OEJDGFGJIPK_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PFICJAHEGIH_OEJDGFGJIPK_1_OFFSET))(this, a1, a2);
		}

		::GIJPBMMNJKO* OEJDGFGJIPK_2(::FAKLBEIDKMD* a1)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::FAKLBEIDKMD*))((::PBYTE)hIl2Cpp + PFICJAHEGIH_OEJDGFGJIPK_2_OFFSET))(this, a1);
		}

		::GIJPBMMNJKO* NFKOAJIPIGD(::ABKHJBACHOO a1)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::ABKHJBACHOO))((::PBYTE)hIl2Cpp + PFICJAHEGIH_NFKOAJIPIGD_OFFSET))(this, a1);
		}

		::GIJPBMMNJKO* CDFGGCGIKBM(::ABKHJBACHOO a1)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::ABKHJBACHOO))((::PBYTE)hIl2Cpp + PFICJAHEGIH_CDFGGCGIKBM_OFFSET))(this, a1);
		}

		::System::Void KGOGCDHEGEC(::GIJPBMMNJKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIJPBMMNJKO*))((::PBYTE)hIl2Cpp + PFICJAHEGIH_KGOGCDHEGEC_OFFSET))(this, a1);
		}

		::System::Void HAMGAFJLHFO(::GIJPBMMNJKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIJPBMMNJKO*))((::PBYTE)hIl2Cpp + PFICJAHEGIH_HAMGAFJLHFO_OFFSET))(this, a1);
		}

		::System::Void DEJMGAPBBID(::GIJPBMMNJKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIJPBMMNJKO*))((::PBYTE)hIl2Cpp + PFICJAHEGIH_DEJMGAPBBID_OFFSET))(this, a1);
		}

	};
