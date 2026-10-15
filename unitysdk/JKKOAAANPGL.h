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

#define JKKOAAANPGL_ADD_ONBOSSSKILLWARNINGHINT_OFFSET UNITYSDK_OFFSET(0x1C6D82A0)
#define JKKOAAANPGL_ADD_ONFIRESPAWNBRICKEFFECT_OFFSET UNITYSDK_OFFSET(0x1C6D81A0)
#define JKKOAAANPGL_ADD_ONGAMEFINISHED_OFFSET UNITYSDK_OFFSET(0x1C6D80A0)
#define JKKOAAANPGL_ADOFPBAJOGG_OFFSET UNITYSDK_OFFSET(0x1C6D6D40)
#define JKKOAAANPGL_AIELMKIFBBI_OFFSET UNITYSDK_OFFSET(0x1C6D4900)
#define JKKOAAANPGL_CBPJMMJNAGD_OFFSET UNITYSDK_OFFSET(0x1C6D6C20)
#define JKKOAAANPGL_CHKFHJCKDLI_OFFSET UNITYSDK_OFFSET(0x1C6D52F0)
#define JKKOAAANPGL_CMGLDGPFEGA_OFFSET UNITYSDK_OFFSET(0x1C6D6440)
#define JKKOAAANPGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D5650)
#define JKKOAAANPGL_DFMHELFMMAF_OFFSET UNITYSDK_OFFSET(0x1C6D7BC0)
#define JKKOAAANPGL_DGGNLFFCANO_OFFSET UNITYSDK_OFFSET(0x1C6D4510)
#define JKKOAAANPGL_DKLMCKIKKHL_OFFSET UNITYSDK_OFFSET(0x1C6D5410)
#define JKKOAAANPGL_DPFAPJDBPEC_OFFSET UNITYSDK_OFFSET(0x1C6D69F0)
#define JKKOAAANPGL_EJAHEDDMHCF_OFFSET UNITYSDK_OFFSET(0x1C6D5760)
#define JKKOAAANPGL_FFDNHKLENFG_OFFSET UNITYSDK_OFFSET(0x1C6D78A0)
#define JKKOAAANPGL_FJFAJBLDCPE_OFFSET UNITYSDK_OFFSET(0x1C6D5560)
#define JKKOAAANPGL_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x1C6D5960)
#define JKKOAAANPGL_FNEEJLAGDFH_OFFSET UNITYSDK_OFFSET(0x1C6D5F40)
#define JKKOAAANPGL_GBFOCPBCPDA_OFFSET UNITYSDK_OFFSET(0x1C6D61B0)
#define JKKOAAANPGL_GDEOBLEABJJ_OFFSET UNITYSDK_OFFSET(0x1C6D55C0)
#define JKKOAAANPGL_GJBLAAOKGDC_OFFSET UNITYSDK_OFFSET(0x1C6D53A0)
#define JKKOAAANPGL_HDKMCMMCKFE_OFFSET UNITYSDK_OFFSET(0x1C6D4E30)
#define JKKOAAANPGL_IAEBCGCGPKO_OFFSET UNITYSDK_OFFSET(0x1C6D6220)
#define JKKOAAANPGL_IBEJJNHPFMF_OFFSET UNITYSDK_OFFSET(0x1C6D51E0)
#define JKKOAAANPGL_IGADFALLLEO_OFFSET UNITYSDK_OFFSET(0x1C6D7640)
#define JKKOAAANPGL_IGAGLPLDMEN_OFFSET UNITYSDK_OFFSET(0x1C6D66A0)
#define JKKOAAANPGL_IHLGGIDPBJF_OFFSET UNITYSDK_OFFSET(0x1C6D6330)
#define JKKOAAANPGL_IIDCMBJEJKO_OFFSET UNITYSDK_OFFSET(0x1C6D6130)
#define JKKOAAANPGL_IKCCMDKEJIL_OFFSET UNITYSDK_OFFSET(0x1C6D7420)
#define JKKOAAANPGL_JENFOBGJNMG_OFFSET UNITYSDK_OFFSET(0x1C6D7200)
#define JKKOAAANPGL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C6D5CC0)
#define JKKOAAANPGL_KHFLMPFAEDP_OFFSET UNITYSDK_OFFSET(0x1C6D6E90)
#define JKKOAAANPGL_KIGJKFCKHAL_OFFSET UNITYSDK_OFFSET(0x1C6D7A60)
#define JKKOAAANPGL_KNHOALNBOAM_OFFSET UNITYSDK_OFFSET(0x1C6D5480)
#define JKKOAAANPGL_LAHFIBPMDGM_OFFSET UNITYSDK_OFFSET(0x1C6D6CD0)
#define JKKOAAANPGL_LCMKCPJAMFJ_OFFSET UNITYSDK_OFFSET(0x1C6D5110)
#define JKKOAAANPGL_LEANBHOBGJJ_OFFSET UNITYSDK_OFFSET(0x1C6D4B90)
#define JKKOAAANPGL_LMKLGEMNMIM_OFFSET UNITYSDK_OFFSET(0x1C6D47C0)
#define JKKOAAANPGL_MLEMMFLFMMI_OFFSET UNITYSDK_OFFSET(0x1C6D6650)
#define JKKOAAANPGL_NADCKNBOOFJ_OFFSET UNITYSDK_OFFSET(0x1C6D7130)
#define JKKOAAANPGL_NAFJICONCNI_OFFSET UNITYSDK_OFFSET(0x1C6D70E0)
#define JKKOAAANPGL_NAKIGFCHAMF_OFFSET UNITYSDK_OFFSET(0x1C6D7F20)
#define JKKOAAANPGL_NBMGMEDJNEK_OFFSET UNITYSDK_OFFSET(0x1C6D5500)
#define JKKOAAANPGL_NNIOOFHMPFA_OFFSET UNITYSDK_OFFSET(0x1C6D6BB0)
#define JKKOAAANPGL_OEIAMEGLELF_OFFSET UNITYSDK_OFFSET(0x1C6D7830)
#define JKKOAAANPGL_OOENDBMMJII_OFFSET UNITYSDK_OFFSET(0x1C6D6A60)
#define JKKOAAANPGL_PAFKJAHJMCE_OFFSET UNITYSDK_OFFSET(0x1C6D83A0)
#define JKKOAAANPGL_PCGBFFNEJKN_OFFSET UNITYSDK_OFFSET(0x1C6D4880)
#define JKKOAAANPGL_PECIEBEMHNL_OFFSET UNITYSDK_OFFSET(0x1C6D6DE0)
#define JKKOAAANPGL_PGGCEFIONJH_OFFSET UNITYSDK_OFFSET(0x1C6D6B40)
#define JKKOAAANPGL_PJDFLLHFHEE_OFFSET UNITYSDK_OFFSET(0x1C6D5260)
#define JKKOAAANPGL_REMOVE_ONBOSSSKILLWARNINGHINT_OFFSET UNITYSDK_OFFSET(0x1C6D8320)
#define JKKOAAANPGL_REMOVE_ONFIRESPAWNBRICKEFFECT_OFFSET UNITYSDK_OFFSET(0x1C6D8220)
#define JKKOAAANPGL_REMOVE_ONGAMEFINISHED_OFFSET UNITYSDK_OFFSET(0x1C6D8120)

