#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/GroupStateType.h"
#include "unitysdk/System/Nullable_1.h"
class BBOFEHOPCEC;
class EFHJJIGLPDL;
class EJFAHBINDIN;
class EONKJJEBGLN;
class GELIALJDFBL;
class HJCOLAEIJFM;
class KDJNAAOFMMJ;
class LNJBLBNFHKM;
class MBLNBLHNFIF;
class NMNFKDPJIDP;
class NOEBJBDLNGN;
class OONGDLIDJJJ;
class PFPBBALKHOL;
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class AIConfig; }
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class AITransitionTableRow; }
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BACCOPOCMPC_BCEDBDFLOLO_OFFSET UNITYSDK_OFFSET(0x16CE2280)
#define BACCOPOCMPC_BFIOHODMOFG_OFFSET UNITYSDK_OFFSET(0x16CE0AA0)
#define BACCOPOCMPC_BJKJKHKCILG_OFFSET UNITYSDK_OFFSET(0x16CE12F0)
#define BACCOPOCMPC_BLNCFDKFHCO_OFFSET UNITYSDK_OFFSET(0x16CE0660)
#define BACCOPOCMPC_CDGFNKAPLPB_OFFSET UNITYSDK_OFFSET(0x16CE0A50)
#define BACCOPOCMPC_CKHNBIEDJOH_OFFSET UNITYSDK_OFFSET(0x16CE0020)
#define BACCOPOCMPC_CKLJMNJNEND_OFFSET UNITYSDK_OFFSET(0x16CDFAD0)
#define BACCOPOCMPC_CTOR_OFFSET UNITYSDK_OFFSET(0x16CDE9E0)
#define BACCOPOCMPC_DFEBBAKLDEL_OFFSET UNITYSDK_OFFSET(0x16CDFF70)
#define BACCOPOCMPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16CDEB90)
#define BACCOPOCMPC_DKLAHCEKOOD_OFFSET UNITYSDK_OFFSET(0x16CE25F0)
#define BACCOPOCMPC_ECIJJGIHGNJ_OFFSET UNITYSDK_OFFSET(0x16CE0600)
#define BACCOPOCMPC_EKDEABIGPFC_OFFSET UNITYSDK_OFFSET(0x16CE2070)
#define BACCOPOCMPC_FFABGKNJIKO_OFFSET UNITYSDK_OFFSET(0x16CDF220)
#define BACCOPOCMPC_FJMAFKJAJED_OFFSET UNITYSDK_OFFSET(0x16CDF9E0)
#define BACCOPOCMPC_FLKHOPIKFJP_OFFSET UNITYSDK_OFFSET(0x16CE1BB0)
#define BACCOPOCMPC_FNDJHFBJIBN_OFFSET UNITYSDK_OFFSET(0x16CE23B0)
#define BACCOPOCMPC_GCLHJLPCKIK_OFFSET UNITYSDK_OFFSET(0x16CE0D30)
#define BACCOPOCMPC_GEONMPFGNFJ_OFFSET UNITYSDK_OFFSET(0x16CE10A0)
#define BACCOPOCMPC_GET_CHARACTERAICONFIG_OFFSET UNITYSDK_OFFSET(0x16CE2090)
#define BACCOPOCMPC_GIDGIAMIIFP_OFFSET UNITYSDK_OFFSET(0x16CE2590)
#define BACCOPOCMPC_HCNHGNEPFEG_OFFSET UNITYSDK_OFFSET(0x16CE00A0)
#define BACCOPOCMPC_JBJNJKLHHHG_OFFSET UNITYSDK_OFFSET(0x16CE13D0)
#define BACCOPOCMPC_JGEPIMDLGIB_OFFSET UNITYSDK_OFFSET(0x16CE21A0)
#define BACCOPOCMPC_JLJNPDNDCJH_OFFSET UNITYSDK_OFFSET(0x16CE2230)
#define BACCOPOCMPC_KBHIONPNEKN_OFFSET UNITYSDK_OFFSET(0x16CE27E0)
#define BACCOPOCMPC_KHDKBJFENNG_OFFSET UNITYSDK_OFFSET(0x16CE2080)
#define BACCOPOCMPC_KKMHKGGFEPB_OFFSET UNITYSDK_OFFSET(0x16CDF5C0)
#define BACCOPOCMPC_LBNBNIGOBHP_OFFSET UNITYSDK_OFFSET(0x16CDFC90)
#define BACCOPOCMPC_LDMGACEJCAF_OFFSET UNITYSDK_OFFSET(0x16CDFE30)
#define BACCOPOCMPC_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x16CDEFF0)
#define BACCOPOCMPC_MDDGDHOMDAB_OFFSET UNITYSDK_OFFSET(0x16CE0360)
#define BACCOPOCMPC_MFPMJNPAMNE_OFFSET UNITYSDK_OFFSET(0x16CE20C0)
#define BACCOPOCMPC_MICDLEMDBBF_OFFSET UNITYSDK_OFFSET(0x16CE06C0)
#define BACCOPOCMPC_MPGICNPMLDN_OFFSET UNITYSDK_OFFSET(0x16CE2050)
#define BACCOPOCMPC_NBJPMCOFENA_OFFSET UNITYSDK_OFFSET(0x16CE22A0)
#define BACCOPOCMPC_NDKKJHBFJPM_OFFSET UNITYSDK_OFFSET(0x16CE0140)
#define BACCOPOCMPC_NFAHMEHMMOI_OFFSET UNITYSDK_OFFSET(0x16CE2840)
#define BACCOPOCMPC_NOIMPGPJKMD_OFFSET UNITYSDK_OFFSET(0x16CE11E0)
#define BACCOPOCMPC_OAMODDLELFJ_OFFSET UNITYSDK_OFFSET(0x16CE1C90)
#define BACCOPOCMPC_OCMJALNLAKN_OFFSET UNITYSDK_OFFSET(0x16CE1030)
#define BACCOPOCMPC_ODAPHOINLGD_OFFSET UNITYSDK_OFFSET(0x16CE22F0)
#define BACCOPOCMPC_ODHFFKLCDOO_OFFSET UNITYSDK_OFFSET(0x16CE2290)
#define BACCOPOCMPC_OMBLMDLCHCB_OFFSET UNITYSDK_OFFSET(0x16CE1F90)
#define BACCOPOCMPC_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x16CDFB20)
#define BACCOPOCMPC_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x16CDFDE0)
#define BACCOPOCMPC_OOJAHMNGLEO_OFFSET UNITYSDK_OFFSET(0x16CE0190)
#define BACCOPOCMPC_OOOBGOFMBHA_OFFSET UNITYSDK_OFFSET(0x16CE2120)
#define BACCOPOCMPC_PBDCBFELGMG_OFFSET UNITYSDK_OFFSET(0x16CE0BE0)
#define BACCOPOCMPC_PFBCNPCLGNC_OFFSET UNITYSDK_OFFSET(0x16CE20B0)
#define BACCOPOCMPC_PHDABOGDLFN_OFFSET UNITYSDK_OFFSET(0x16CE2940)
#define BACCOPOCMPC_POOABFGCBCK_OFFSET UNITYSDK_OFFSET(0x16CDFBA0)
#define BACCOPOCMPC_SET_CHARACTERAICONFIG_OFFSET UNITYSDK_OFFSET(0x16CE20A0)
#define BACCOPOCMPC_TICK_OFFSET UNITYSDK_OFFSET(0x16CE01F0)
#define BACCOPOCMPC__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x16CDEB20)

