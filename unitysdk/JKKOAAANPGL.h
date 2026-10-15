#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMKLCCOJMOF_InnerPauseReason.h"
#include "unitysdk/HNNHKPKCMJD.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/BossSkillViewType.h"
#include "unitysdk/RPG/GameCore/TeamTowersBossSkillType.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerModifierType.h"
#include "unitysdk/RPG/MVector2.h"
class BMKLCCOJMOF;
class CABIEOJNNIM;
class CJJJEKBLKDK;
class DJGLCIMIDDJ;
class GHADLBDBHNA;
class HNLKNLJBHDD;
class JFAIGANLDBK;
class KIPOJIOCDKF;
class MDJMFENLDJL;
class MOGEAODEJOD;
class PHBGENKFABA;
class PLMODIOCPAF;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKKOAAANPGL_ADD_ONBOSSSKILLWARNINGHINT_OFFSET UNITYSDK_OFFSET(0x1C706540)
#define JKKOAAANPGL_ADD_ONFIRESPAWNBRICKEFFECT_OFFSET UNITYSDK_OFFSET(0x1C706440)
#define JKKOAAANPGL_ADD_ONGAMEFINISHED_OFFSET UNITYSDK_OFFSET(0x1C706340)
#define JKKOAAANPGL_ADOFPBAJOGG_OFFSET UNITYSDK_OFFSET(0x1C704FE0)
#define JKKOAAANPGL_AIELMKIFBBI_OFFSET UNITYSDK_OFFSET(0x1C702BB0)
#define JKKOAAANPGL_CBPJMMJNAGD_OFFSET UNITYSDK_OFFSET(0x1C704EC0)
#define JKKOAAANPGL_CHKFHJCKDLI_OFFSET UNITYSDK_OFFSET(0x1C7035A0)
#define JKKOAAANPGL_CMGLDGPFEGA_OFFSET UNITYSDK_OFFSET(0x1C7046E0)
#define JKKOAAANPGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C703900)
#define JKKOAAANPGL_DFMHELFMMAF_OFFSET UNITYSDK_OFFSET(0x1C705E60)
#define JKKOAAANPGL_DGGNLFFCANO_OFFSET UNITYSDK_OFFSET(0x1C7027C0)
#define JKKOAAANPGL_DKLMCKIKKHL_OFFSET UNITYSDK_OFFSET(0x1C7036C0)
#define JKKOAAANPGL_DPFAPJDBPEC_OFFSET UNITYSDK_OFFSET(0x1C704C90)
#define JKKOAAANPGL_EJAHEDDMHCF_OFFSET UNITYSDK_OFFSET(0x1C703A10)
#define JKKOAAANPGL_FFDNHKLENFG_OFFSET UNITYSDK_OFFSET(0x1C705B40)
#define JKKOAAANPGL_FJFAJBLDCPE_OFFSET UNITYSDK_OFFSET(0x1C703810)
#define JKKOAAANPGL_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x1C703C10)
#define JKKOAAANPGL_FNEEJLAGDFH_OFFSET UNITYSDK_OFFSET(0x1C7041E0)
#define JKKOAAANPGL_GBFOCPBCPDA_OFFSET UNITYSDK_OFFSET(0x1C704450)
#define JKKOAAANPGL_GDEOBLEABJJ_OFFSET UNITYSDK_OFFSET(0x1C703870)
#define JKKOAAANPGL_GJBLAAOKGDC_OFFSET UNITYSDK_OFFSET(0x1C703650)
#define JKKOAAANPGL_HDKMCMMCKFE_OFFSET UNITYSDK_OFFSET(0x1C7030E0)
#define JKKOAAANPGL_IAEBCGCGPKO_OFFSET UNITYSDK_OFFSET(0x1C7044C0)
#define JKKOAAANPGL_IBEJJNHPFMF_OFFSET UNITYSDK_OFFSET(0x1C703490)
#define JKKOAAANPGL_IGADFALLLEO_OFFSET UNITYSDK_OFFSET(0x1C7058E0)
#define JKKOAAANPGL_IGAGLPLDMEN_OFFSET UNITYSDK_OFFSET(0x1C704940)
#define JKKOAAANPGL_IHLGGIDPBJF_OFFSET UNITYSDK_OFFSET(0x1C7045D0)
#define JKKOAAANPGL_IIDCMBJEJKO_OFFSET UNITYSDK_OFFSET(0x1C7043D0)
#define JKKOAAANPGL_IKCCMDKEJIL_OFFSET UNITYSDK_OFFSET(0x1C7056C0)
#define JKKOAAANPGL_JENFOBGJNMG_OFFSET UNITYSDK_OFFSET(0x1C7054A0)
#define JKKOAAANPGL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C703F60)
#define JKKOAAANPGL_KHFLMPFAEDP_OFFSET UNITYSDK_OFFSET(0x1C705130)
#define JKKOAAANPGL_KIGJKFCKHAL_OFFSET UNITYSDK_OFFSET(0x1C705D00)
#define JKKOAAANPGL_KNHOALNBOAM_OFFSET UNITYSDK_OFFSET(0x1C703730)
#define JKKOAAANPGL_LAHFIBPMDGM_OFFSET UNITYSDK_OFFSET(0x1C704F70)
#define JKKOAAANPGL_LCMKCPJAMFJ_OFFSET UNITYSDK_OFFSET(0x1C7033C0)
#define JKKOAAANPGL_LEANBHOBGJJ_OFFSET UNITYSDK_OFFSET(0x1C702E40)
#define JKKOAAANPGL_LMKLGEMNMIM_OFFSET UNITYSDK_OFFSET(0x1C702A70)
#define JKKOAAANPGL_MLEMMFLFMMI_OFFSET UNITYSDK_OFFSET(0x1C7048F0)
#define JKKOAAANPGL_NADCKNBOOFJ_OFFSET UNITYSDK_OFFSET(0x1C7053D0)
#define JKKOAAANPGL_NAFJICONCNI_OFFSET UNITYSDK_OFFSET(0x1C705380)
#define JKKOAAANPGL_NAKIGFCHAMF_OFFSET UNITYSDK_OFFSET(0x1C7061C0)
#define JKKOAAANPGL_NBMGMEDJNEK_OFFSET UNITYSDK_OFFSET(0x1C7037B0)
#define JKKOAAANPGL_NNIOOFHMPFA_OFFSET UNITYSDK_OFFSET(0x1C704E50)
#define JKKOAAANPGL_OEIAMEGLELF_OFFSET UNITYSDK_OFFSET(0x1C705AD0)
#define JKKOAAANPGL_OOENDBMMJII_OFFSET UNITYSDK_OFFSET(0x1C704D00)
#define JKKOAAANPGL_PAFKJAHJMCE_OFFSET UNITYSDK_OFFSET(0x1C706640)
#define JKKOAAANPGL_PCGBFFNEJKN_OFFSET UNITYSDK_OFFSET(0x1C702B30)
#define JKKOAAANPGL_PECIEBEMHNL_OFFSET UNITYSDK_OFFSET(0x1C705080)
#define JKKOAAANPGL_PGGCEFIONJH_OFFSET UNITYSDK_OFFSET(0x1C704DE0)
#define JKKOAAANPGL_PJDFLLHFHEE_OFFSET UNITYSDK_OFFSET(0x1C703510)
#define JKKOAAANPGL_REMOVE_ONBOSSSKILLWARNINGHINT_OFFSET UNITYSDK_OFFSET(0x1C7065C0)
#define JKKOAAANPGL_REMOVE_ONFIRESPAWNBRICKEFFECT_OFFSET UNITYSDK_OFFSET(0x1C7064C0)
#define JKKOAAANPGL_REMOVE_ONGAMEFINISHED_OFFSET UNITYSDK_OFFSET(0x1C7063C0)

