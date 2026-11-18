#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKFCOMPHBLJ_GJJLCMBEHME.h"
#include "unitysdk/AKFCOMPHBLJ_MOOGPAPLLJH.h"
#include "unitysdk/ANKBGMKLIJP.h"
#include "unitysdk/ECFDPGNHMMG.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/AGJFJGEMIPB_JDAJAJNPCGG.h"
#include "unitysdk/AKFCOMPHBLJ_BNJOCGHEMCF.h"
#include "unitysdk/AKFCOMPHBLJ_DMMJMNBLDDD.h"
#include "unitysdk/AKFCOMPHBLJ_LDLHHFMGPLC.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/FNKOPDEKLKG.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AGHDCHDNLFG;
class AKFCOMPHBLJ_IAGPNNHDDPN;
class BMFKFIEBPNC;
class EEHJOPEJOCD;
class HINJLCCCHNM;
class KAJAGPBJADH;
class MBAOHJLIJHD;
class MHJDIPINMMF;
class PDKBJLIIIEJ;
namespace MoleMole { class MonoSpawnPoint; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class StageEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define AKFCOMPHBLJ_ABFIALKIOMB_OFFSET UNITYSDK_OFFSET(0x14363300)
#define AKFCOMPHBLJ_ABHJKJHLIOF_OFFSET UNITYSDK_OFFSET(0x14360A20)
#define AKFCOMPHBLJ_AJHONLINDOB_OFFSET UNITYSDK_OFFSET(0x1435F220)
#define AKFCOMPHBLJ_AKBEIFPBAGK_OFFSET UNITYSDK_OFFSET(0x1435C380)
#define AKFCOMPHBLJ_APPGMEMMKIB_OFFSET UNITYSDK_OFFSET(0x14366800)
#define AKFCOMPHBLJ_BAANEFLOJGP_OFFSET UNITYSDK_OFFSET(0x14367490)
#define AKFCOMPHBLJ_BFLLKCHBHCA_OFFSET UNITYSDK_OFFSET(0x14367D70)
#define AKFCOMPHBLJ_BHKCMOMNDIB_OFFSET UNITYSDK_OFFSET(0x1435D9E0)
#define AKFCOMPHBLJ_BKPAFMGDGBN_OFFSET UNITYSDK_OFFSET(0x14368760)
#define AKFCOMPHBLJ_BMFKENDILLP_OFFSET UNITYSDK_OFFSET(0x14361510)
#define AKFCOMPHBLJ_BNHHHGPBBGL_OFFSET UNITYSDK_OFFSET(0x143635E0)
#define AKFCOMPHBLJ_CDLEKICCFOC_OFFSET UNITYSDK_OFFSET(0x14362E20)
#define AKFCOMPHBLJ_CJCBIGEOEIJ_OFFSET UNITYSDK_OFFSET(0x14365880)
#define AKFCOMPHBLJ_CKJIPFJIJHG_OFFSET UNITYSDK_OFFSET(0x14368910)
#define AKFCOMPHBLJ_CNJGEIMMJKE_OFFSET UNITYSDK_OFFSET(0x14362010)
#define AKFCOMPHBLJ_CPAMOCACAPO_OFFSET UNITYSDK_OFFSET(0x14367350)
#define AKFCOMPHBLJ_CPKFBOFPPNO_OFFSET UNITYSDK_OFFSET(0x14365FD0)
#define AKFCOMPHBLJ_DADGAPDLNHP_OFFSET UNITYSDK_OFFSET(0x14366D70)
#define AKFCOMPHBLJ_DCLIDIEONEJ_OFFSET UNITYSDK_OFFSET(0x1435D360)
#define AKFCOMPHBLJ_DKLFAKIJAGD_OFFSET UNITYSDK_OFFSET(0x14365B30)
#define AKFCOMPHBLJ_DLKBBFFNMKG_OFFSET UNITYSDK_OFFSET(0x143698C0)
#define AKFCOMPHBLJ_DMLHOGAMCJK_OFFSET UNITYSDK_OFFSET(0x14361E90)
#define AKFCOMPHBLJ_EABMDDAAMOI_OFFSET UNITYSDK_OFFSET(0x14363A00)
#define AKFCOMPHBLJ_EIGJFMMMJMJ_OFFSET UNITYSDK_OFFSET(0x1435B3E0)
#define AKFCOMPHBLJ_EIIAMPMKMMP_OFFSET UNITYSDK_OFFSET(0x143610E0)
#define AKFCOMPHBLJ_FBGICFOHHLG_OFFSET UNITYSDK_OFFSET(0x14367F60)
#define AKFCOMPHBLJ_FHLBNGBMKPI_OFFSET UNITYSDK_OFFSET(0x14360250)
#define AKFCOMPHBLJ_FIHFCGDFDNO_OFFSET UNITYSDK_OFFSET(0x143654D0)
#define AKFCOMPHBLJ_FJFILCOBFJJ_OFFSET UNITYSDK_OFFSET(0x143676A0)
#define AKFCOMPHBLJ_FKDLICICNIM_OFFSET UNITYSDK_OFFSET(0x143663C0)
#define AKFCOMPHBLJ_FKNAKCDGMMO_OFFSET UNITYSDK_OFFSET(0x14362690)
#define AKFCOMPHBLJ_FKOHLAOKNBN_OFFSET UNITYSDK_OFFSET(0x14366D20)
#define AKFCOMPHBLJ_FLEBCJMLHGI_OFFSET UNITYSDK_OFFSET(0x14367A70)
#define AKFCOMPHBLJ_FMCEDIFONFL_OFFSET UNITYSDK_OFFSET(0x14361FB0)
#define AKFCOMPHBLJ_FNPLBDBEDFG_OFFSET UNITYSDK_OFFSET(0x14364FF0)
#define AKFCOMPHBLJ_FOHENBAIGJL_OFFSET UNITYSDK_OFFSET(0x14361C80)
#define AKFCOMPHBLJ_FOJKIIENFAD_OFFSET UNITYSDK_OFFSET(0x1435F550)
#define AKFCOMPHBLJ_GADLIIHJJLO_OFFSET UNITYSDK_OFFSET(0x14362FA0)
#define AKFCOMPHBLJ_GEDLLMECOAD_OFFSET UNITYSDK_OFFSET(0x14364BF0)
#define AKFCOMPHBLJ_GFAGGNMBODE_OFFSET UNITYSDK_OFFSET(0x14360BF0)
#define AKFCOMPHBLJ_GFJNBNOMPFB_OFFSET UNITYSDK_OFFSET(0x1435FBE0)
#define AKFCOMPHBLJ_GFMHGGECKKH_OFFSET UNITYSDK_OFFSET(0x1435F860)
#define AKFCOMPHBLJ_GJCLLLPDBEP_OFFSET UNITYSDK_OFFSET(0x143666D0)
#define AKFCOMPHBLJ_GJHLMPCEGFC_OFFSET UNITYSDK_OFFSET(0x14368120)
#define AKFCOMPHBLJ_GMLCDCAICGP_OFFSET UNITYSDK_OFFSET(0x1435FFB0)
#define AKFCOMPHBLJ_HCMHFOGGKKJ_OFFSET UNITYSDK_OFFSET(0x1435F4A0)
#define AKFCOMPHBLJ_HGFLOHIFNJO_OFFSET UNITYSDK_OFFSET(0x14360D40)
#define AKFCOMPHBLJ_IAEONEEKOCK_OFFSET UNITYSDK_OFFSET(0x14363A90)
#define AKFCOMPHBLJ_IFMDFOGKCBJ_OFFSET UNITYSDK_OFFSET(0x14368270)
#define AKFCOMPHBLJ_IHLNFCHIDFK_OFFSET UNITYSDK_OFFSET(0x14362BF0)
#define AKFCOMPHBLJ_INJMALEBNOE_OFFSET UNITYSDK_OFFSET(0x143641C0)
#define AKFCOMPHBLJ_JAOHMCPJAOJ_OFFSET UNITYSDK_OFFSET(0x14365200)
#define AKFCOMPHBLJ_JCIAIHBPPOH_OFFSET UNITYSDK_OFFSET(0x1435D190)
#define AKFCOMPHBLJ_JDGONKFJKKN_OFFSET UNITYSDK_OFFSET(0x14367910)
#define AKFCOMPHBLJ_JLJENFHMOEL_OFFSET UNITYSDK_OFFSET(0x14365E30)
#define AKFCOMPHBLJ_JOHDBIKCDFE_OFFSET UNITYSDK_OFFSET(0x1435AFF0)
#define AKFCOMPHBLJ_JOJKJBLPMHH_OFFSET UNITYSDK_OFFSET(0x1435AD10)
#define AKFCOMPHBLJ_KBNEDMBNPCH_OFFSET UNITYSDK_OFFSET(0x1435BC80)
#define AKFCOMPHBLJ_KCOIGMMLBOA_OFFSET UNITYSDK_OFFSET(0x14363710)
#define AKFCOMPHBLJ_KDEIJJPGGAB_OFFSET UNITYSDK_OFFSET(0x1435ED70)
#define AKFCOMPHBLJ_KGFILHCPLDE_OFFSET UNITYSDK_OFFSET(0x14366550)
#define AKFCOMPHBLJ_KIEMJKGIGIA_OFFSET UNITYSDK_OFFSET(0x14361290)
#define AKFCOMPHBLJ_KKDNDEKIKFG_OFFSET UNITYSDK_OFFSET(0x14365290)
#define AKFCOMPHBLJ_LDGPNDNLEFH_OFFSET UNITYSDK_OFFSET(0x1435CF80)
#define AKFCOMPHBLJ_LFLMGBMAIBE_OFFSET UNITYSDK_OFFSET(0x14360F30)
#define AKFCOMPHBLJ_LPBFEHABOKE_OFFSET UNITYSDK_OFFSET(0x14364050)
#define AKFCOMPHBLJ_LPIBEGOCBEH_OFFSET UNITYSDK_OFFSET(0x14366110)
#define AKFCOMPHBLJ_MDHCGBBAJBC_OFFSET UNITYSDK_OFFSET(0x14366610)
#define AKFCOMPHBLJ_MDIEIIPEEIM_OFFSET UNITYSDK_OFFSET(0x1435B140)
#define AKFCOMPHBLJ_MFJECLFDMIF_OFFSET UNITYSDK_OFFSET(0x14363ED0)
#define AKFCOMPHBLJ_MGCLKPLAMIB_OFFSET UNITYSDK_OFFSET(0x14362D90)
#define AKFCOMPHBLJ_MKBHMNDOJAC_OFFSET UNITYSDK_OFFSET(0x14360130)
#define AKFCOMPHBLJ_MNALALNCJAO_OFFSET UNITYSDK_OFFSET(0x1435F5B0)
#define AKFCOMPHBLJ_NBDGLGPMOEJ_OFFSET UNITYSDK_OFFSET(0x1435D5D0)
#define AKFCOMPHBLJ_NEFJKMIFCDP_OFFSET UNITYSDK_OFFSET(0x143634D0)
#define AKFCOMPHBLJ_NGEOPMIBFLN_OFFSET UNITYSDK_OFFSET(0x143622F0)
#define AKFCOMPHBLJ_NGPOIKCOIGN_OFFSET UNITYSDK_OFFSET(0x14365710)
#define AKFCOMPHBLJ_NILHEMJMBEC_OFFSET UNITYSDK_OFFSET(0x14369A60)
#define AKFCOMPHBLJ_NLOIDOHOLIA_OFFSET UNITYSDK_OFFSET(0x1435EB80)
#define AKFCOMPHBLJ_OAAELIKGFHF_OFFSET UNITYSDK_OFFSET(0x1435D510)
#define AKFCOMPHBLJ_OBCIHINONKG_OFFSET UNITYSDK_OFFSET(0x143649F0)
#define AKFCOMPHBLJ_OBIONHFLLPD_OFFSET UNITYSDK_OFFSET(0x14368530)
#define AKFCOMPHBLJ_OBJMFKLMDMK_OFFSET UNITYSDK_OFFSET(0x1435CC10)
#define AKFCOMPHBLJ_OCKODJBJCCM_1_OFFSET UNITYSDK_OFFSET(0x1435AF70)
#define AKFCOMPHBLJ_OCKODJBJCCM_OFFSET UNITYSDK_OFFSET(0x1435AD90)
#define AKFCOMPHBLJ_ODMEMOMGCNI_OFFSET UNITYSDK_OFFSET(0x1435B7F0)
#define AKFCOMPHBLJ_ONAJBNODNPO_OFFSET UNITYSDK_OFFSET(0x143629D0)
#define AKFCOMPHBLJ_PBHFKMCBABI_OFFSET UNITYSDK_OFFSET(0x143696A0)
#define AKFCOMPHBLJ_PGEMFANGCHG_OFFSET UNITYSDK_OFFSET(0x1435E920)
#define AKFCOMPHBLJ_PJIBKDJKOJH_OFFSET UNITYSDK_OFFSET(0x143661B0)
#define AKFCOMPHBLJ_POBMKNPJPEL_OFFSET UNITYSDK_OFFSET(0x14362B50)
#define AKFCOMPHBLJ_POPJBGBMHEA_OFFSET UNITYSDK_OFFSET(0x143670C0)
#define AKFCOMPHBLJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1435AC70)

inline static constexpr unsigned int AKFCOMPHBLJ_TypeDefinitionIndex = 77042;

class AKFCOMPHBLJ : public ::System::Object
{
public:
	static ::AKFCOMPHBLJ_GJJLCMBEHME* StaticGet_LMKFNNNNHAC()
	{
		return (::AKFCOMPHBLJ_GJJLCMBEHME*)Il2CppClass::FromTypeDefinitionIndex(AKFCOMPHBLJ_TypeDefinitionIndex)->GetStaticField(0x3D3A0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_IJBAJCEFGGL()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AKFCOMPHBLJ_TypeDefinitionIndex)->GetStaticField(0x3D3B8);
	}
	static ::System::Int32* StaticGet_KMPALNGGNHD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AKFCOMPHBLJ_TypeDefinitionIndex)->GetStaticField(0xE070);
	}
	static ::Foundation::Coroutine::CoroutineHandle* StaticGet_MJOAJFCKJLJ()
	{
		return (::Foundation::Coroutine::CoroutineHandle*)Il2CppClass::FromTypeDefinitionIndex(AKFCOMPHBLJ_TypeDefinitionIndex)->GetStaticField(0xE074);
	}
	// static const ::System::String* KHAGFKFAJHK; // 0x0
	// static const ::System::Single NOGOFEBAIJP; // 0x0
	// static const ::System::Int32 AGEFDNOLJLD = 0x1; // 0x0
	// static const ::System::Boolean HIECFLIADLP = 0x1; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ__CCTOR_OFFSET))();
	}

	static ::PDKBJLIIIEJ* JOJKJBLPMHH()
	{
		return ((::PDKBJLIIIEJ*(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_JOJKJBLPMHH_OFFSET))();
	}

	static ::System::Void OCKODJBJCCM(::System::Collections::Generic::List_1<::System::Int32>* PKGJALGPBID)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_OCKODJBJCCM_OFFSET))(PKGJALGPBID);
	}

	static ::EEHJOPEJOCD* JOHDBIKCDFE()
	{
		return ((::EEHJOPEJOCD*(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_JOHDBIKCDFE_OFFSET))();
	}

	static ::System::Int32 MDIEIIPEEIM(::System::Int32 HFKHFOGHKEG)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_MDIEIIPEEIM_OFFSET))(HFKHFOGHKEG);
	}

	static ::System::Void EIGJFMMMJMJ()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_EIGJFMMMJMJ_OFFSET))();
	}

	static ::System::Void ODMEMOMGCNI(::System::Collections::Generic::HashSet_1<::System::UInt32>* JKMLICJIMJC, ::System::Boolean DCFANHOIMOB)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ODMEMOMGCNI_OFFSET))(JKMLICJIMJC, DCFANHOIMOB);
	}

	static ::System::Void KBNEDMBNPCH(::AKFCOMPHBLJ_DMMJMNBLDDD& param_0)
	{
		return ((::System::Void(*)(::AKFCOMPHBLJ_DMMJMNBLDDD&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_KBNEDMBNPCH_OFFSET))(param_0);
	}

	static ::System::Void OBJMFKLMDMK(::System::Boolean JDCMHAGEFEO, ::System::Boolean IIFGPLLHDCK, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_OBJMFKLMDMK_OFFSET))(JDCMHAGEFEO, IIFGPLLHDCK, AELLPLBJELA);
	}

	static ::System::String* OAAELIKGFHF()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_OAAELIKGFHF_OFFSET))();
	}

	static ::System::Boolean NBDGLGPMOEJ(::System::String* AELLPLBJELA, ::System::Collections::Generic::IEnumerable_1<::System::String*>* LJHOPIIGOHI, ::AKFCOMPHBLJ_LDLHHFMGPLC& param_2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::AKFCOMPHBLJ_LDLHHFMGPLC&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_NBDGLGPMOEJ_OFFSET))(AELLPLBJELA, LJHOPIIGOHI, param_2);
	}

	static ::System::Void BHKCMOMNDIB(::AKFCOMPHBLJ_IAGPNNHDDPN* HAABJMGNKMF, ::System::String*& JGIKDDCPKCA, ::System::Int32& EGCGJNIJLBN)
	{
		return ((::System::Void(*)(::AKFCOMPHBLJ_IAGPNNHDDPN*, ::System::String*&, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_BHKCMOMNDIB_OFFSET))(HAABJMGNKMF, JGIKDDCPKCA, EGCGJNIJLBN);
	}

	static ::System::Void KDEIJJPGGAB(::AKFCOMPHBLJ_DMMJMNBLDDD& param_0)
	{
		return ((::System::Void(*)(::AKFCOMPHBLJ_DMMJMNBLDDD&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_KDEIJJPGGAB_OFFSET))(param_0);
	}

	static ::System::Boolean AJHONLINDOB(::MoleMole::MonoSpawnPoint* LPFMJMABGNH)
	{
		return ((::System::Boolean(*)(::MoleMole::MonoSpawnPoint*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_AJHONLINDOB_OFFSET))(LPFMJMABGNH);
	}

	static ::System::Void HCMHFOGGKKJ(::System::Boolean BAIIOPLFFBH)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_HCMHFOGGKKJ_OFFSET))(BAIIOPLFFBH);
	}

	static ::System::Void FOJKIIENFAD(::FNKOPDEKLKG PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::FNKOPDEKLKG))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_FOJKIIENFAD_OFFSET))(PHHDHIBOCKA);
	}

	static ::System::Void MNALALNCJAO(::MoleMole::Battle::Entity* FINEANOLAPH)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_MNALALNCJAO_OFFSET))(FINEANOLAPH);
	}

	static ::System::Boolean GFMHGGECKKH(::MoleMole::Battle::Entity* PGJHHABANNC, ::MoleMole::Battle::Entity* FINEANOLAPH)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_GFMHGGECKKH_OFFSET))(PGJHHABANNC, FINEANOLAPH);
	}

	static ::System::Boolean GFJNBNOMPFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_GFJNBNOMPFB_OFFSET))();
	}

	static ::System::Void MKBHMNDOJAC(::UnityEngine::GameObject* KGJNEJMKIJK, ::MBAOHJLIJHD* LFNFEHJKKFE, ::BMFKFIEBPNC* GJCLAENOODL, ::System::UInt32 CLCDMOMPPEI, ::System::Boolean IEKCCBANBGN, ::System::String* JHNNKPCCNEJ)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::MBAOHJLIJHD*, ::BMFKFIEBPNC*, ::System::UInt32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_MKBHMNDOJAC_OFFSET))(KGJNEJMKIJK, LFNFEHJKKFE, GJCLAENOODL, CLCDMOMPPEI, IEKCCBANBGN, JHNNKPCCNEJ);
	}

	static ::System::Boolean HGFLOHIFNJO(::System::Collections::Generic::List_1<::System::String*>* AFMBEMLLOLL, ::System::Collections::Generic::IEnumerable_1<::System::String*>* DFPIOILIGGO, ::ANKBGMKLIJP OKONIJEGJOM, ::System::Collections::Generic::HashSet_1<::System::String*>* LIJNMGKOCKJ, ::System::Collections::Generic::HashSet_1<::System::String*>* PGMOMKDNJAN)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::ANKBGMKLIJP, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_HGFLOHIFNJO_OFFSET))(AFMBEMLLOLL, DFPIOILIGGO, OKONIJEGJOM, LIJNMGKOCKJ, PGMOMKDNJAN);
	}

	static ::System::Boolean LFLMGBMAIBE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_LFLMGBMAIBE_OFFSET))();
	}

	static ::System::Boolean EIIAMPMKMMP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_EIIAMPMKMMP_OFFSET))();
	}

	static ::System::Void KIEMJKGIGIA(::System::UInt32 BKLGNCBNEGM, ::System::String* KPIAFDELPJL, ::System::Boolean OLLCKOLGMMC)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_KIEMJKGIGIA_OFFSET))(BKLGNCBNEGM, KPIAFDELPJL, OLLCKOLGMMC);
	}

	static ::System::Boolean BMFKENDILLP(::MoleMole::Config::SceneConfigRuntimeDataArea& KAGEEHADICH, ::System::Int32& PNNGPLNDNAB)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::SceneConfigRuntimeDataArea&, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_BMFKENDILLP_OFFSET))(KAGEEHADICH, PNNGPLNDNAB);
	}

	static ::System::Void FOHENBAIGJL(::AKFCOMPHBLJ_IAGPNNHDDPN* HAABJMGNKMF)
	{
		return ((::System::Void(*)(::AKFCOMPHBLJ_IAGPNNHDDPN*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_FOHENBAIGJL_OFFSET))(HAABJMGNKMF);
	}

	static ::Foundation::Coroutine::CoroutineHandle DMLHOGAMCJK(::System::Single HCOJLFECINK, ::System::Action* GJBHEJGENMI, ::System::Boolean ICHGKFPPIKA)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_DMLHOGAMCJK_OFFSET))(HCOJLFECINK, GJBHEJGENMI, ICHGKFPPIKA);
	}

	static ::System::Boolean CNJGEIMMJKE(::UnityEngine::Vector3& CKPGOKHECCH, ::UnityEngine::Vector3& GJNLCLDFFIN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_CNJGEIMMJKE_OFFSET))(CKPGOKHECCH, GJNLCLDFFIN);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* FMCEDIFONFL(::System::Single EKMCJEFDEKG, ::System::Action* JOODFMNDDMK, ::System::Boolean FGOFBCOHDJL)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Single, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_FMCEDIFONFL_OFFSET))(EKMCJEFDEKG, JOODFMNDDMK, FGOFBCOHDJL);
	}

	static ::System::Boolean NGEOPMIBFLN(::System::String* HFEIPMCNCNI, ::System::Int32 DKLIPMIJNIC, ::System::Boolean BFDIPEJICNJ)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_NGEOPMIBFLN_OFFSET))(HFEIPMCNCNI, DKLIPMIJNIC, BFDIPEJICNJ);
	}

	static ::AGJFJGEMIPB_JDAJAJNPCGG ONAJBNODNPO()
	{
		return ((::AGJFJGEMIPB_JDAJAJNPCGG(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ONAJBNODNPO_OFFSET))();
	}

	static ::Cysharp::Threading::Tasks::UniTask POBMKNPJPEL(::System::Single FNIOPKPHDEH, ::System::Boolean HAPIHACMGPE)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_POBMKNPJPEL_OFFSET))(FNIOPKPHDEH, HAPIHACMGPE);
	}

	static ::System::Boolean IHLNFCHIDFK(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType& HOOCFPAEPGC)
	{
		return ((::System::Boolean(*)(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_IHLNFCHIDFK_OFFSET))(HOOCFPAEPGC);
	}

	static ::System::Void MGCLKPLAMIB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_MGCLKPLAMIB_OFFSET))();
	}

	static ::System::Void CDLEKICCFOC(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_CDLEKICCFOC_OFFSET))(AELLPLBJELA);
	}

	static ::System::Void ABFIALKIOMB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ABFIALKIOMB_OFFSET))();
	}

	static ::System::String* NEFJKMIFCDP(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::String*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_NEFJKMIFCDP_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean PGEMFANGCHG(::MoleMole::Battle::Entity* FINEANOLAPH, ::MoleMole::Battle::Entity*& JHGPEHNCJID)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_PGEMFANGCHG_OFFSET))(FINEANOLAPH, JHGPEHNCJID);
	}

	static ::System::Boolean BNHHHGPBBGL(::System::Collections::Generic::List_1<::System::String*>* JMDOANHOEJG)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_BNHHHGPBBGL_OFFSET))(JMDOANHOEJG);
	}

	static ::System::Void KCOIGMMLBOA(::System::String* JHNNKPCCNEJ, ::System::UInt32 CLCDMOMPPEI, ::MoleMole::Config::StageEntry* NELDMCFPKJI, ::System::Boolean IEKCCBANBGN)
	{
		return ((::System::Void(*)(::System::String*, ::System::UInt32, ::MoleMole::Config::StageEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_KCOIGMMLBOA_OFFSET))(JHNNKPCCNEJ, CLCDMOMPPEI, NELDMCFPKJI, IEKCCBANBGN);
	}

	static ::System::Boolean IAEONEEKOCK(::MoleMole::Battle::Entity* FINEANOLAPH)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_IAEONEEKOCK_OFFSET))(FINEANOLAPH);
	}

	static ::System::Void LPBFEHABOKE(::System::Type* HBHJNGPLMNL, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType BGNBOKFMILG)
	{
		return ((::System::Void(*)(::System::Type*, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_LPBFEHABOKE_OFFSET))(HBHJNGPLMNL, BGNBOKFMILG);
	}

	static ::System::Boolean JCIAIHBPPOH(::System::Int32 NJNCGJLHLKC, ::System::Int32& JGAFBFNKBBD)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_JCIAIHBPPOH_OFFSET))(NJNCGJLHLKC, JGAFBFNKBBD);
	}

	static ::System::Void INJMALEBNOE(::System::Int32 NMFIBMNBHAB, ::System::Collections::Generic::List_1<::System::UInt32>* GBHIEGCENPI)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_INJMALEBNOE_OFFSET))(NMFIBMNBHAB, GBHIEGCENPI);
	}

	static ::HINJLCCCHNM* OBCIHINONKG(::System::Int32 PHHDHIBOCKA)
	{
		return ((::HINJLCCCHNM*(*)(::System::Int32))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_OBCIHINONKG_OFFSET))(PHHDHIBOCKA);
	}

	static ::System::Boolean GMLCDCAICGP(::System::Boolean HCGFMFBKGLB)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_GMLCDCAICGP_OFFSET))(HCGFMFBKGLB);
	}

	static ::System::Int32 GEDLLMECOAD(::System::Int32 BNJIAGILAGG)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_GEDLLMECOAD_OFFSET))(BNJIAGILAGG);
	}

	static ::System::Void FNPLBDBEDFG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_FNPLBDBEDFG_OFFSET))();
	}

	static ::System::UInt32 JAOHMCPJAOJ()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_JAOHMCPJAOJ_OFFSET))();
	}

	static ::System::Boolean MFJECLFDMIF(::System::Type*& IAIPEOGFGHL, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType& BCHGHEKABHF)
	{
		return ((::System::Boolean(*)(::System::Type*&, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_MFJECLFDMIF_OFFSET))(IAIPEOGFGHL, BCHGHEKABHF);
	}

	static ::System::Boolean FKNAKCDGMMO()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_FKNAKCDGMMO_OFFSET))();
	}

	static ::System::Void FIHFCGDFDNO(::System::UInt32 NJNCGJLHLKC, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType BCHGHEKABHF)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_FIHFCGDFDNO_OFFSET))(NJNCGJLHLKC, BCHGHEKABHF);
	}

	static ::System::Void LDGPNDNLEFH(::System::Boolean JDCMHAGEFEO, ::System::String* AELLPLBJELA, ::System::Int32 DKOFFFNEFJC, ::System::Collections::Generic::List_1<::MoleMole::Config::InputGroup>* EJHDJBKJMEC)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::InputGroup>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_LDGPNDNLEFH_OFFSET))(JDCMHAGEFEO, AELLPLBJELA, DKOFFFNEFJC, EJHDJBKJMEC);
	}

	static ::System::Boolean CJCBIGEOEIJ()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_CJCBIGEOEIJ_OFFSET))();
	}

	static ::System::Int32 DKLFAKIJAGD(::HINJLCCCHNM* GEJNLBKCLFA)
	{
		return ((::System::Int32(*)(::HINJLCCCHNM*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_DKLFAKIJAGD_OFFSET))(GEJNLBKCLFA);
	}

	static ::System::Single JLJENFHMOEL(::System::Boolean DDCJJHGIJCD)
	{
		return ((::System::Single(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_JLJENFHMOEL_OFFSET))(DDCJJHGIJCD);
	}

	static ::System::Void LPIBEGOCBEH(::ECFDPGNHMMG GICBMKIKIMH, ::System::String*& JPLKKOHBBKC, ::System::String*& EGNIEIAHPFH)
	{
		return ((::System::Void(*)(::ECFDPGNHMMG, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_LPIBEGOCBEH_OFFSET))(GICBMKIKIMH, JPLKKOHBBKC, EGNIEIAHPFH);
	}

	static ::System::Void NLOIDOHOLIA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_NLOIDOHOLIA_OFFSET))();
	}

	static ::System::Void PJIBKDJKOJH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_PJIBKDJKOJH_OFFSET))();
	}

	static ::FNKOPDEKLKG FKDLICICNIM(::System::String* AELLPLBJELA)
	{
		return ((::FNKOPDEKLKG(*)(::System::String*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_FKDLICICNIM_OFFSET))(AELLPLBJELA);
	}

	static ::System::Void KGFILHCPLDE(::UnityEngine::GameObject* KGJNEJMKIJK, ::System::Collections::Generic::List_1<::System::String*>* OPOJFBLAALI)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_KGFILHCPLDE_OFFSET))(KGJNEJMKIJK, OPOJFBLAALI);
	}

	static ::System::Boolean FHLBNGBMKPI(::UnityEngine::GameObject* KGJNEJMKIJK, ::MBAOHJLIJHD* LFNFEHJKKFE, ::BMFKFIEBPNC* GJCLAENOODL, ::System::UInt32 CLCDMOMPPEI, ::System::Boolean IEKCCBANBGN)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::MBAOHJLIJHD*, ::BMFKFIEBPNC*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_FHLBNGBMKPI_OFFSET))(KGJNEJMKIJK, LFNFEHJKKFE, GJCLAENOODL, CLCDMOMPPEI, IEKCCBANBGN);
	}

	static ::System::Void MDHCGBBAJBC(::System::String* PPGLBDELEBF, ::UnityEngine::LogType CJJAMKPPKII, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::LogType, ::System::String*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_MDHCGBBAJBC_OFFSET))(PPGLBDELEBF, CJJAMKPPKII, AELLPLBJELA);
	}

	static ::System::Boolean GJCLLLPDBEP(::System::Collections::Generic::List_1<::System::String*>* JMDOANHOEJG)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_GJCLLLPDBEP_OFFSET))(JMDOANHOEJG);
	}

	static ::System::Void GFAGGNMBODE(::AKFCOMPHBLJ_DMMJMNBLDDD& param_0)
	{
		return ((::System::Void(*)(::AKFCOMPHBLJ_DMMJMNBLDDD&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_GFAGGNMBODE_OFFSET))(param_0);
	}

	static ::System::Void APPGMEMMKIB(::System::UInt32 BKLGNCBNEGM, ::System::Collections::Generic::IEnumerable_1<::System::String*>* MHGFKGMMKJJ, ::System::Boolean OLLCKOLGMMC)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_APPGMEMMKIB_OFFSET))(BKLGNCBNEGM, MHGFKGMMKJJ, OLLCKOLGMMC);
	}

	static ::System::Void FKOHLAOKNBN(::System::String* PPGLBDELEBF, ::UnityEngine::LogType CJJAMKPPKII)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_FKOHLAOKNBN_OFFSET))(PPGLBDELEBF, CJJAMKPPKII);
	}

	static ::System::Void DADGAPDLNHP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_DADGAPDLNHP_OFFSET))();
	}

	static ::System::Boolean POPJBGBMHEA(::MoleMole::Level::OverrideScenePerformDelayConfig& MLLLGJIDDAK)
	{
		return ((::System::Boolean(*)(::MoleMole::Level::OverrideScenePerformDelayConfig&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_POPJBGBMHEA_OFFSET))(MLLLGJIDDAK);
	}

	static ::System::Void BAANEFLOJGP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_BAANEFLOJGP_OFFSET))();
	}

	static ::System::Boolean CPAMOCACAPO(::System::Collections::Generic::List_1<::System::String*>* AFMBEMLLOLL, ::ANKBGMKLIJP OKONIJEGJOM)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::ANKBGMKLIJP))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_CPAMOCACAPO_OFFSET))(AFMBEMLLOLL, OKONIJEGJOM);
	}

	static ::System::Void EABMDDAAMOI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_EABMDDAAMOI_OFFSET))();
	}

	static ::AGHDCHDNLFG* FJFILCOBFJJ()
	{
		return ((::AGHDCHDNLFG*(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_FJFILCOBFJJ_OFFSET))();
	}

	static ::System::Boolean ABHJKJHLIOF(::AKFCOMPHBLJ_DMMJMNBLDDD& param_0)
	{
		return ((::System::Boolean(*)(::AKFCOMPHBLJ_DMMJMNBLDDD&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ABHJKJHLIOF_OFFSET))(param_0);
	}

	static ::System::Boolean GADLIIHJJLO(::System::String* HFEIPMCNCNI)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_GADLIIHJJLO_OFFSET))(HFEIPMCNCNI);
	}

	static ::System::Void FLEBCJMLHGI(::System::Type* HBHJNGPLMNL, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType BGNBOKFMILG, ::System::Object* HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::System::Type*, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType, ::System::Object*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_FLEBCJMLHGI_OFFSET))(HBHJNGPLMNL, BGNBOKFMILG, HNOPAJLDCFB);
	}

	static ::System::Void NGPOIKCOIGN(::MoleMole::Config::InputGroup OBNIAHNMHPF, ::AKFCOMPHBLJ_BNJOCGHEMCF& param_1)
	{
		return ((::System::Void(*)(::MoleMole::Config::InputGroup, ::AKFCOMPHBLJ_BNJOCGHEMCF&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_NGPOIKCOIGN_OFFSET))(OBNIAHNMHPF, param_1);
	}

	static ::System::Void JDGONKFJKKN(::System::Collections::Generic::List_1<::System::String*>* IJCDJBDDGPG, ::UnityEngine::GameObject* KGJNEJMKIJK)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_JDGONKFJKKN_OFFSET))(IJCDJBDDGPG, KGJNEJMKIJK);
	}

	static ::System::Void BFLLKCHBHCA(::System::Int32 PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_BFLLKCHBHCA_OFFSET))(PHHDHIBOCKA);
	}

	static ::System::Boolean FBGICFOHHLG(::AKFCOMPHBLJ_MOOGPAPLLJH& OPEGDJMFKKO)
	{
		return ((::System::Boolean(*)(::AKFCOMPHBLJ_MOOGPAPLLJH&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_FBGICFOHHLG_OFFSET))(OPEGDJMFKKO);
	}

	static ::UnityEngine::Vector3 GJHLMPCEGFC(::UnityEngine::Vector3 KFPJKMOHGCP, ::UnityEngine::RectTransform* JDPMIDCBGDG)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_GJHLMPCEGFC_OFFSET))(KFPJKMOHGCP, JDPMIDCBGDG);
	}

	static ::MoleMole::Vector2Int IFMDFOGKCBJ(::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Int32 AIOHGHGCHDL, ::System::Int32 MCHHGIOGBLO)
	{
		return ((::MoleMole::Vector2Int(*)(::UnityEngine::Vector3, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_IFMDFOGKCBJ_OFFSET))(OHOGDOMNHNK, AIOHGHGCHDL, MCHHGIOGBLO);
	}

	static ::System::Void AKBEIFPBAGK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_AKBEIFPBAGK_OFFSET))();
	}

	static ::System::Void OBIONHFLLPD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_OBIONHFLLPD_OFFSET))();
	}

	static ::System::Boolean BKPAFMGDGBN(::System::Int32 EMJENMFGOHD, ::KAJAGPBJADH* AJFHCAJJNOH, ::System::Action_1<::System::Int32>* EDNJGMKPFHG, ::System::Int32& HLJEFIIDMFA)
	{
		return ((::System::Boolean(*)(::System::Int32, ::KAJAGPBJADH*, ::System::Action_1<::System::Int32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_BKPAFMGDGBN_OFFSET))(EMJENMFGOHD, AJFHCAJJNOH, EDNJGMKPFHG, HLJEFIIDMFA);
	}

	static ::System::Boolean CKJIPFJIJHG(::MoleMole::Battle::Entity* GIHDKILJGEO, ::System::Boolean BGGFBIKDFEK, ::MoleMole::MonoSpawnPoint*& HHLLGKFNPPD, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*& HBPANNDINGD, ::System::Int32& JINBABHIJBP)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::MoleMole::MonoSpawnPoint*&, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_CKJIPFJIJHG_OFFSET))(GIHDKILJGEO, BGGFBIKDFEK, HHLLGKFNPPD, HBPANNDINGD, JINBABHIJBP);
	}

	static ::MoleMole::Battle::Entity* KKDNDEKIKFG()
	{
		return ((::MoleMole::Battle::Entity*(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_KKDNDEKIKFG_OFFSET))();
	}

	static ::System::Void PBHFKMCBABI(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_PBHFKMCBABI_OFFSET))(AELLPLBJELA);
	}

	static ::System::Void DCLIDIEONEJ(::System::Boolean BMALOBLKJNG, ::System::Int32 NJNCGJLHLKC, ::System::Int32 BKPODJDNEHN)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_DCLIDIEONEJ_OFFSET))(BMALOBLKJNG, NJNCGJLHLKC, BKPODJDNEHN);
	}

	static ::System::Void DLKBBFFNMKG(::System::Boolean IIFGPLLHDCK, ::System::String* AELLPLBJELA, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_DLKBBFFNMKG_OFFSET))(IIFGPLLHDCK, AELLPLBJELA, DKOFFFNEFJC);
	}

	static ::System::Void OCKODJBJCCM_1(::System::Int32 HLJEFIIDMFA)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_OCKODJBJCCM_1_OFFSET))(HLJEFIIDMFA);
	}

	static ::System::Void NILHEMJMBEC(::MHJDIPINMMF* DJPBCGFPJMG)
	{
		return ((::System::Void(*)(::MHJDIPINMMF*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_NILHEMJMBEC_OFFSET))(DJPBCGFPJMG);
	}

	static ::System::Single CPKFBOFPPNO()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_CPKFBOFPPNO_OFFSET))();
	}
};