inline static constexpr unsigned int JKKOAAANPGL_TypeDefinitionIndex = 37156;

	class JKKOAAANPGL : public ::HNNHKPKCMJD
	{
	public:
		::System::Action_1<::JFAIGANLDBK*>* OnGameFinished; // 0x1A0
		::System::Action* LBIFNAKJMBO; // 0x1A8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BMKLCCOJMOF*>* MKIDHGILKMJ; // 0x1B0
		::System::Action* AFLELMEDGDH; // 0x1B8
		::HNLKNLJBHDD* NKIKPPOODKK; // 0x1C0
		::System::Action_1<::MDJMFENLDJL*>* FAHNMDMPBGH; // 0x1C8
		::KIPOJIOCDKF* KDKDEGIECIF; // 0x1D0
		::System::Action_1<::System::UInt32>* CKNOOPIMKDI; // 0x1D8
		::System::Action_2<::System::String*, ::HNLKNLJBHDD*>* CGEMKOOCBOB; // 0x1E0
		::PLMODIOCPAF* FKGGBEAELPE; // 0x1E8
		::DJGLCIMIDDJ* IPOEELPNEGN; // 0x1F0
		::System::Action_1<::System::Object*>* CDIPLIPLDGO; // 0x1F8
		::HNLKNLJBHDD* ACJGKBDLCMF; // 0x200
		::System::Action_1<::HNLKNLJBHDD*>* EJDBHFPDFGE; // 0x208
		::System::Action_3<::System::UInt32, ::System::UInt32, ::RPG::MVector2>* AIEKCPIFHEP; // 0x210
		::HNLKNLJBHDD* CPFJKLOMIKF; // 0x218
		::System::Action_2<::System::UInt64, ::System::Int32>* DKBPPOFFDJJ; // 0x220
		::System::Action_1<::HNLKNLJBHDD*>* JGKHGJMPJDF; // 0x228
		::System::Action_1<::System::UInt32>* EOFLJKDFDJD; // 0x230
		::System::Action_2<::System::UInt32, ::System::Int32>* LNFGOFMPNDN; // 0x238
		::MOGEAODEJOD* BKIFMPHBIAK; // 0x240
		::System::Func_3<::HNLKNLJBHDD*, ::HNLKNLJBHDD*, ::PHBGENKFABA*>* BOENBPPFFLG; // 0x248
		::CABIEOJNNIM* JBMDOCDAKMH; // 0x250
		::System::Action_1<::HNLKNLJBHDD*>* PNGABHNJBNG; // 0x258
		::System::Action_4<::System::UInt32, ::System::UInt64, ::System::UInt32, ::RPG::MVector2>* OnFireSpawnBrickEffect; // 0x260
		::HNLKNLJBHDD* LMBBHFPBONJ; // 0x268
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* BJHJPDANHCA; // 0x270
		::System::Action_2<::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType>* OnBossSkillWarningHint; // 0x278
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
