#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ECameraMode.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/RPG/GameCore/B51RacingTREventType.h"
#include "unitysdk/BJHNJIPKPHN.h"
#include "unitysdk/GHMJNBPDMKL.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/RoadRashMapStartLine.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/RoadRashMapStartPoint.h"
#include "unitysdk/UnityEngine/Bounds.h"
class BAHEINMHOAC;
class BJIACBNKCCJ;
class CEGFCKKCEHM;
class DLAPDGELEPN;
class FGKKEIBIPDL;
class GHMGGIHEHJE;
class HPMECOPBDBE;
class IKALAIILPEK;
class JDPOALIDGNK;
class KEJFFGDKDJL;
class KKPIINMGOMA;
class LIBEBAKBAOM;
class MJHPMAOIGPN;
class PGEMELICKOP;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define JIJBCGDANLJ_AAMPILKFOAM_OFFSET UNITYSDK_OFFSET(0x1CB709E0)
#define JIJBCGDANLJ_AFMFBBFLKBD_OFFSET UNITYSDK_OFFSET(0x1CB70E50)
#define JIJBCGDANLJ_AIBPDNOHHMD_OFFSET UNITYSDK_OFFSET(0x1CB71970)
#define JIJBCGDANLJ_APDNLDEHKDK_OFFSET UNITYSDK_OFFSET(0x1CB70900)
#define JIJBCGDANLJ_BBGLOFEAAKP_OFFSET UNITYSDK_OFFSET(0x1CB70C00)
#define JIJBCGDANLJ_BBOHIFAOBAN_OFFSET UNITYSDK_OFFSET(0x1CB723B0)
#define JIJBCGDANLJ_BEOBOEPOAFO_OFFSET UNITYSDK_OFFSET(0x1CB705B0)
#define JIJBCGDANLJ_BFODFEKBKFK_OFFSET UNITYSDK_OFFSET(0x1CB71E60)
#define JIJBCGDANLJ_BHGAGFBEAIC_OFFSET UNITYSDK_OFFSET(0x1CB72050)
#define JIJBCGDANLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB72BF0)
#define JIJBCGDANLJ_DHBKFLDAGAJ_OFFSET UNITYSDK_OFFSET(0x1CB719F0)
#define JIJBCGDANLJ_EADAPEMOEPM_OFFSET UNITYSDK_OFFSET(0x1CB707B0)
#define JIJBCGDANLJ_EALEIOPBJCM_OFFSET UNITYSDK_OFFSET(0x1CB71E40)
#define JIJBCGDANLJ_EDDNDBKJMFI_OFFSET UNITYSDK_OFFSET(0x1CB71B90)
#define JIJBCGDANLJ_EGAODJAMNFK_OFFSET UNITYSDK_OFFSET(0x1CB70A60)
#define JIJBCGDANLJ_FKGONBOHBCL_OFFSET UNITYSDK_OFFSET(0x1CB70EB0)
#define JIJBCGDANLJ_FNDEJKPKHHA_OFFSET UNITYSDK_OFFSET(0x1CB704D0)
#define JIJBCGDANLJ_GETABILITYMATCHER_OFFSET UNITYSDK_OFFSET(0x1CB72B50)
#define JIJBCGDANLJ_GGPBLAKELPC_OFFSET UNITYSDK_OFFSET(0x1CB710D0)
#define JIJBCGDANLJ_GIOILNGEEBB_OFFSET UNITYSDK_OFFSET(0x1CB70D10)
#define JIJBCGDANLJ_GOCAMFCKNMC_OFFSET UNITYSDK_OFFSET(0x1CB713A0)
#define JIJBCGDANLJ_GPJPNMNLODF_OFFSET UNITYSDK_OFFSET(0x1CB72190)
#define JIJBCGDANLJ_HFADKIHDAOF_OFFSET UNITYSDK_OFFSET(0x1CB71D00)
#define JIJBCGDANLJ_HNEIMMFDJEM_OFFSET UNITYSDK_OFFSET(0x1CB71400)
#define JIJBCGDANLJ_IEMCOAAFHEJ_OFFSET UNITYSDK_OFFSET(0x1CB71890)
#define JIJBCGDANLJ_IGEHEPDDJJF_OFFSET UNITYSDK_OFFSET(0x1CB72130)
#define JIJBCGDANLJ_IHFELJNDGHE_OFFSET UNITYSDK_OFFSET(0x1CB70ED0)
#define JIJBCGDANLJ_IHFIBMCBGKP_OFFSET UNITYSDK_OFFSET(0x1CB70630)
#define JIJBCGDANLJ_IJJGOHDADID_OFFSET UNITYSDK_OFFSET(0x1CB71650)
#define JIJBCGDANLJ_JGJKKAMDHPF_OFFSET UNITYSDK_OFFSET(0x1CB72550)
#define JIJBCGDANLJ_JPMLHJBBDLF_OFFSET UNITYSDK_OFFSET(0x1CB72570)
#define JIJBCGDANLJ_KALDOAAHFNL_OFFSET UNITYSDK_OFFSET(0x1CB71FF0)
#define JIJBCGDANLJ_KJEPLNLONAL_OFFSET UNITYSDK_OFFSET(0x1CB72300)
#define JIJBCGDANLJ_KNLEGBLOJAL_OFFSET UNITYSDK_OFFSET(0x1CB71F70)
#define JIJBCGDANLJ_LEPBHGNEMKE_OFFSET UNITYSDK_OFFSET(0x1CB708A0)
#define JIJBCGDANLJ_LNGKMONNCLC_OFFSET UNITYSDK_OFFSET(0x1CB71830)
#define JIJBCGDANLJ_LPIFIONAENK_OFFSET UNITYSDK_OFFSET(0x1CB712C0)
#define JIJBCGDANLJ_MGFDCMGNPLB_OFFSET UNITYSDK_OFFSET(0x1CB72410)
#define JIJBCGDANLJ_MIALDCOACIK_OFFSET UNITYSDK_OFFSET(0x1CB70610)
#define JIJBCGDANLJ_MJHHOLPDPCC_OFFSET UNITYSDK_OFFSET(0x1CB72830)
#define JIJBCGDANLJ_NAPKMGLIGOK_OFFSET UNITYSDK_OFFSET(0x1CB719D0)
#define JIJBCGDANLJ_NCPLDDEHHBB_OFFSET UNITYSDK_OFFSET(0x1CB71260)
#define JIJBCGDANLJ_NGMICPMGLLF_OFFSET UNITYSDK_OFFSET(0x1CB70D70)
#define JIJBCGDANLJ_OECEEJAONKH_OFFSET UNITYSDK_OFFSET(0x1CB71DE0)
#define JIJBCGDANLJ_OEDOGADDCDA_OFFSET UNITYSDK_OFFSET(0x1CB724F0)
#define JIJBCGDANLJ_PCOAAJOCHAA_OFFSET UNITYSDK_OFFSET(0x1CB71CA0)
#define JIJBCGDANLJ_PEFKDIMCLED_OFFSET UNITYSDK_OFFSET(0x1CB71420)
#define JIJBCGDANLJ_PNDHODMOGIM_OFFSET UNITYSDK_OFFSET(0x1CB72AF0)
#define JIJBCGDANLJ_POBPBGGLAIB_OFFSET UNITYSDK_OFFSET(0x1CB70A40)
#define JIJBCGDANLJ_PPIEDIOPCCM_OFFSET UNITYSDK_OFFSET(0x1CB721B0)

