#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierEventFilterMask.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/Object.h"
class EEJNNOAEEFO;
class EKFMIDBJDIA;
class LPNPMKNMMOK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LevelTurnBasedModifierEventProcessor; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NKNLPEMNLJH_ACBLHPDHHIM_OFFSET UNITYSDK_OFFSET(0xBC473F0)
#define NKNLPEMNLJH_AFGGBJAOCAI_OFFSET UNITYSDK_OFFSET(0xBC461C0)
#define NKNLPEMNLJH_AHFKPGNEJIN_OFFSET UNITYSDK_OFFSET(0xBC4BDF0)
#define NKNLPEMNLJH_AIJKHMLKFLG_OFFSET UNITYSDK_OFFSET(0xBC4A9E0)
#define NKNLPEMNLJH_ALOHNNKDJDJ_OFFSET UNITYSDK_OFFSET(0xBC4A530)
#define NKNLPEMNLJH_AOBBNENEMPF_OFFSET UNITYSDK_OFFSET(0xBC47E90)
#define NKNLPEMNLJH_BAMDALPCMLB_OFFSET UNITYSDK_OFFSET(0xBC422D0)
#define NKNLPEMNLJH_BAOEMABIDKK_OFFSET UNITYSDK_OFFSET(0xBC43890)
#define NKNLPEMNLJH_BBHDOKFFMGE_OFFSET UNITYSDK_OFFSET(0xBC48EC0)
#define NKNLPEMNLJH_BEHEPIJNLIC_OFFSET UNITYSDK_OFFSET(0xBC42640)
#define NKNLPEMNLJH_BFBGDMDAJAF_OFFSET UNITYSDK_OFFSET(0xBC45120)
#define NKNLPEMNLJH_BGCKCBEDNON_OFFSET UNITYSDK_OFFSET(0xBC4A7D0)
#define NKNLPEMNLJH_BOIBPGFLIJM_OFFSET UNITYSDK_OFFSET(0xBC4AD80)
#define NKNLPEMNLJH_BPOADEAILMP_OFFSET UNITYSDK_OFFSET(0xBC42450)
#define NKNLPEMNLJH_CBNNHPGHPHE_OFFSET UNITYSDK_OFFSET(0xBC46AF0)
#define NKNLPEMNLJH_CKPELPAIPFB_OFFSET UNITYSDK_OFFSET(0xBC497B0)
#define NKNLPEMNLJH_CTOR_OFFSET UNITYSDK_OFFSET(0xBC3F5E0)
#define NKNLPEMNLJH_DAHHGGOHCEI_OFFSET UNITYSDK_OFFSET(0xBC43310)
#define NKNLPEMNLJH_DCOJILNBJAF_OFFSET UNITYSDK_OFFSET(0xBC4A1C0)
#define NKNLPEMNLJH_DDMPOILJHEM_OFFSET UNITYSDK_OFFSET(0xBC48B80)
#define NKNLPEMNLJH_DENAJCACLGK_OFFSET UNITYSDK_OFFSET(0xBC43710)
#define NKNLPEMNLJH_DFGEHLOFOCO_OFFSET UNITYSDK_OFFSET(0xBC482E0)
#define NKNLPEMNLJH_DFIAKMIODGF_OFFSET UNITYSDK_OFFSET(0xBC477E0)
#define NKNLPEMNLJH_DHPIPPEDFGG_OFFSET UNITYSDK_OFFSET(0xBC49520)
#define NKNLPEMNLJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC40D00)
#define NKNLPEMNLJH_DOPDLGEDNBF_OFFSET UNITYSDK_OFFSET(0xBC480B0)
#define NKNLPEMNLJH_DPGMFOMJCKM_OFFSET UNITYSDK_OFFSET(0xBC4A3B0)
#define NKNLPEMNLJH_DPNKABNEGNP_OFFSET UNITYSDK_OFFSET(0xBC4B5B0)
#define NKNLPEMNLJH_EEFENALECNF_OFFSET UNITYSDK_OFFSET(0xBC476C0)
#define NKNLPEMNLJH_EEGJDMHMJOF_OFFSET UNITYSDK_OFFSET(0xBC46620)
#define NKNLPEMNLJH_EKCJBAHMKJI_OFFSET UNITYSDK_OFFSET(0xBC46960)
#define NKNLPEMNLJH_ENHBAHCAKBE_OFFSET UNITYSDK_OFFSET(0xBC4AF90)
#define NKNLPEMNLJH_FBJODINCIIL_OFFSET UNITYSDK_OFFSET(0xBC43FB0)
#define NKNLPEMNLJH_FEJKOHFHHNN_OFFSET UNITYSDK_OFFSET(0xBC44DA0)
#define NKNLPEMNLJH_GGHIDBNAJFA_OFFSET UNITYSDK_OFFSET(0xBC43E80)
#define NKNLPEMNLJH_GGNEBCKIEOI_OFFSET UNITYSDK_OFFSET(0xBC42B60)
#define NKNLPEMNLJH_GHKPFDLIDHB_OFFSET UNITYSDK_OFFSET(0xBC47CE0)
#define NKNLPEMNLJH_GILPJJLEHNK_OFFSET UNITYSDK_OFFSET(0xBC45010)
#define NKNLPEMNLJH_GJNINKJKNFH_OFFSET UNITYSDK_OFFSET(0xBC448F0)
#define NKNLPEMNLJH_GNMPKDPFCKN_OFFSET UNITYSDK_OFFSET(0xBC42220)
#define NKNLPEMNLJH_GOFDPLJEFDG_OFFSET UNITYSDK_OFFSET(0xBC3F8F0)
#define NKNLPEMNLJH_HCBIHNMPKCK_OFFSET UNITYSDK_OFFSET(0xBC48550)
#define NKNLPEMNLJH_HLJFBIELEAH_OFFSET UNITYSDK_OFFSET(0xBC467C0)
#define NKNLPEMNLJH_HLJFGLAGJCJ_OFFSET UNITYSDK_OFFSET(0xBC47090)
#define NKNLPEMNLJH_HNGIKCBCHPO_OFFSET UNITYSDK_OFFSET(0xBC451D0)
#define NKNLPEMNLJH_HOLECNABENN_OFFSET UNITYSDK_OFFSET(0xBC431B0)
#define NKNLPEMNLJH_HPBFGOLLAHK_OFFSET UNITYSDK_OFFSET(0xBC48170)
#define NKNLPEMNLJH_IDCBEJGHGIF_OFFSET UNITYSDK_OFFSET(0xBC45F80)
#define NKNLPEMNLJH_IDHKPAICMMI_OFFSET UNITYSDK_OFFSET(0xBC47F50)
#define NKNLPEMNLJH_IGPPINILGDC_OFFSET UNITYSDK_OFFSET(0xBC4AB70)
#define NKNLPEMNLJH_IILGEFPBCON_OFFSET UNITYSDK_OFFSET(0xBC49D90)
#define NKNLPEMNLJH_IOILODAJJBA_OFFSET UNITYSDK_OFFSET(0xBC4A310)
#define NKNLPEMNLJH_IPKFFOCLKGC_OFFSET UNITYSDK_OFFSET(0xBC44C20)
#define NKNLPEMNLJH_JAAPKGLLPCD_OFFSET UNITYSDK_OFFSET(0xBC43470)
#define NKNLPEMNLJH_KAFJEDEEAGC_OFFSET UNITYSDK_OFFSET(0xBC43D70)
#define NKNLPEMNLJH_KCFEBKOIJHM_OFFSET UNITYSDK_OFFSET(0xBC43650)
#define NKNLPEMNLJH_KFADIFMHFKO_OFFSET UNITYSDK_OFFSET(0xBC44680)
#define NKNLPEMNLJH_KGCDKEKBBND_OFFSET UNITYSDK_OFFSET(0xBC4B6E0)
#define NKNLPEMNLJH_KJHBBPNNIHG_OFFSET UNITYSDK_OFFSET(0xBC45390)
#define NKNLPEMNLJH_KJHHGEOHABL_OFFSET UNITYSDK_OFFSET(0xBC460A0)
#define NKNLPEMNLJH_KJPOINFGHPC_OFFSET UNITYSDK_OFFSET(0xBC463C0)
#define NKNLPEMNLJH_KKKAFGGGHEM_OFFSET UNITYSDK_OFFSET(0xBC45BE0)
#define NKNLPEMNLJH_LGBGCPNDMJA_OFFSET UNITYSDK_OFFSET(0xBC45680)
#define NKNLPEMNLJH_LNHAPOHOKFB_OFFSET UNITYSDK_OFFSET(0xBC4B8C0)
#define NKNLPEMNLJH_MEENLJHJAGC_OFFSET UNITYSDK_OFFSET(0xBC4B420)
#define NKNLPEMNLJH_MIBEMBADKNM_OFFSET UNITYSDK_OFFSET(0xBC45550)
#define NKNLPEMNLJH_MIGKFAPFBGM_OFFSET UNITYSDK_OFFSET(0xBC45DC0)
#define NKNLPEMNLJH_MIKKALPDBLB_OFFSET UNITYSDK_OFFSET(0xBC442B0)
#define NKNLPEMNLJH_MOIOLFKABFO_OFFSET UNITYSDK_OFFSET(0xBC46A20)
#define NKNLPEMNLJH_MPOBMOMNMOE_OFFSET UNITYSDK_OFFSET(0xBC43C10)
#define NKNLPEMNLJH_NAMCHBLFGFK_OFFSET UNITYSDK_OFFSET(0xBC487A0)
#define NKNLPEMNLJH_NBDCFHIFCML_OFFSET UNITYSDK_OFFSET(0xBC4BA30)
#define NKNLPEMNLJH_NIFKJOGDAPH_OFFSET UNITYSDK_OFFSET(0xBC40E10)
#define NKNLPEMNLJH_NJBENAEOAOH_OFFSET UNITYSDK_OFFSET(0xBC4BCB0)
#define NKNLPEMNLJH_NMOBDGCOOJE_OFFSET UNITYSDK_OFFSET(0xBC43A50)
#define NKNLPEMNLJH_NNBBKELLIMD_OFFSET UNITYSDK_OFFSET(0xBC430F0)
#define NKNLPEMNLJH_NOAPHOBFIGM_OFFSET UNITYSDK_OFFSET(0xBC42E50)
#define NKNLPEMNLJH_NPGPEJALKLL_OFFSET UNITYSDK_OFFSET(0xBC42340)
#define NKNLPEMNLJH_OEAELJMGLOA_OFFSET UNITYSDK_OFFSET(0xBC42530)
#define NKNLPEMNLJH_OFEEGHAPGDK_OFFSET UNITYSDK_OFFSET(0xBC48450)
#define NKNLPEMNLJH_OGGGLEIAPOC_OFFSET UNITYSDK_OFFSET(0xBC45A70)
#define NKNLPEMNLJH_OJFAAICODOJ_OFFSET UNITYSDK_OFFSET(0xBC48910)
#define NKNLPEMNLJH_ONBGEPPFEBI_OFFSET UNITYSDK_OFFSET(0xBC49170)
#define NKNLPEMNLJH_PBBAKPOLJAG_OFFSET UNITYSDK_OFFSET(0xBC4B170)
#define NKNLPEMNLJH_PFENGBDFOEI_OFFSET UNITYSDK_OFFSET(0xBC47A40)
#define NKNLPEMNLJH_PMHPENCGMGJ_OFFSET UNITYSDK_OFFSET(0xBC49EC0)

