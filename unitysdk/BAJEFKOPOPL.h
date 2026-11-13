#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/RPG/GameCore/RtSkillUseResult.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/OKIBEPMJGMH.h"
class BGMKDGACBNI;
class CENEFPOMFKG;
class ILMMNCLCDIM;
class IOGHOHIBHEJ;
class KKCMBNCHOJJ;
class LCCBPDIHMBI;
class MHLFFIDFHLA;
class MJNGFEGNCOA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { template <typename T> class SafeEventListener_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BAJEFKOPOPL_AAMNIEFKMAP_OFFSET UNITYSDK_OFFSET(0x199DB160)
#define BAJEFKOPOPL_AJCOBAJEMGP_OFFSET UNITYSDK_OFFSET(0x199DA170)
#define BAJEFKOPOPL_ANAGAHONMKO_1_OFFSET UNITYSDK_OFFSET(0x199D9BB0)
#define BAJEFKOPOPL_ANAGAHONMKO_OFFSET UNITYSDK_OFFSET(0x199D9FE0)
#define BAJEFKOPOPL_BIHLHGDOONH_OFFSET UNITYSDK_OFFSET(0x199DB150)
#define BAJEFKOPOPL_BNJAFCBMEKP_OFFSET UNITYSDK_OFFSET(0x199DB260)
#define BAJEFKOPOPL_BODDPFBMILL_OFFSET UNITYSDK_OFFSET(0x199D9D40)
#define BAJEFKOPOPL_CEOMNEJNPFE_OFFSET UNITYSDK_OFFSET(0x199DACE0)
#define BAJEFKOPOPL_CTOR_OFFSET UNITYSDK_OFFSET(0x199DB670)
#define BAJEFKOPOPL_DCFJAAPPKKH_OFFSET UNITYSDK_OFFSET(0x199DA070)
#define BAJEFKOPOPL_DDHEBEICMAJ_OFFSET UNITYSDK_OFFSET(0x199DA5F0)
#define BAJEFKOPOPL_DHLLIPBFDMO_OFFSET UNITYSDK_OFFSET(0x199DAEF0)
#define BAJEFKOPOPL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x199D96E0)
#define BAJEFKOPOPL_FFGPEAECIMO_OFFSET UNITYSDK_OFFSET(0x199D8B50)
#define BAJEFKOPOPL_FNJONPBLGCI_OFFSET UNITYSDK_OFFSET(0x199DB1E0)
#define BAJEFKOPOPL_GET_CURRENTSKILLSUBTARGETLIST_OFFSET UNITYSDK_OFFSET(0x199DB5F0)
#define BAJEFKOPOPL_GET_CURRENTSKILLTARGETLIST_OFFSET UNITYSDK_OFFSET(0x199DB570)
#define BAJEFKOPOPL_GET_SKILLACTUALATTACKER_OFFSET UNITYSDK_OFFSET(0x199DB300)
#define BAJEFKOPOPL_GET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0x199DB3C0)
#define BAJEFKOPOPL_HEGNDMHLBGN_OFFSET UNITYSDK_OFFSET(0x199DB140)
#define BAJEFKOPOPL_HELAOCKAJEH_OFFSET UNITYSDK_OFFSET(0x199DA560)
#define BAJEFKOPOPL_HENNGPGOHNG_OFFSET UNITYSDK_OFFSET(0x199DA860)
#define BAJEFKOPOPL_IGBBBNJCFKE_OFFSET UNITYSDK_OFFSET(0x199DA2E0)
#define BAJEFKOPOPL_INGONFNPCJG_OFFSET UNITYSDK_OFFSET(0x199D99D0)
#define BAJEFKOPOPL_JCLOJBPLNEO_OFFSET UNITYSDK_OFFSET(0x199DAAE0)
#define BAJEFKOPOPL_JGAKNIFJNCM_OFFSET UNITYSDK_OFFSET(0x199D9AB0)
#define BAJEFKOPOPL_JHNMOJGCELA_OFFSET UNITYSDK_OFFSET(0x199DB130)
#define BAJEFKOPOPL_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0x199DA340)
#define BAJEFKOPOPL_KLFLMKFLKME_OFFSET UNITYSDK_OFFSET(0x199DA980)
#define BAJEFKOPOPL_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x199D8B00)
#define BAJEFKOPOPL_LMFMIJIJNFL_OFFSET UNITYSDK_OFFSET(0x199DA400)
#define BAJEFKOPOPL_MBGFEPOGNNI_OFFSET UNITYSDK_OFFSET(0x199DB170)
#define BAJEFKOPOPL_MMNHKBAPBCP_OFFSET UNITYSDK_OFFSET(0x199DAA10)
#define BAJEFKOPOPL_NHJPNLKNLDH_OFFSET UNITYSDK_OFFSET(0x199DB1F0)
#define BAJEFKOPOPL_NPCMKMICIPH_OFFSET UNITYSDK_OFFSET(0x199DB1D0)
#define BAJEFKOPOPL_OEGBHGKMGHB_OFFSET UNITYSDK_OFFSET(0x199DA260)
#define BAJEFKOPOPL_OIMGAOCHDIL_OFFSET UNITYSDK_OFFSET(0x199D9880)
#define BAJEFKOPOPL_PBEMNDLFDDI_OFFSET UNITYSDK_OFFSET(0x199DAB70)
#define BAJEFKOPOPL_PJMGPNMPILP_OFFSET UNITYSDK_OFFSET(0x199DB200)
#define BAJEFKOPOPL_SET_SKILLACTUALATTACKER_OFFSET UNITYSDK_OFFSET(0x199DB310)
#define BAJEFKOPOPL_SET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0x199DB4C0)
#define BAJEFKOPOPL__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x199D89C0)

inline static constexpr unsigned int BAJEFKOPOPL_TypeDefinitionIndex = 55220;