inline static constexpr unsigned int JKKOAAANPGL_TypeDefinitionIndex = 37156;

	class JKKOAAANPGL : public ::HNNHKPKCMJD
	{
	public:
		::System::Action_2<::System::String*, ::HNLKNLJBHDD*>* CGEMKOOCBOB; // 0x1A0
		::MOGEAODEJOD* BKIFMPHBIAK; // 0x1A8
		::HNLKNLJBHDD* ACJGKBDLCMF; // 0x1B0
		::HNLKNLJBHDD* LMBBHFPBONJ; // 0x1B8
		::System::Action_2<::System::UInt32, ::System::Int32>* LNFGOFMPNDN; // 0x1C0
		::System::Action_1<::MDJMFENLDJL*>* FAHNMDMPBGH; // 0x1C8
		::System::Action_1<::HNLKNLJBHDD*>* EJDBHFPDFGE; // 0x1D0
		::DJGLCIMIDDJ* IPOEELPNEGN; // 0x1D8
		::KIPOJIOCDKF* KDKDEGIECIF; // 0x1E0
		::System::Action_1<::JFAIGANLDBK*>* OnGameFinished; // 0x1E8
		::System::Action_4<::System::UInt32, ::System::UInt64, ::System::UInt32, ::RPG::MVector2>* OnFireSpawnBrickEffect; // 0x1F0
		::PLMODIOCPAF* FKGGBEAELPE; // 0x1F8
		::System::Action_2<::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType>* OnBossSkillWarningHint; // 0x200
		::System::Func_3<::HNLKNLJBHDD*, ::HNLKNLJBHDD*, ::PHBGENKFABA*>* BOENBPPFFLG; // 0x208
		::System::Action_1<::HNLKNLJBHDD*>* JGKHGJMPJDF; // 0x210
		::System::Action_3<::System::UInt32, ::System::UInt32, ::RPG::MVector2>* AIEKCPIFHEP; // 0x218
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BMKLCCOJMOF*>* MKIDHGILKMJ; // 0x220
		::System::Action_1<::HNLKNLJBHDD*>* PNGABHNJBNG; // 0x228
		::System::Action_2<::System::UInt64, ::System::Int32>* DKBPPOFFDJJ; // 0x230
		::System::Action* LBIFNAKJMBO; // 0x238
		::System::Action* AFLELMEDGDH; // 0x240
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* BJHJPDANHCA; // 0x248
		::HNLKNLJBHDD* NKIKPPOODKK; // 0x250
		::System::Action_1<::System::UInt32>* EOFLJKDFDJD; // 0x258
		::HNLKNLJBHDD* CPFJKLOMIKF; // 0x260
		::System::Action_1<::System::UInt32>* CKNOOPIMKDI; // 0x268
		::CABIEOJNNIM* JBMDOCDAKMH; // 0x270
		::System::Action_1<::System::Object*>* CDIPLIPLDGO; // 0x278
		::System::Boolean GOFKAELMOPB; // 0x280
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKOAAANPGL_CTOR_OFFSET))(this);
		}

		::System::Void DGGNLFFCANO(::JFAIGANLDBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFAIGANLDBK*))((::PBYTE)hIl2Cpp + JKKOAAANPGL_DGGNLFFCANO_OFFSET))(this, a1);
		}

		::System::Void LMKLGEMNMIM(::System::UInt32 a1, ::System::UInt64 a2, ::System::UInt32 a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JKKOAAANPGL_LMKLGEMNMIM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PCGBFFNEJKN(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType))((::PBYTE)hIl2Cpp + JKKOAAANPGL_PCGBFFNEJKN_OFFSET))(this, a1, a2);
		}

		::System::Void AIELMKIFBBI(::System::UInt32 a1, ::RPG::GameCore::TeamTowersBossSkillType a2, ::Il2CppArray<::System::Single>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TeamTowersBossSkillType, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + JKKOAAANPGL_AIELMKIFBBI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LEANBHOBGJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKKOAAANPGL_LEANBHOBGJJ_OFFSET))(this, a1);
		}

		::System::Void HDKMCMMCKFE(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JKKOAAANPGL_HDKMCMMCKFE_OFFSET))(this, a1, a2);
		}

		::System::Void LCMKCPJAMFJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKKOAAANPGL_LCMKCPJAMFJ_OFFSET))(this, a1);
		}

		::System::Void IBEJJNHPFMF(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + JKKOAAANPGL_IBEJJNHPFMF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PJDFLLHFHEE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKKOAAANPGL_PJDFLLHFHEE_OFFSET))(this, a1);
		}

		::System::Void CHKFHJCKDLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKKOAAANPGL_CHKFHJCKDLI_OFFSET))(this, a1);
		}

		::System::Void GJBLAAOKGDC(::MDJMFENLDJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDJMFENLDJL*))((::PBYTE)hIl2Cpp + JKKOAAANPGL_GJBLAAOKGDC_OFFSET))(this, a1);
		}

		::System::Void DKLMCKIKKHL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKKOAAANPGL_DKLMCKIKKHL_OFFSET))(this, a1);
		}

		::System::Void KNHOALNBOAM(::System::UInt64 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + JKKOAAANPGL_KNHOALNBOAM_OFFSET))(this, a1, a2);
		}

		::System::Void NBMGMEDJNEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKOAAANPGL_NBMGMEDJNEK_OFFSET))(this);
		}

		::System::Void FJFAJBLDCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKOAAANPGL_FJFAJBLDCPE_OFFSET))(this);
		}

		::System::Void GDEOBLEABJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKKOAAANPGL_GDEOBLEABJJ_OFFSET))(this, a1);
		}

		::System::Void EJAHEDDMHCF(::GHADLBDBHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHADLBDBHNA*))((::PBYTE)hIl2Cpp + JKKOAAANPGL_EJAHEDDMHCF_OFFSET))(this, a1);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKOAAANPGL_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JKKOAAANPGL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void IIDCMBJEJKO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JKKOAAANPGL_IIDCMBJEJKO_OFFSET))(this, a1);
		}

		::System::Void GBFOCPBCPDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKOAAANPGL_GBFOCPBCPDA_OFFSET))(this);
		}

		::System::Void IAEBCGCGPKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKOAAANPGL_IAEBCGCGPKO_OFFSET))(this);
		}

		::System::Void CMGLDGPFEGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKOAAANPGL_CMGLDGPFEGA_OFFSET))(this);
		}

		::System::Void MLEMMFLFMMI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JKKOAAANPGL_MLEMMFLFMMI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* IGAGLPLDMEN()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKOAAANPGL_IGAGLPLDMEN_OFFSET))(this);
		}

		::System::Void IHLGGIDPBJF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JKKOAAANPGL_IHLGGIDPBJF_OFFSET))(this, a1, a2);
		}

		::System::Void DPFAPJDBPEC(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + JKKOAAANPGL_DPFAPJDBPEC_OFFSET))(this, a1);
		}

		::System::Void PGGCEFIONJH(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + JKKOAAANPGL_PGGCEFIONJH_OFFSET))(this, a1);
		}

		::System::Void NNIOOFHMPFA(::CJJJEKBLKDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJJJEKBLKDK*))((::PBYTE)hIl2Cpp + JKKOAAANPGL_NNIOOFHMPFA_OFFSET))(this, a1);
		}

		::System::Int32 LAHFIBPMDGM(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKKOAAANPGL_LAHFIBPMDGM_OFFSET))(this, a1);
		}

		::BMKLCCOJMOF* OOENDBMMJII(::HNLKNLJBHDD* a1)
		{
			return ((::BMKLCCOJMOF*(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + JKKOAAANPGL_OOENDBMMJII_OFFSET))(this, a1);
		}

		::HNLKNLJBHDD* ADOFPBAJOGG(::System::UInt32 a1)
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKKOAAANPGL_ADOFPBAJOGG_OFFSET))(this, a1);
		}

		::System::Void PECIEBEMHNL(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + JKKOAAANPGL_PECIEBEMHNL_OFFSET))(this, a1, a2);
		}

		::System::Void KHFLMPFAEDP(::System::UInt32 a1, ::RPG::GameCore::TeamTowersPlayerModifierType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TeamTowersPlayerModifierType, ::System::Boolean))((::PBYTE)hIl2Cpp + JKKOAAANPGL_KHFLMPFAEDP_OFFSET))(this, a1, a2, a3);
		}

		::BMKLCCOJMOF* CBPJMMJNAGD(::System::UInt32 a1)
		{
			return ((::BMKLCCOJMOF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKKOAAANPGL_CBPJMMJNAGD_OFFSET))(this, a1);
		}

		::KIPOJIOCDKF* NAFJICONCNI()
		{
			return ((::KIPOJIOCDKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKOAAANPGL_NAFJICONCNI_OFFSET))(this);
		}

		::System::Object* NADCKNBOOFJ()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKOAAANPGL_NADCKNBOOFJ_OFFSET))(this);
		}

		::HNLKNLJBHDD* JENFOBGJNMG()
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKOAAANPGL_JENFOBGJNMG_OFFSET))(this);
		}

		::HNLKNLJBHDD* IKCCMDKEJIL()
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKOAAANPGL_IKCCMDKEJIL_OFFSET))(this);
		}

		::HNLKNLJBHDD* IGADFALLLEO()
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKOAAANPGL_IGADFALLLEO_OFFSET))(this);
		}

		::HNLKNLJBHDD* FNEEJLAGDFH()
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKOAAANPGL_FNEEJLAGDFH_OFFSET))(this);
		}

		::HNLKNLJBHDD* OEIAMEGLELF(::System::UInt32 a1)
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKKOAAANPGL_OEIAMEGLELF_OFFSET))(this, a1);
		}

		::System::Void FFDNHKLENFG(::BMKLCCOJMOF_InnerPauseReason a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::BMKLCCOJMOF_InnerPauseReason, ::System::Boolean))((::PBYTE)hIl2Cpp + JKKOAAANPGL_FFDNHKLENFG_OFFSET))(this, a1, a2);
		}

		::System::Void KIGJKFCKHAL(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + JKKOAAANPGL_KIGJKFCKHAL_OFFSET))(this, a1);
		}

		::System::Void DFMHELFMMAF(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JKKOAAANPGL_DFMHELFMMAF_OFFSET))(this, a1, a2);
		}

		::System::Void NAKIGFCHAMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKOAAANPGL_NAKIGFCHAMF_OFFSET))(this);
		}

		::System::Void add_OnGameFinished(::System::Action_1<::JFAIGANLDBK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::JFAIGANLDBK*>*))((::PBYTE)hIl2Cpp + JKKOAAANPGL_ADD_ONGAMEFINISHED_OFFSET))(this, a1);
		}

		::System::Void remove_OnGameFinished(::System::Action_1<::JFAIGANLDBK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::JFAIGANLDBK*>*))((::PBYTE)hIl2Cpp + JKKOAAANPGL_REMOVE_ONGAMEFINISHED_OFFSET))(this, a1);
		}

		::System::Void add_OnFireSpawnBrickEffect(::System::Action_4<::System::UInt32, ::System::UInt64, ::System::UInt32, ::RPG::MVector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_4<::System::UInt32, ::System::UInt64, ::System::UInt32, ::RPG::MVector2>*))((::PBYTE)hIl2Cpp + JKKOAAANPGL_ADD_ONFIRESPAWNBRICKEFFECT_OFFSET))(this, a1);
		}

		::System::Void remove_OnFireSpawnBrickEffect(::System::Action_4<::System::UInt32, ::System::UInt64, ::System::UInt32, ::RPG::MVector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_4<::System::UInt32, ::System::UInt64, ::System::UInt32, ::RPG::MVector2>*))((::PBYTE)hIl2Cpp + JKKOAAANPGL_REMOVE_ONFIRESPAWNBRICKEFFECT_OFFSET))(this, a1);
		}

		::System::Void add_OnBossSkillWarningHint(::System::Action_2<::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType>*))((::PBYTE)hIl2Cpp + JKKOAAANPGL_ADD_ONBOSSSKILLWARNINGHINT_OFFSET))(this, a1);
		}

		::System::Void remove_OnBossSkillWarningHint(::System::Action_2<::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType>*))((::PBYTE)hIl2Cpp + JKKOAAANPGL_REMOVE_ONBOSSSKILLWARNINGHINT_OFFSET))(this, a1);
		}

		::System::String* PAFKJAHJMCE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKOAAANPGL_PAFKJAHJMCE_OFFSET))(this);
		}

	};