inline static constexpr unsigned int NKNLPEMNLJH_TypeDefinitionIndex = 56213;

	class NKNLPEMNLJH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedAbilityComponent*>* NDFDBJJPNPD; // 0x10
		::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x18
		::System::Func_3<::EEJNNOAEEFO*, ::EEJNNOAEEFO*, ::System::Int32>* PPOPHAGNLII; // 0x20
		::System::Collections::BitArray* JOPLMOCKKFP; // 0x28
		::Il2CppArray<::RPG::GameCore::LevelTurnBasedModifierEventProcessor*>* MJJLNKIGIDP; // 0x30
		::System::Boolean NBKHPOMOEAJ; // 0x38
		::System::Boolean JBAOJIHJDMB; // 0x39
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_DISPOSE_OFFSET))(this);
		}

		::System::Void GOFDPLJEFDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_GOFDPLJEFDG_OFFSET))(this);
		}

		::System::Void NIFKJOGDAPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_NIFKJOGDAPH_OFFSET))(this);
		}

		::System::Void GNMPKDPFCKN(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_GNMPKDPFCKN_OFFSET))(this, a1);
		}

		::System::Void BAMDALPCMLB(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_BAMDALPCMLB_OFFSET))(this, a1);
		}

		::System::Void NPGPEJALKLL(::RPG::GameCore::TurnBasedModifierEvent a1, ::LPNPMKNMMOK* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::ModifierEventFilterMask a4, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent, ::LPNPMKNMMOK*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ModifierEventFilterMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_NPGPEJALKLL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BPOADEAILMP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierEvent a2, ::LPNPMKNMMOK* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::ModifierEventFilterMask a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierEvent, ::LPNPMKNMMOK*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ModifierEventFilterMask))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_BPOADEAILMP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OEAELJMGLOA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierEvent a2, ::LPNPMKNMMOK* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::ModifierEventFilterMask a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierEvent, ::LPNPMKNMMOK*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ModifierEventFilterMask))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_OEAELJMGLOA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BEHEPIJNLIC(::RPG::GameCore::TurnBasedModifierEvent a1, ::EEJNNOAEEFO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent, ::EEJNNOAEEFO*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_BEHEPIJNLIC_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 GGNEBCKIEOI(::EEJNNOAEEFO* a1, ::EEJNNOAEEFO* a2)
		{
			return ((::System::Int32(*)(::EEJNNOAEEFO*, ::EEJNNOAEEFO*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_GGNEBCKIEOI_OFFSET))(a1, a2);
		}

		::System::Void NOAPHOBFIGM(::RPG::GameCore::TurnBasedModifierEvent a1, ::EEJNNOAEEFO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent, ::EEJNNOAEEFO*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_NOAPHOBFIGM_OFFSET))(this, a1, a2);
		}

		::System::Boolean NNBBKELLIMD(::RPG::GameCore::TurnBasedModifierEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_NNBBKELLIMD_OFFSET))(this, a1);
		}

		::System::Void HOLECNABENN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_HOLECNABENN_OFFSET))(this, a1);
		}

		::System::Void DAHHGGOHCEI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_DAHHGGOHCEI_OFFSET))(this, a1);
		}

		::System::Void JAAPKGLLPCD(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_JAAPKGLLPCD_OFFSET))(this, a1);
		}

		::System::Void KCFEBKOIJHM(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_KCFEBKOIJHM_OFFSET))(this, a1, a2);
		}

		::System::Void DENAJCACLGK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_DENAJCACLGK_OFFSET))(this, a1);
		}

		::System::Void BAOEMABIDKK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_BAOEMABIDKK_OFFSET))(this, a1);
		}

		::System::Void NMOBDGCOOJE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_NMOBDGCOOJE_OFFSET))(this, a1);
		}

		::System::Void MPOBMOMNMOE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_MPOBMOMNMOE_OFFSET))(this, a1);
		}

		::System::Void KAFJEDEEAGC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_KAFJEDEEAGC_OFFSET))(this, a1);
		}

		::System::Void GGHIDBNAJFA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_GGHIDBNAJFA_OFFSET))(this, a1);
		}

		::System::Void FBJODINCIIL(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_FBJODINCIIL_OFFSET))(this, a1);
		}

		::System::Void MIKKALPDBLB(::RPG::GameCore::TurnBasedModifierEvent a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_MIKKALPDBLB_OFFSET))(this, a1, a2);
		}

		::System::Void KFADIFMHFKO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_KFADIFMHFKO_OFFSET))(this, a1);
		}

		::System::Void GJNINKJKNFH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_GJNINKJKNFH_OFFSET))(this, a1);
		}

		::System::Void IPKFFOCLKGC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_IPKFFOCLKGC_OFFSET))(this, a1);
		}

		::System::Void FEJKOHFHHNN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_FEJKOHFHHNN_OFFSET))(this, a1);
		}

		::System::Void GILPJJLEHNK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_GILPJJLEHNK_OFFSET))(this, a1);
		}

		::System::Void BFBGDMDAJAF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_BFBGDMDAJAF_OFFSET))(this, a1);
		}

		::System::Void HNGIKCBCHPO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_HNGIKCBCHPO_OFFSET))(this, a1);
		}

		::System::Void KJHBBPNNIHG(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_KJHBBPNNIHG_OFFSET))(this, a1);
		}

		::System::Void MIBEMBADKNM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_MIBEMBADKNM_OFFSET))(this, a1);
		}

		::System::Void LGBGCPNDMJA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_LGBGCPNDMJA_OFFSET))(this, a1);
		}

		::System::Void OGGGLEIAPOC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_OGGGLEIAPOC_OFFSET))(this, a1);
		}

		::System::Void KKKAFGGGHEM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_KKKAFGGGHEM_OFFSET))(this, a1);
		}

		::System::Void MIGKFAPFBGM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_MIGKFAPFBGM_OFFSET))(this, a1);
		}

		::System::Void IDCBEJGHGIF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_IDCBEJGHGIF_OFFSET))(this, a1);
		}

		::System::Void KJHHGEOHABL(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_KJHHGEOHABL_OFFSET))(this, a1);
		}

		::System::Void AFGGBJAOCAI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_AFGGBJAOCAI_OFFSET))(this, a1);
		}

		::System::Void KJPOINFGHPC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_KJPOINFGHPC_OFFSET))(this, a1);
		}

		::System::Void EEGJDMHMJOF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_EEGJDMHMJOF_OFFSET))(this, a1);
		}

		::System::Void HLJFBIELEAH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_HLJFBIELEAH_OFFSET))(this, a1);
		}

		::System::Void EKCJBAHMKJI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_EKCJBAHMKJI_OFFSET))(this, a1);
		}

		::System::Void CBNNHPGHPHE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_CBNNHPGHPHE_OFFSET))(this, a1);
		}

		::System::Void MOIOLFKABFO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_MOIOLFKABFO_OFFSET))(this, a1);
		}

		::System::Void HLJFGLAGJCJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_HLJFGLAGJCJ_OFFSET))(this, a1);
		}

		::System::Void ACBLHPDHHIM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_ACBLHPDHHIM_OFFSET))(this, a1);
		}

		::System::Void EEFENALECNF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_EEFENALECNF_OFFSET))(this, a1);
		}

		::System::Void DFIAKMIODGF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_DFIAKMIODGF_OFFSET))(this, a1);
		}

		::System::Void PFENGBDFOEI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_PFENGBDFOEI_OFFSET))(this, a1);
		}

		::System::Void GHKPFDLIDHB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_GHKPFDLIDHB_OFFSET))(this, a1);
		}

		::System::Void AOBBNENEMPF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_AOBBNENEMPF_OFFSET))(this, a1);
		}

		::System::Void IDHKPAICMMI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_IDHKPAICMMI_OFFSET))(this, a1);
		}

		::System::Void DOPDLGEDNBF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_DOPDLGEDNBF_OFFSET))(this, a1);
		}

		::System::Void HPBFGOLLAHK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_HPBFGOLLAHK_OFFSET))(this, a1);
		}

		::System::Void DFGEHLOFOCO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_DFGEHLOFOCO_OFFSET))(this, a1);
		}

		::System::Void OFEEGHAPGDK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_OFEEGHAPGDK_OFFSET))(this, a1);
		}

		::System::Void HCBIHNMPKCK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_HCBIHNMPKCK_OFFSET))(this, a1);
		}

		::System::Void NAMCHBLFGFK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_NAMCHBLFGFK_OFFSET))(this, a1);
		}

		::System::Void OJFAAICODOJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_OJFAAICODOJ_OFFSET))(this, a1);
		}

		::System::Void DDMPOILJHEM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_DDMPOILJHEM_OFFSET))(this, a1);
		}

		::System::Void BBHDOKFFMGE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_BBHDOKFFMGE_OFFSET))(this, a1);
		}

		::System::Void ONBGEPPFEBI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_ONBGEPPFEBI_OFFSET))(this, a1);
		}

		::System::Void DHPIPPEDFGG(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_DHPIPPEDFGG_OFFSET))(this, a1);
		}

		::System::Void CKPELPAIPFB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_CKPELPAIPFB_OFFSET))(this, a1);
		}

		::System::Void IILGEFPBCON(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_IILGEFPBCON_OFFSET))(this, a1);
		}

		::System::Void PMHPENCGMGJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_PMHPENCGMGJ_OFFSET))(this, a1);
		}

		::System::Void IOILODAJJBA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_IOILODAJJBA_OFFSET))(this, a1);
		}

		::System::Void DPGMFOMJCKM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_DPGMFOMJCKM_OFFSET))(this, a1);
		}

		::System::Void ALOHNNKDJDJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_ALOHNNKDJDJ_OFFSET))(this, a1);
		}

		::System::Void BGCKCBEDNON(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_BGCKCBEDNON_OFFSET))(this, a1);
		}

		::System::Void AIJKHMLKFLG(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_AIJKHMLKFLG_OFFSET))(this, a1);
		}

		::System::Void IGPPINILGDC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_IGPPINILGDC_OFFSET))(this, a1);
		}

		::System::Void BOIBPGFLIJM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_BOIBPGFLIJM_OFFSET))(this, a1);
		}

		::System::Void ENHBAHCAKBE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_ENHBAHCAKBE_OFFSET))(this, a1);
		}

		::System::Void PBBAKPOLJAG(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_PBBAKPOLJAG_OFFSET))(this, a1);
		}

		::System::Void MEENLJHJAGC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_MEENLJHJAGC_OFFSET))(this, a1);
		}

		::System::Void DPNKABNEGNP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_DPNKABNEGNP_OFFSET))(this, a1);
		}

		::System::Void KGCDKEKBBND(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_KGCDKEKBBND_OFFSET))(this, a1);
		}

		::System::Void LNHAPOHOKFB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_LNHAPOHOKFB_OFFSET))(this, a1);
		}

		::System::Void NBDCFHIFCML(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_NBDCFHIFCML_OFFSET))(this, a1);
		}

		::System::Void NJBENAEOAOH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_NJBENAEOAOH_OFFSET))(this, a1);
		}

		::System::Void AHFKPGNEJIN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_AHFKPGNEJIN_OFFSET))(this, a1);
		}

		::System::Void DCOJILNBJAF(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NKNLPEMNLJH_DCOJILNBJAF_OFFSET))(this, a1, a2);
		}

	};
