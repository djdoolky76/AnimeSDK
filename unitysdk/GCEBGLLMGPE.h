#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKDAANCFPGO.h"
#include "unitysdk/RPG/Client/LittleGameShare/StateTreePhase.h"
#include "unitysdk/RPG/Client/LittleGameShare/TaskState.h"
class DOEPPCHKFPB;
class GKDAANCFPGO;
class HOCOAKLFNCD;
class JIEIDACMLOK;
class MGPEJKEMDPK;
class PAPOPANPGIJ;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class StateTreeRootStateConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GCEBGLLMGPE_AEOALNDCBPH_OFFSET UNITYSDK_OFFSET(0x1C604120)
#define GCEBGLLMGPE_AJLAGFDFFBC_OFFSET UNITYSDK_OFFSET(0x1C604850)
#define GCEBGLLMGPE_BDPOAJLKOHE_OFFSET UNITYSDK_OFFSET(0x1C5FFE10)
#define GCEBGLLMGPE_BLNCFDKFHCO_OFFSET UNITYSDK_OFFSET(0x1C604630)
#define GCEBGLLMGPE_CAGHBENIEEE_OFFSET UNITYSDK_OFFSET(0x1C6024E0)
#define GCEBGLLMGPE_CCCGOGFADDD_OFFSET UNITYSDK_OFFSET(0x1C6039E0)
#define GCEBGLLMGPE_CFLIMPAIIGJ_OFFSET UNITYSDK_OFFSET(0x1C603C80)
#define GCEBGLLMGPE_CKOBHKODKPA_OFFSET UNITYSDK_OFFSET(0x1C603760)
#define GCEBGLLMGPE_CMALABPHIIG_OFFSET UNITYSDK_OFFSET(0x1C604820)
#define GCEBGLLMGPE_CPIBODBNKBB_OFFSET UNITYSDK_OFFSET(0x1C603590)
#define GCEBGLLMGPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FFA90)
#define GCEBGLLMGPE_DCADIANHPFD_OFFSET UNITYSDK_OFFSET(0x1C6008B0)
#define GCEBGLLMGPE_DDFMKFKLPKN_OFFSET UNITYSDK_OFFSET(0x1C603CF0)
#define GCEBGLLMGPE_DDOPKFPKFCB_OFFSET UNITYSDK_OFFSET(0x1C603EB0)
#define GCEBGLLMGPE_DHLLMFMCHEL_OFFSET UNITYSDK_OFFSET(0x1C601EC0)
#define GCEBGLLMGPE_EAKJGKCNLBL_OFFSET UNITYSDK_OFFSET(0x1C603250)
#define GCEBGLLMGPE_ECIJJGIHGNJ_OFFSET UNITYSDK_OFFSET(0x1C604410)
#define GCEBGLLMGPE_EELIONFPJHL_OFFSET UNITYSDK_OFFSET(0x1C603DF0)
#define GCEBGLLMGPE_EGNNPBCLJNL_OFFSET UNITYSDK_OFFSET(0x1C601A30)
#define GCEBGLLMGPE_GET_CUREVENT_OFFSET UNITYSDK_OFFSET(0x1C604870)
#define GCEBGLLMGPE_GET_CURSELECTROOTSTATE_OFFSET UNITYSDK_OFFSET(0x1C604890)
#define GCEBGLLMGPE_HFODDGLNJGJ_OFFSET UNITYSDK_OFFSET(0x1C603BD0)
#define GCEBGLLMGPE_HMHNKNPBBIH_OFFSET UNITYSDK_OFFSET(0x1C604860)
#define GCEBGLLMGPE_IFJKJJGKFEG_OFFSET UNITYSDK_OFFSET(0x1C604270)
#define GCEBGLLMGPE_IPMMNCCNAPO_OFFSET UNITYSDK_OFFSET(0x1C604840)
#define GCEBGLLMGPE_JGPMDNGGMJG_OFFSET UNITYSDK_OFFSET(0x1C601450)
#define GCEBGLLMGPE_JHFJDANFALF_OFFSET UNITYSDK_OFFSET(0x1C603000)
#define GCEBGLLMGPE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C6011A0)
#define GCEBGLLMGPE_KAAIOJKMCDC_OFFSET UNITYSDK_OFFSET(0x1C603390)
#define GCEBGLLMGPE_KCNNBFOAFPN_OFFSET UNITYSDK_OFFSET(0x1C603D40)
#define GCEBGLLMGPE_MEMGMMDKNPG_OFFSET UNITYSDK_OFFSET(0x1C602B90)
#define GCEBGLLMGPE_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x1C6009F0)
#define GCEBGLLMGPE_MNKKHADFENL_OFFSET UNITYSDK_OFFSET(0x1C600810)
#define GCEBGLLMGPE_NFANNGGMHAI_OFFSET UNITYSDK_OFFSET(0x1C600A30)
#define GCEBGLLMGPE_OBIGNMKENJJ_OFFSET UNITYSDK_OFFSET(0x1C603F90)
#define GCEBGLLMGPE_OGOLBAHKOMK_OFFSET UNITYSDK_OFFSET(0x1C601F90)
#define GCEBGLLMGPE_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1C6009B0)
#define GCEBGLLMGPE_PFNDPAILDJP_OFFSET UNITYSDK_OFFSET(0x1C604830)
#define GCEBGLLMGPE_PHLHELLLGNN_OFFSET UNITYSDK_OFFSET(0x1C601210)
#define GCEBGLLMGPE_SET_CUREVENT_OFFSET UNITYSDK_OFFSET(0x1C604880)
#define GCEBGLLMGPE_SET_CURSELECTROOTSTATE_OFFSET UNITYSDK_OFFSET(0x1C6048A0)

