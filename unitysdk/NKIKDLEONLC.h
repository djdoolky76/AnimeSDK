#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexAIStrategy.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/TurnBasedAIDecisionResult.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class BAGIHIEADIL;
class EJFAHBINDIN;
class FOEAEFCBCOM;
class GELIALJDFBL;
class KDJNAAOFMMJ;
class OONGDLIDJJJ;
namespace RPG::GameCore { class AIConfig; }
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class StandaloneComplexSkillAIConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NKIKDLEONLC_AJIEDNFLFCE_OFFSET UNITYSDK_OFFSET(0xBC37390)
#define NKIKDLEONLC_AKLDAOEALMG_OFFSET UNITYSDK_OFFSET(0xBC36EA0)
#define NKIKDLEONLC_ALHDGMHGMHA_OFFSET UNITYSDK_OFFSET(0xBC36B20)
#define NKIKDLEONLC_BFIOHODMOFG_OFFSET UNITYSDK_OFFSET(0xBC36E30)
#define NKIKDLEONLC_BGFNGKOMLAD_OFFSET UNITYSDK_OFFSET(0xBC38520)
#define NKIKDLEONLC_CFBMBNLGAOD_OFFSET UNITYSDK_OFFSET(0xBC37250)
#define NKIKDLEONLC_CMBOEABJEHH_OFFSET UNITYSDK_OFFSET(0xBC36CC0)
#define NKIKDLEONLC_CTOR_OFFSET UNITYSDK_OFFSET(0xBC35AF0)
#define NKIKDLEONLC_DGJJFJHAOII_OFFSET UNITYSDK_OFFSET(0xBC37AF0)
#define NKIKDLEONLC_DHFLDLBNJEI_OFFSET UNITYSDK_OFFSET(0xBC36F50)
#define NKIKDLEONLC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC35BD0)
#define NKIKDLEONLC_DNLNJDMBEDG_OFFSET UNITYSDK_OFFSET(0xBC383D0)
#define NKIKDLEONLC_EGAPMGDBCHN_OFFSET UNITYSDK_OFFSET(0xBC38700)
#define NKIKDLEONLC_EHAJGIMOIHI_OFFSET UNITYSDK_OFFSET(0xBC37EC0)
#define NKIKDLEONLC_ENAKOBLHGIG_OFFSET UNITYSDK_OFFSET(0xBC38630)
#define NKIKDLEONLC_FJKFKNBDCHJ_OFFSET UNITYSDK_OFFSET(0xBC375C0)
#define NKIKDLEONLC_GBFJEBIOGKP_OFFSET UNITYSDK_OFFSET(0xBC374D0)
#define NKIKDLEONLC_GEONMPFGNFJ_OFFSET UNITYSDK_OFFSET(0xBC37D60)
#define NKIKDLEONLC_GET_AUTODESICIONWHENNOTAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0xBC38610)
#define NKIKDLEONLC_GET_CURCRAZYAIBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xBC386C0)
#define NKIKDLEONLC_GET_ISUSINGAUTOINSERTACTION_OFFSET UNITYSDK_OFFSET(0xBC386E0)
#define NKIKDLEONLC_GET_MANUALLYMARKUSETEMPORARYLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xBC386A0)
#define NKIKDLEONLC_GLHJOCBPCJD_OFFSET UNITYSDK_OFFSET(0xBC37300)
#define NKIKDLEONLC_GMMOKMKOJBF_OFFSET UNITYSDK_OFFSET(0xBC36FE0)
#define NKIKDLEONLC_HEFBIDGOABP_OFFSET UNITYSDK_OFFSET(0xBC37AE0)
#define NKIKDLEONLC_HEHJLDKINLE_OFFSET UNITYSDK_OFFSET(0xBC36AB0)
#define NKIKDLEONLC_JNDCLCLJJJF_OFFSET UNITYSDK_OFFSET(0xBC37680)
#define NKIKDLEONLC_KKHPDCJJPDN_OFFSET UNITYSDK_OFFSET(0xBC376F0)
#define NKIKDLEONLC_KKMHKGGFEPB_OFFSET UNITYSDK_OFFSET(0xBC35EE0)
#define NKIKDLEONLC_LDMMMCJPNFF_OFFSET UNITYSDK_OFFSET(0xBC377E0)
#define NKIKDLEONLC_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xBC35E60)
#define NKIKDLEONLC_MEHCDJAKINK_OFFSET UNITYSDK_OFFSET(0xBC36350)
#define NKIKDLEONLC_MJNHEBBDHEN_OFFSET UNITYSDK_OFFSET(0xBC36450)
#define NKIKDLEONLC_NPOAKKMICOF_OFFSET UNITYSDK_OFFSET(0xBC36A30)
#define NKIKDLEONLC_OAMODDLELFJ_OFFSET UNITYSDK_OFFSET(0xBC380B0)
#define NKIKDLEONLC_OCMJALNLAKN_OFFSET UNITYSDK_OFFSET(0xBC37CF0)
#define NKIKDLEONLC_OOKFNPPHHEK_OFFSET UNITYSDK_OFFSET(0xBC37060)
#define NKIKDLEONLC_PBDCBFELGMG_OFFSET UNITYSDK_OFFSET(0xBC37BA0)
#define NKIKDLEONLC_POOABFGCBCK_OFFSET UNITYSDK_OFFSET(0xBC37FD0)
#define NKIKDLEONLC_SET_AUTODESICIONWHENNOTAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0xBC38620)
#define NKIKDLEONLC_SET_CURCRAZYAIBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xBC386D0)
#define NKIKDLEONLC_SET_ISUSINGAUTOINSERTACTION_OFFSET UNITYSDK_OFFSET(0xBC386F0)
#define NKIKDLEONLC_SET_MANUALLYMARKUSETEMPORARYLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xBC386B0)
#define NKIKDLEONLC_TICK_OFFSET UNITYSDK_OFFSET(0xBC36B60)
#define NKIKDLEONLC__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xBC35B60)

	class NKIKDLEONLC : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::GELIALJDFBL* LHJBPEBMKDN; // 0x18
		::OONGDLIDJJJ* LAPCOHEMCJN; // 0x20
		::RPG::GameCore::AIConfig* OFKGLJOAMLD; // 0x28
		::KDJNAAOFMMJ* ENAIBJGFMFI; // 0x30
		::RPG::GameCore::GameEntity* CJKDIDKBCCM; // 0x38
		::System::Collections::Generic::List_1<::FOEAEFCBCOM*>* LAGCJLPFKFC; // 0x40
		::BAGIHIEADIL* HLCBMLFOJKH; // 0x48
		::RPG::GameCore::SkillCharacterComponent* JKEIMPIGLAJ; // 0x50
		::FOEAEFCBCOM* _CurCrazyAIBehavior_k__BackingField; // 0x58
		::System::Collections::Generic::List_1<::EJFAHBINDIN*>* MJEPDDDKCEN; // 0x60
		::Il2CppArray<::RPG::GameCore::FixPoint>* APLHOPPLHBJ; // 0x68
		::System::Collections::Generic::List_1<::RPG::GameCore::StandaloneComplexSkillAIConfig*>* PICPIBKHDPJ; // 0x70
		::EJFAHBINDIN* PMLHEMADKBJ; // 0x78
		::RPG::GameCore::StandaloneComplexSkillAIConfig* NFLJKDPFABB; // 0x80
		::System::Boolean _AutoDesicionWhenNotAutoBattle_k__BackingField; // 0x88
		::System::Boolean _ManuallyMarkUseTemporaryLockTarget_k__BackingField; // 0x89
		::System::Boolean _IsUsingAutoInsertAction_k__BackingField; // 0x8A
		::RPG::GameCore::ComplexAIStrategy BECGJJCLLPI; // 0x8B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + NKIKDLEONLC_LMCEDCHJKFF_OFFSET))(this, a1, a2);
		}

		::System::Void MEHCDJAKINK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_MEHCDJAKINK_OFFSET))(this);
		}

		::System::Void NPOAKKMICOF(::RPG::GameCore::StringHash a1, ::System::String* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NKIKDLEONLC_NPOAKKMICOF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HEHJLDKINLE(::RPG::GameCore::StringHash a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::String*))((::PBYTE)hIl2Cpp + NKIKDLEONLC_HEHJLDKINLE_OFFSET))(this, a1, a2);
		}

		::OONGDLIDJJJ* ALHDGMHGMHA()
		{
			return ((::OONGDLIDJJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_ALHDGMHGMHA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NKIKDLEONLC_TICK_OFFSET))(this, a1);
		}

		::System::Void CMBOEABJEHH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKIKDLEONLC_CMBOEABJEHH_OFFSET))(this, a1);
		}

		::System::Void AKLDAOEALMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_AKLDAOEALMG_OFFSET))(this);
		}

		::System::Void DHFLDLBNJEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_DHFLDLBNJEI_OFFSET))(this);
		}

		::System::Void GMMOKMKOJBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_GMMOKMKOJBF_OFFSET))(this);
		}

		::EJFAHBINDIN* OOKFNPPHHEK(::System::String* a1)
		{
			return ((::EJFAHBINDIN*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NKIKDLEONLC_OOKFNPPHHEK_OFFSET))(this, a1);
		}

		::System::Boolean CFBMBNLGAOD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_CFBMBNLGAOD_OFFSET))(this);
		}

		::System::Void GBFJEBIOGKP(::FOEAEFCBCOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOEAEFCBCOM*))((::PBYTE)hIl2Cpp + NKIKDLEONLC_GBFJEBIOGKP_OFFSET))(this, a1);
		}

		::System::Void JNDCLCLJJJF(::FOEAEFCBCOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOEAEFCBCOM*))((::PBYTE)hIl2Cpp + NKIKDLEONLC_JNDCLCLJJJF_OFFSET))(this, a1);
		}

		::System::Boolean KKHPDCJJPDN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NKIKDLEONLC_KKHPDCJJPDN_OFFSET))(this, a1);
		}

		::System::Void LDMMMCJPNFF(::RPG::GameCore::TurnBasedAIDecisionResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAIDecisionResult))((::PBYTE)hIl2Cpp + NKIKDLEONLC_LDMMMCJPNFF_OFFSET))(this, a1);
		}

		::System::Boolean DGJJFJHAOII()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_DGJJFJHAOII_OFFSET))(this);
		}

		::System::Void AJIEDNFLFCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_AJIEDNFLFCE_OFFSET))(this);
		}

		::System::Void KKMHKGGFEPB(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + NKIKDLEONLC_KKMHKGGFEPB_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TaskContext* PBDCBFELGMG(::OONGDLIDJJJ* a1)
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + NKIKDLEONLC_PBDCBFELGMG_OFFSET))(this, a1);
		}

		::System::Void OCMJALNLAKN(::Il2CppArray<::RPG::GameCore::AIVariable*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + NKIKDLEONLC_OCMJALNLAKN_OFFSET))(this, a1);
		}

		::System::Void GEONMPFGNFJ(::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + NKIKDLEONLC_GEONMPFGNFJ_OFFSET))(this, a1, a2);
		}

		::System::Void EHAJGIMOIHI(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + NKIKDLEONLC_EHAJGIMOIHI_OFFSET))(this, a1, a2);
		}

		::System::Void BFIOHODMOFG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKIKDLEONLC_BFIOHODMOFG_OFFSET))(this, a1);
		}

		::System::Void DNLNJDMBEDG(::EJFAHBINDIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJFAHBINDIN*))((::PBYTE)hIl2Cpp + NKIKDLEONLC_DNLNJDMBEDG_OFFSET))(this, a1);
		}

		::EJFAHBINDIN* OAMODDLELFJ()
		{
			return ((::EJFAHBINDIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_OAMODDLELFJ_OFFSET))(this);
		}

		::System::Void POOABFGCBCK(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + NKIKDLEONLC_POOABFGCBCK_OFFSET))(this, a1, a2);
		}

		::System::Void MJNHEBBDHEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_MJNHEBBDHEN_OFFSET))(this);
		}

		::System::Boolean BGFNGKOMLAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_BGFNGKOMLAD_OFFSET))(this);
		}

		::FOEAEFCBCOM* FJKFKNBDCHJ()
		{
			return ((::FOEAEFCBCOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_FJKFKNBDCHJ_OFFSET))(this);
		}

		::System::Boolean get_AutoDesicionWhenNotAutoBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_GET_AUTODESICIONWHENNOTAUTOBATTLE_OFFSET))(this);
		}

		::System::Void set_AutoDesicionWhenNotAutoBattle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKIKDLEONLC_SET_AUTODESICIONWHENNOTAUTOBATTLE_OFFSET))(this, a1);
		}

		::System::Boolean ENAKOBLHGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_ENAKOBLHGIG_OFFSET))(this);
		}

		::System::Boolean get_ManuallyMarkUseTemporaryLockTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_GET_MANUALLYMARKUSETEMPORARYLOCKTARGET_OFFSET))(this);
		}

		::System::Void set_ManuallyMarkUseTemporaryLockTarget(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKIKDLEONLC_SET_MANUALLYMARKUSETEMPORARYLOCKTARGET_OFFSET))(this, a1);
		}

		::FOEAEFCBCOM* get_CurCrazyAIBehavior()
		{
			return ((::FOEAEFCBCOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_GET_CURCRAZYAIBEHAVIOR_OFFSET))(this);
		}

		::System::Void set_CurCrazyAIBehavior(::FOEAEFCBCOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOEAEFCBCOM*))((::PBYTE)hIl2Cpp + NKIKDLEONLC_SET_CURCRAZYAIBEHAVIOR_OFFSET))(this, a1);
		}

		::System::Boolean GLHJOCBPCJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_GLHJOCBPCJD_OFFSET))(this);
		}

		::System::Boolean get_IsUsingAutoInsertAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_GET_ISUSINGAUTOINSERTACTION_OFFSET))(this);
		}

		::System::Void set_IsUsingAutoInsertAction(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKIKDLEONLC_SET_ISUSINGAUTOINSERTACTION_OFFSET))(this, a1);
		}

		::System::Boolean HEFBIDGOABP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_HEFBIDGOABP_OFFSET))(this);
		}

		::BAGIHIEADIL* EGAPMGDBCHN()
		{
			return ((::BAGIHIEADIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKDLEONLC_EGAPMGDBCHN_OFFSET))(this);
		}

	};