inline static constexpr unsigned int JIJBCGDANLJ_TypeDefinitionIndex = 42616;

	class JIJBCGDANLJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_CTOR_OFFSET))(this);
		}

		::GHMGGIHEHJE* FNDEJKPKHHA()
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_FNDEJKPKHHA_OFFSET))(this);
		}

		::MJHPMAOIGPN* BEOBOEPOAFO()
		{
			return ((::MJHPMAOIGPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_BEOBOEPOAFO_OFFSET))(this);
		}

		::System::Boolean MIALDCOACIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_MIALDCOACIK_OFFSET))(this);
		}

		::GHMGGIHEHJE* IHFIBMCBGKP(::RPG::Client::LittleGame::RoadRash::ECameraMode a1, ::UnityEngine::Transform* a2, ::FGKKEIBIPDL* a3, ::System::Single a4, ::System::Single a5, ::BJHNJIPKPHN a6)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::ECameraMode, ::UnityEngine::Transform*, ::FGKKEIBIPDL*, ::System::Single, ::System::Single, ::BJHNJIPKPHN))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_IHFIBMCBGKP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EADAPEMOEPM(::RPG::Client::LittleGame::RoadRash::ECameraMode a1, ::UnityEngine::Transform* a2, ::FGKKEIBIPDL* a3, ::System::Single a4, ::System::Single a5, ::BJHNJIPKPHN a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::ECameraMode, ::UnityEngine::Transform*, ::FGKKEIBIPDL*, ::System::Single, ::System::Single, ::BJHNJIPKPHN))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_EADAPEMOEPM_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void LEPBHGNEMKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_LEPBHGNEMKE_OFFSET))(this);
		}

		::GHMGGIHEHJE* APDNLDEHKDK()
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_APDNLDEHKDK_OFFSET))(this);
		}

		::KKPIINMGOMA* AAMPILKFOAM()
		{
			return ((::KKPIINMGOMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_AAMPILKFOAM_OFFSET))(this);
		}

		::System::Boolean POBPBGGLAIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_POBPBGGLAIB_OFFSET))(this);
		}

		::GHMGGIHEHJE* EGAODJAMNFK(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_EGAODJAMNFK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void BBGLOFEAAKP(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_BBGLOFEAAKP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void GIOILNGEEBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_GIOILNGEEBB_OFFSET))(this);
		}

		::GHMGGIHEHJE* NGMICPMGLLF()
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_NGMICPMGLLF_OFFSET))(this);
		}

		::CEGFCKKCEHM* AFMFBBFLKBD()
		{
			return ((::CEGFCKKCEHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_AFMFBBFLKBD_OFFSET))(this);
		}

		::System::Boolean FKGONBOHBCL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_FKGONBOHBCL_OFFSET))(this);
		}

		::GHMGGIHEHJE* IHFELJNDGHE(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Boolean a12)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_IHFELJNDGHE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void GGPBLAKELPC(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Boolean a12)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_GGPBLAKELPC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void NCPLDDEHHBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_NCPLDDEHHBB_OFFSET))(this);
		}

		::GHMGGIHEHJE* LPIFIONAENK()
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_LPIFIONAENK_OFFSET))(this);
		}

		::KEJFFGDKDJL* GOCAMFCKNMC()
		{
			return ((::KEJFFGDKDJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_GOCAMFCKNMC_OFFSET))(this);
		}

		::System::Boolean HNEIMMFDJEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_HNEIMMFDJEM_OFFSET))(this);
		}

		::GHMGGIHEHJE* PEFKDIMCLED(::UnityEngine::Transform* a1, ::Il2CppArray<::BJIACBNKCCJ*>* a2, ::System::Single a3, ::RPG::Client::LittleGame::RoadRash::RoadRashMapStartLine a4, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashMapStartPoint>* a5, ::UnityEngine::Bounds a6, ::Il2CppArray<::LIBEBAKBAOM*>* a7, ::Il2CppArray<::HPMECOPBDBE*>* a8, ::Il2CppArray<::PGEMELICKOP*>* a9)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::BJIACBNKCCJ*>*, ::System::Single, ::RPG::Client::LittleGame::RoadRash::RoadRashMapStartLine, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashMapStartPoint>*, ::UnityEngine::Bounds, ::Il2CppArray<::LIBEBAKBAOM*>*, ::Il2CppArray<::HPMECOPBDBE*>*, ::Il2CppArray<::PGEMELICKOP*>*))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_PEFKDIMCLED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void IJJGOHDADID(::UnityEngine::Transform* a1, ::Il2CppArray<::BJIACBNKCCJ*>* a2, ::System::Single a3, ::RPG::Client::LittleGame::RoadRash::RoadRashMapStartLine a4, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashMapStartPoint>* a5, ::UnityEngine::Bounds a6, ::Il2CppArray<::LIBEBAKBAOM*>* a7, ::Il2CppArray<::HPMECOPBDBE*>* a8, ::Il2CppArray<::PGEMELICKOP*>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::BJIACBNKCCJ*>*, ::System::Single, ::RPG::Client::LittleGame::RoadRash::RoadRashMapStartLine, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashMapStartPoint>*, ::UnityEngine::Bounds, ::Il2CppArray<::LIBEBAKBAOM*>*, ::Il2CppArray<::HPMECOPBDBE*>*, ::Il2CppArray<::PGEMELICKOP*>*))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_IJJGOHDADID_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void LNGKMONNCLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_LNGKMONNCLC_OFFSET))(this);
		}

		::GHMGGIHEHJE* IEMCOAAFHEJ()
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_IEMCOAAFHEJ_OFFSET))(this);
		}

		::IKALAIILPEK* AIBPDNOHHMD()
		{
			return ((::IKALAIILPEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_AIBPDNOHHMD_OFFSET))(this);
		}

		::System::Boolean NAPKMGLIGOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_NAPKMGLIGOK_OFFSET))(this);
		}

		::GHMGGIHEHJE* DHBKFLDAGAJ(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::UInt32 a8)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_DHBKFLDAGAJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void EDDNDBKJMFI(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::UInt32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_EDDNDBKJMFI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void PCOAAJOCHAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_PCOAAJOCHAA_OFFSET))(this);
		}

		::GHMGGIHEHJE* HFADKIHDAOF()
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_HFADKIHDAOF_OFFSET))(this);
		}

		::DLAPDGELEPN* OECEEJAONKH()
		{
			return ((::DLAPDGELEPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_OECEEJAONKH_OFFSET))(this);
		}

		::System::Boolean EALEIOPBJCM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_EALEIOPBJCM_OFFSET))(this);
		}

		::GHMGGIHEHJE* BFODFEKBKFK(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_BFODFEKBKFK_OFFSET))(this, a1, a2);
		}

		::System::Void KNLEGBLOJAL(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_KNLEGBLOJAL_OFFSET))(this, a1, a2);
		}

		::System::Void KALDOAAHFNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_KALDOAAHFNL_OFFSET))(this);
		}

		::GHMGGIHEHJE* BHGAGFBEAIC()
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_BHGAGFBEAIC_OFFSET))(this);
		}

		::JDPOALIDGNK* IGEHEPDDJJF()
		{
			return ((::JDPOALIDGNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_IGEHEPDDJJF_OFFSET))(this);
		}

		::System::Boolean GPJPNMNLODF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_GPJPNMNLODF_OFFSET))(this);
		}

		::GHMGGIHEHJE* PPIEDIOPCCM(::System::Single a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingTREventType, ::System::Single>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3, ::System::Collections::Generic::List_1<::GHMJNBPDMKL>* a4)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::System::Single, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingTREventType, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::List_1<::GHMJNBPDMKL>*))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_PPIEDIOPCCM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KJEPLNLONAL(::System::Single a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingTREventType, ::System::Single>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3, ::System::Collections::Generic::List_1<::GHMJNBPDMKL>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingTREventType, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::List_1<::GHMJNBPDMKL>*))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_KJEPLNLONAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BBOHIFAOBAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_BBOHIFAOBAN_OFFSET))(this);
		}

		::GHMGGIHEHJE* MGFDCMGNPLB()
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_MGFDCMGNPLB_OFFSET))(this);
		}

		::BAHEINMHOAC* OEDOGADDCDA()
		{
			return ((::BAHEINMHOAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_OEDOGADDCDA_OFFSET))(this);
		}

		::System::Boolean JGJKKAMDHPF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_JGJKKAMDHPF_OFFSET))(this);
		}

		::GHMGGIHEHJE* JPMLHJBBDLF(::System::Boolean a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Single a5, ::RPG::Client::LittleGame::RoadRash::EEngineState a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Single a11, ::System::Boolean a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::System::Boolean a17, ::System::Int32 a18)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Single, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_JPMLHJBBDLF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
		}

		::System::Void MJHHOLPDPCC(::System::Boolean a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Single a5, ::RPG::Client::LittleGame::RoadRash::EEngineState a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Single a11, ::System::Boolean a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::System::Boolean a17, ::System::Int32 a18)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Single, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_MJHHOLPDPCC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
		}

		::System::Void PNDHODMOGIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_PNDHODMOGIM_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::GHMGGIHEHJE*>* GetAbilityMatcher()
		{
			return ((::Entitas::IMatcher_1<::GHMGGIHEHJE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJBCGDANLJ_GETABILITYMATCHER_OFFSET))(this);
		}

	};