inline static constexpr unsigned int GCEBGLLMGPE_TypeDefinitionIndex = 36968;

	class GCEBGLLMGPE : public ::GKDAANCFPGO
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::GKDAANCFPGO*>* IAIHPPPOMFD; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* AHOOLDFODPL; // 0x70
		::System::Collections::Generic::List_1<::HOCOAKLFNCD*>* CGAFLADBKCB; // 0x78
		::JIEIDACMLOK* OPJKIFILBEN; // 0x80
		::GKDAANCFPGO* _CurSelectRootState_k__BackingField; // 0x88
		::GKDAANCFPGO* JJBOPOPCOCH; // 0x90
		::System::Collections::Generic::List_1<::GKDAANCFPGO*>* JNIOMELGMAM; // 0x98
		::System::String* BEPENCIBLDA; // 0xA0
		::JIEIDACMLOK* LLDLACBENFC; // 0xA8
		::System::Collections::Generic::List_1<::DOEPPCHKFPB*>* FJKHBIMOACG; // 0xB0
		::System::Collections::Generic::List_1<::GKDAANCFPGO*>* JDDEKNMPGEL; // 0xB8
		::System::String* HOPCJMCHOEK; // 0xC0
		::System::String* _CurEvent_k__BackingField; // 0xC8
		::RPG::Client::LittleGameShare::StateTreePhase GDHFEAKLHFJ; // 0xD0
		::RPG::Client::LittleGameShare::TaskState KLCKPHBAEHH; // 0xD4
		::System::Boolean AGOBMBIPJKC; // 0xD8
		::System::Void _ctor(::RPG::GameCore::StateTreeRootStateConfig* a1, ::PAPOPANPGIJ* a2, ::System::String* a3, ::System::String* a4, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a5, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a6, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StateTreeRootStateConfig*, ::PAPOPANPGIJ*, ::System::String*, ::System::String*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void BDPOAJLKOHE(::Il2CppArray<::RPG::GameCore::AIVariable*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_BDPOAJLKOHE_OFFSET))(this, a1);
		}

		::System::Void MNKKHADFENL(::Il2CppArray<::RPG::GameCore::AIVariable*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_MNKKHADFENL_OFFSET))(this, a1);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void NFANNGGMHAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_NFANNGGMHAI_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void PHLHELLLGNN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_PHLHELLLGNN_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::TaskState JGPMDNGGMJG(::System::Single a1)
		{
			return ((::RPG::Client::LittleGameShare::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_JGPMDNGGMJG_OFFSET))(this, a1);
		}

		::System::Void EGNNPBCLJNL(::GKDAANCFPGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKDAANCFPGO*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_EGNNPBCLJNL_OFFSET))(this, a1);
		}

		::System::Void KAAIOJKMCDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_KAAIOJKMCDC_OFFSET))(this);
		}

		::System::Void CPIBODBNKBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_CPIBODBNKBB_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::TaskState DHLLMFMCHEL()
		{
			return ((::RPG::Client::LittleGameShare::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_DHLLMFMCHEL_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::TaskState JHFJDANFALF(::System::Single a1)
		{
			return ((::RPG::Client::LittleGameShare::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_JHFJDANFALF_OFFSET))(this, a1);
		}

		::System::Boolean CKOBHKODKPA(::MGPEJKEMDPK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGPEJKEMDPK*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_CKOBHKODKPA_OFFSET))(this, a1);
		}

		::System::Boolean MEMGMMDKNPG(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_MEMGMMDKNPG_OFFSET))(this, a1);
		}

		::System::Boolean OGOLBAHKOMK(::RPG::Client::LittleGameShare::TaskState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameShare::TaskState))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_OGOLBAHKOMK_OFFSET))(this, a1);
		}

		::System::Boolean CAGHBENIEEE(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_CAGHBENIEEE_OFFSET))(this, a1);
		}

		::System::Void HFODDGLNJGJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_HFODDGLNJGJ_OFFSET))(this, a1);
		}

		::System::Void CFLIMPAIIGJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_CFLIMPAIIGJ_OFFSET))(this, a1);
		}

		::System::Void EAKJGKCNLBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_EAKJGKCNLBL_OFFSET))(this);
		}

		::System::Boolean CCCGOGFADDD(::GKDAANCFPGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKDAANCFPGO*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_CCCGOGFADDD_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::TaskState DDFMKFKLPKN()
		{
			return ((::RPG::Client::LittleGameShare::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_DDFMKFKLPKN_OFFSET))(this);
		}

		::System::Boolean KCNNBFOAFPN(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_KCNNBFOAFPN_OFFSET))(this, a1);
		}

		::System::Void EELIONFPJHL(::System::String* a1, ::GKDAANCFPGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::GKDAANCFPGO*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_EELIONFPJHL_OFFSET))(this, a1, a2);
		}

		::System::Void DDOPKFPKFCB(::HOCOAKLFNCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOCOAKLFNCD*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_DDOPKFPKFCB_OFFSET))(this, a1);
		}

		::HOCOAKLFNCD* OBIGNMKENJJ(::System::String* a1)
		{
			return ((::HOCOAKLFNCD*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_OBIGNMKENJJ_OFFSET))(this, a1);
		}

		::System::Void AEOALNDCBPH(::DOEPPCHKFPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOEPPCHKFPB*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_AEOALNDCBPH_OFFSET))(this, a1);
		}

		::DOEPPCHKFPB* IFJKJJGKFEG(::System::String* a1)
		{
			return ((::DOEPPCHKFPB*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_IFJKJJGKFEG_OFFSET))(this, a1);
		}

		::System::String* ECIJJGIHGNJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_ECIJJGIHGNJ_OFFSET))(this);
		}

		::System::String* BLNCFDKFHCO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_BLNCFDKFHCO_OFFSET))(this);
		}

		::System::Void DCADIANHPFD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_DCADIANHPFD_OFFSET))(this, a1);
		}

		::System::String* CMALABPHIIG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_CMALABPHIIG_OFFSET))(this);
		}

		::System::String* PFNDPAILDJP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_PFNDPAILDJP_OFFSET))(this);
		}

		::JIEIDACMLOK* IPMMNCCNAPO()
		{
			return ((::JIEIDACMLOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_IPMMNCCNAPO_OFFSET))(this);
		}

		::JIEIDACMLOK* AJLAGFDFFBC()
		{
			return ((::JIEIDACMLOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_AJLAGFDFFBC_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::TaskState HMHNKNPBBIH()
		{
			return ((::RPG::Client::LittleGameShare::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_HMHNKNPBBIH_OFFSET))(this);
		}

		::System::String* get_CurEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_GET_CUREVENT_OFFSET))(this);
		}

		::System::Void set_CurEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_SET_CUREVENT_OFFSET))(this, a1);
		}

		::GKDAANCFPGO* get_CurSelectRootState()
		{
			return ((::GKDAANCFPGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_GET_CURSELECTROOTSTATE_OFFSET))(this);
		}

		::System::Void set_CurSelectRootState(::GKDAANCFPGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKDAANCFPGO*))((::PBYTE)hIl2Cpp + GCEBGLLMGPE_SET_CURSELECTROOTSTATE_OFFSET))(this, a1);
		}

	};