	class BAJEFKOPOPL : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::CENEFPOMFKG* GEIDHEOKMLH; // 0x18
		::ILMMNCLCDIM* JFMNNJKEGDA; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* DDGECMEILMN; // 0x28
		::CENEFPOMFKG* KCICKBIHDGI; // 0x30
		::MHLFFIDFHLA* GPGPMEEDMNP; // 0x38
		::BGMKDGACBNI* ILLOMEFMFHM; // 0x40
		::System::Collections::Generic::List_1<::LCCBPDIHMBI*>* MEHCFNFNPEG; // 0x48
		::RPG::GameCore::SafeEventListener_1<::KKCMBNCHOJJ*>* EIPICAMCJAM; // 0x50
		::System::Collections::Generic::List_1<::CENEFPOMFKG*>* NMJKCNJNEFI; // 0x58
		::System::Collections::Generic::List_1<::IOGHOHIBHEJ*>* LKNBCNDGDJB; // 0x60
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x68
		::System::Boolean GIAEEAMMJFO; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::MHLFFIDFHLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHLFFIDFHLA*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_DISPOSE_OFFSET))(this);
		}

		::System::Void OIMGAOCHDIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_OIMGAOCHDIL_OFFSET))(this);
		}

		::System::String* INGONFNPCJG(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_INGONFNPCJG_OFFSET))(this, a1);
		}

		::CENEFPOMFKG* JGAKNIFJNCM(::System::String* a1)
		{
			return ((::CENEFPOMFKG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_JGAKNIFJNCM_OFFSET))(this, a1);
		}

		::System::Void BODDPFBMILL(::System::Collections::Generic::List_1<::CENEFPOMFKG*>* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::RPG::GameCore::SkillType>* a3, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CENEFPOMFKG*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::SkillType>*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_BODDPFBMILL_OFFSET))(this, a1, a2, a3, a4);
		}

		::CENEFPOMFKG* ANAGAHONMKO(::System::Int32 a1)
		{
			return ((::CENEFPOMFKG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_ANAGAHONMKO_OFFSET))(this, a1);
		}

		::CENEFPOMFKG* ANAGAHONMKO_1(::System::String* a1)
		{
			return ((::CENEFPOMFKG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_ANAGAHONMKO_1_OFFSET))(this, a1);
		}

		::CENEFPOMFKG* DCFJAAPPKKH(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::CENEFPOMFKG*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_DCFJAAPPKKH_OFFSET))(this, a1);
		}

		::RPG::GameCore::RtSkillUseResult AJCOBAJEMGP()
		{
			return ((::RPG::GameCore::RtSkillUseResult(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_AJCOBAJEMGP_OFFSET))(this);
		}

		::RPG::GameCore::RtSkillUseResult OEGBHGKMGHB(::System::Int32 a1, ::OKIBEPMJGMH a2)
		{
			return ((::RPG::GameCore::RtSkillUseResult(*)(::PVOID, ::System::Int32, ::OKIBEPMJGMH))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_OEGBHGKMGHB_OFFSET))(this, a1, a2);
		}

		::System::Boolean IGBBBNJCFKE(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_IGBBBNJCFKE_OFFSET))(this, a1);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::System::Void LMFMIJIJNFL(::KKCMBNCHOJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKCMBNCHOJJ*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_LMFMIJIJNFL_OFFSET))(this, a1);
		}

		::System::Void HELAOCKAJEH(::KKCMBNCHOJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKCMBNCHOJJ*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_HELAOCKAJEH_OFFSET))(this, a1);
		}

		::System::Void DDHEBEICMAJ(::CENEFPOMFKG* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_DDHEBEICMAJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HENNGPGOHNG(::IOGHOHIBHEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOGHOHIBHEJ*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_HENNGPGOHNG_OFFSET))(this, a1);
		}

		::System::Void KLFLMKFLKME(::IOGHOHIBHEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOGHOHIBHEJ*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_KLFLMKFLKME_OFFSET))(this, a1);
		}

		::System::Boolean MMNHKBAPBCP(::CENEFPOMFKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_MMNHKBAPBCP_OFFSET))(this, a1);
		}

		::System::Boolean JCLOJBPLNEO(::CENEFPOMFKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_JCLOJBPLNEO_OFFSET))(this, a1);
		}

		::System::Boolean PBEMNDLFDDI(::CENEFPOMFKG* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::CENEFPOMFKG*, ::System::Boolean))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_PBEMNDLFDDI_OFFSET))(this, a1, a2);
		}

		::System::Void FFGPEAECIMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_FFGPEAECIMO_OFFSET))(this);
		}

		::RPG::GameCore::SkillAbilityConfig* DHLLIPBFDMO(::System::String* a1)
		{
			return ((::RPG::GameCore::SkillAbilityConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_DHLLIPBFDMO_OFFSET))(this, a1);
		}

		::ILMMNCLCDIM* JHNMOJGCELA()
		{
			return ((::ILMMNCLCDIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_JHNMOJGCELA_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* HEGNDMHLBGN()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_HEGNDMHLBGN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::CENEFPOMFKG*>* BIHLHGDOONH()
		{
			return ((::System::Collections::Generic::List_1<::CENEFPOMFKG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_BIHLHGDOONH_OFFSET))(this);
		}

		::BGMKDGACBNI* AAMNIEFKMAP()
		{
			return ((::BGMKDGACBNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_AAMNIEFKMAP_OFFSET))(this);
		}

		::CENEFPOMFKG* MBGFEPOGNNI()
		{
			return ((::CENEFPOMFKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_MBGFEPOGNNI_OFFSET))(this);
		}

		::CENEFPOMFKG* NPCMKMICIPH()
		{
			return ((::CENEFPOMFKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_NPCMKMICIPH_OFFSET))(this);
		}

		::System::Void CEOMNEJNPFE(::CENEFPOMFKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_CEOMNEJNPFE_OFFSET))(this, a1);
		}

		::CENEFPOMFKG* FNJONPBLGCI()
		{
			return ((::CENEFPOMFKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_FNJONPBLGCI_OFFSET))(this);
		}

		::System::Void NHJPNLKNLDH(::CENEFPOMFKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_NHJPNLKNLDH_OFFSET))(this, a1);
		}

		::CENEFPOMFKG* PJMGPNMPILP()
		{
			return ((::CENEFPOMFKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_PJMGPNMPILP_OFFSET))(this);
		}

		::System::Int32 BNJAFCBMEKP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_BNJAFCBMEKP_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_SkillActualAttacker()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_GET_SKILLACTUALATTACKER_OFFSET))(this);
		}

		::System::Void set_SkillActualAttacker(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_SET_SKILLACTUALATTACKER_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_SkillPointEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_GET_SKILLPOINTENTITY_OFFSET))(this);
		}

		::System::Void set_SkillPointEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_SET_SKILLPOINTENTITY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CurrentSkillTargetList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_GET_CURRENTSKILLTARGETLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CurrentSkillSubTargetList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJEFKOPOPL_GET_CURRENTSKILLSUBTARGETLIST_OFFSET))(this);
		}

	};