inline static constexpr unsigned int BACCOPOCMPC_TypeDefinitionIndex = 58081;

	class BACCOPOCMPC : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::NOEBJBDLNGN* DEDCFCIEIKN; // 0x18
		::OONGDLIDJJJ* LAPCOHEMCJN; // 0x20
		::System::Collections::Generic::List_1<::EJFAHBINDIN*>* CDGNAAEBFAO; // 0x28
		::BBOFEHOPCEC* BNKBHMFAABF; // 0x30
		::RPG::GameCore::AdventureCharacterDataComponent* IAOIDJGPFJC; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* GBOENHFINMI; // 0x40
		::EJFAHBINDIN* PMLHEMADKBJ; // 0x48
		::System::Collections::Generic::Dictionary_2<::EJFAHBINDIN*, ::System::Collections::Generic::List_1<::EJFAHBINDIN*>*>* PIBFMOIEAGI; // 0x50
		::System::String* JJEJFEEDJHA; // 0x58
		::RPG::GameCore::TransformComponent* HECGANBMFLG; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AIVariable*>* LJMAODMPOKB; // 0x68
		::RPG::GameCore::TaskContext* KKEDCIEAGPC; // 0x70
		::EONKJJEBGLN* MJLBNMOGCJF; // 0x78
		::HJCOLAEIJFM* MCALIHKCHMA; // 0x80
		::RPG::GameCore::AIConfig* OFKGLJOAMLD; // 0x88
		::NMNFKDPJIDP* IBEBHLKNDFI; // 0x90
		::RPG::GameCore::NPCComponent* MOHNNLPBAIP; // 0x98
		::EFHJJIGLPDL* LKNDEOKIEAK; // 0xA0
		::LNJBLBNFHKM* ILIGMBNHHHA; // 0xA8
		::GELIALJDFBL* LHJBPEBMKDN; // 0xB0
		::KDJNAAOFMMJ* ENAIBJGFMFI; // 0xB8
		::MBLNBLHNFIF* FGLBLDAMDBE; // 0xC0
		::PFPBBALKHOL* _CharacterAIConfig_k__BackingField; // 0xC8
		::System::Boolean FMNEEONAMNO; // 0xD0
		::System::Boolean KPDPFJOAIBI; // 0xD1
		::System::Boolean PFAAPOBBDEJ; // 0xD2
		::System::Boolean APBBLGEJFDH; // 0xD3
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::System::String* a1, ::RPG::Client::MapNpcDef* a2, ::PFPBBALKHOL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::MapNpcDef*, ::PFPBBALKHOL*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CKLJMNJNEND(::PFPBBALKHOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFPBBALKHOL*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_CKLJMNJNEND_OFFSET))(this, a1);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void FJMAFKJAJED(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BACCOPOCMPC_FJMAFKJAJED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LBNBNIGOBHP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BACCOPOCMPC_LBNBNIGOBHP_OFFSET))(this, a1);
		}

		::System::Void LDMGACEJCAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_LDMGACEJCAF_OFFSET))(this);
		}

		::RPG::GameCore::AIVariable* DFEBBAKLDEL(::System::String* a1)
		{
			return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_DFEBBAKLDEL_OFFSET))(this, a1);
		}

		::System::Boolean CKHNBIEDJOH(::RPG::GameCore::AIStatus a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIStatus))((::PBYTE)hIl2Cpp + BACCOPOCMPC_CKHNBIEDJOH_OFFSET))(this, a1);
		}

		::System::Void HCNHGNEPFEG(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BACCOPOCMPC_HCNHGNEPFEG_OFFSET))(this, a1, a2);
		}

		::System::Void NDKKJHBFJPM(::BBOFEHOPCEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBOFEHOPCEC*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_NDKKJHBFJPM_OFFSET))(this, a1);
		}

		::System::Void OOJAHMNGLEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_OOJAHMNGLEO_OFFSET))(this);
		}

		::System::Void MDDGDHOMDAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_MDDGDHOMDAB_OFFSET))(this);
		}

		::System::String* ECIJJGIHGNJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_ECIJJGIHGNJ_OFFSET))(this);
		}

		::System::String* BLNCFDKFHCO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_BLNCFDKFHCO_OFFSET))(this);
		}

		::System::String* MICDLEMDBBF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_MICDLEMDBBF_OFFSET))(this);
		}

		::RPG::GameCore::AIConfig* CDGFNKAPLPB()
		{
			return ((::RPG::GameCore::AIConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_CDGFNKAPLPB_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BACCOPOCMPC_TICK_OFFSET))(this, a1);
		}

		::System::Void FFABGKNJIKO(::PFPBBALKHOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFPBBALKHOL*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_FFABGKNJIKO_OFFSET))(this, a1);
		}

		::System::Void KKMHKGGFEPB(::System::String* a1, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_KKMHKGGFEPB_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TaskContext* PBDCBFELGMG(::OONGDLIDJJJ* a1)
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_PBDCBFELGMG_OFFSET))(this, a1);
		}

		::System::Void OCMJALNLAKN(::Il2CppArray<::RPG::GameCore::AIVariable*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_OCMJALNLAKN_OFFSET))(this, a1);
		}

		::System::Void GEONMPFGNFJ(::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_GEONMPFGNFJ_OFFSET))(this, a1, a2);
		}

		::System::Void BJKJKHKCILG(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_BJKJKHKCILG_OFFSET))(this, a1, a2);
		}

		::System::Void NOIMPGPJKMD(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_NOIMPGPJKMD_OFFSET))(this, a1, a2);
		}

		::EJFAHBINDIN* FLKHOPIKFJP(::System::Collections::Generic::Dictionary_2<::System::String*, ::EJFAHBINDIN*>* a1, ::System::String* a2)
		{
			return ((::EJFAHBINDIN*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::EJFAHBINDIN*>*, ::System::String*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_FLKHOPIKFJP_OFFSET))(this, a1, a2);
		}

		::System::Void JBJNJKLHHHG(::Il2CppArray<::RPG::GameCore::AITransitionTableRow*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AITransitionTableRow*>*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_JBJNJKLHHHG_OFFSET))(this, a1);
		}

		::System::Void BFIOHODMOFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_BFIOHODMOFG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::EJFAHBINDIN*>* OMBLMDLCHCB()
		{
			return ((::System::Collections::Generic::List_1<::EJFAHBINDIN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_OMBLMDLCHCB_OFFSET))(this);
		}

		::EJFAHBINDIN* OAMODDLELFJ()
		{
			return ((::EJFAHBINDIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_OAMODDLELFJ_OFFSET))(this);
		}

		::System::Void GCLHJLPCKIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_GCLHJLPCKIK_OFFSET))(this);
		}

		::System::Void POOABFGCBCK(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_POOABFGCBCK_OFFSET))(this, a1, a2);
		}

		::System::Boolean MPGICNPMLDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_MPGICNPMLDN_OFFSET))(this);
		}

		::LNJBLBNFHKM* EKDEABIGPFC()
		{
			return ((::LNJBLBNFHKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_EKDEABIGPFC_OFFSET))(this);
		}

		::System::Boolean KHDKBJFENNG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_KHDKBJFENNG_OFFSET))(this);
		}

		::PFPBBALKHOL* get_CharacterAIConfig()
		{
			return ((::PFPBBALKHOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_GET_CHARACTERAICONFIG_OFFSET))(this);
		}

		::System::Void set_CharacterAIConfig(::PFPBBALKHOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFPBBALKHOL*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_SET_CHARACTERAICONFIG_OFFSET))(this, a1);
		}

		::BBOFEHOPCEC* PFBCNPCLGNC()
		{
			return ((::BBOFEHOPCEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_PFBCNPCLGNC_OFFSET))(this);
		}

		::System::Void MFPMJNPAMNE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_MFPMJNPAMNE_OFFSET))(this, a1);
		}

		::System::Void OOOBGOFMBHA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_OOOBGOFMBHA_OFFSET))(this, a1);
		}

		::System::Boolean JGEPIMDLGIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_JGEPIMDLGIB_OFFSET))(this);
		}

		::System::Void JLJNPDNDCJH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BACCOPOCMPC_JLJNPDNDCJH_OFFSET))(this, a1);
		}

		::MBLNBLHNFIF* BCEDBDFLOLO()
		{
			return ((::MBLNBLHNFIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_BCEDBDFLOLO_OFFSET))(this);
		}

		::System::Boolean ODHFFKLCDOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_ODHFFKLCDOO_OFFSET))(this);
		}

		::System::Void NBJPMCOFENA(::NMNFKDPJIDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMNFKDPJIDP*))((::PBYTE)hIl2Cpp + BACCOPOCMPC_NBJPMCOFENA_OFFSET))(this, a1);
		}

		::System::Void ODAPHOINLGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_ODAPHOINLGD_OFFSET))(this);
		}

		::System::Void FNDJHFBJIBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_FNDJHFBJIBN_OFFSET))(this);
		}

		::System::Boolean DKLAHCEKOOD(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BACCOPOCMPC_DKLAHCEKOOD_OFFSET))(this, a1);
		}

		::System::Nullable_1<::RPG::GameCore::GroupStateType> GIDGIAMIIFP()
		{
			return ((::System::Nullable_1<::RPG::GameCore::GroupStateType>(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_GIDGIAMIIFP_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* KBHIONPNEKN()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACCOPOCMPC_KBHIONPNEKN_OFFSET))(this);
		}

		::System::Void NFAHMEHMMOI(::GELIALJDFBL* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::GELIALJDFBL*, ::System::Boolean))((::PBYTE)hIl2Cpp + BACCOPOCMPC_NFAHMEHMMOI_OFFSET))(this, a1, a2);
		}

		::System::Boolean PHDABOGDLFN(::GELIALJDFBL* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GELIALJDFBL*, ::System::Boolean))((::PBYTE)hIl2Cpp + BACCOPOCMPC_PHDABOGDLFN_OFFSET))(this, a1, a2);
		}

	};
