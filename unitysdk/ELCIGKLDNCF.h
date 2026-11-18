#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/HollowGridLink.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/ELCIGKLDNCF_EBPJKPAJJLM.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"

class AFMMAIKKACF;
class AIKGHHJKNCE;
class DFEONFMKCKE;
class EHGPNGPADCB;
class ELCIGKLDNCF_LANLNFCHBGK;
class FBAMLABJMKF;
class HJEBAFLEPOF;
class JCLMLILFGPJ;
class JMIGPHLOLAJ;
class PEOIIIGPCBA;
class PNJDGHBEMLK;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBigTVMoveRunContext; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_MoveXY; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELCIGKLDNCF_AAMKAILGNFD_OFFSET UNITYSDK_OFFSET(0x14270CB0)
#define ELCIGKLDNCF_AJGBEFOEMBM_OFFSET UNITYSDK_OFFSET(0x1426FCE0)
#define ELCIGKLDNCF_ANIBDILEHHB_OFFSET UNITYSDK_OFFSET(0x14272D90)
#define ELCIGKLDNCF_BAJIIBGJLGG_OFFSET UNITYSDK_OFFSET(0x14276940)
#define ELCIGKLDNCF_BELKBDLBGJM_OFFSET UNITYSDK_OFFSET(0x14272AA0)
#define ELCIGKLDNCF_BIMMGNKADFB_OFFSET UNITYSDK_OFFSET(0x14276200)
#define ELCIGKLDNCF_BKOFGIICCEA_OFFSET UNITYSDK_OFFSET(0x14275F50)
#define ELCIGKLDNCF_CLONHHECIEJ_OFFSET UNITYSDK_OFFSET(0x14275750)
#define ELCIGKLDNCF_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x142735D0)
#define ELCIGKLDNCF_CNHPIJMPOLB_OFFSET UNITYSDK_OFFSET(0x142736C0)
#define ELCIGKLDNCF_DCCPNJDOGOP_OFFSET UNITYSDK_OFFSET(0x14276950)
#define ELCIGKLDNCF_DIHBHELPMHI_OFFSET UNITYSDK_OFFSET(0x142747F0)
#define ELCIGKLDNCF_ECFHPBFLNGP_OFFSET UNITYSDK_OFFSET(0x14273660)
#define ELCIGKLDNCF_EHLCNDFFEBG_OFFSET UNITYSDK_OFFSET(0x142742E0)
#define ELCIGKLDNCF_FJLKMHHFMLP_OFFSET UNITYSDK_OFFSET(0x14276630)
#define ELCIGKLDNCF_FMOEGNMLMHI_OFFSET UNITYSDK_OFFSET(0x14270D80)
#define ELCIGKLDNCF_GDDMMDOMGKB_OFFSET UNITYSDK_OFFSET(0x1426FB10)
#define ELCIGKLDNCF_GEGPINCMKOO_OFFSET UNITYSDK_OFFSET(0x14275400)
#define ELCIGKLDNCF_GFKPHEDDPOK_OFFSET UNITYSDK_OFFSET(0x14270FE0)
#define ELCIGKLDNCF_GFODEMMNLCA_OFFSET UNITYSDK_OFFSET(0x14274140)
#define ELCIGKLDNCF_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x1426EB80)
#define ELCIGKLDNCF_HLCFKPNOFNG_OFFSET UNITYSDK_OFFSET(0x142760E0)
#define ELCIGKLDNCF_IGILDMJMNAK_OFFSET UNITYSDK_OFFSET(0x14272210)
#define ELCIGKLDNCF_ILHBMCMGJFN_OFFSET UNITYSDK_OFFSET(0x1426E940)
#define ELCIGKLDNCF_KEINEKDAODC_OFFSET UNITYSDK_OFFSET(0x1426F440)
#define ELCIGKLDNCF_KJBHFINKIFH_OFFSET UNITYSDK_OFFSET(0x14272FC0)
#define ELCIGKLDNCF_KOAJDBANENO_OFFSET UNITYSDK_OFFSET(0x1426F890)
#define ELCIGKLDNCF_LGDMAAJFKNE_OFFSET UNITYSDK_OFFSET(0x1426EBD0)
#define ELCIGKLDNCF_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x14274B80)
#define ELCIGKLDNCF_LNDGLCILGCJ_OFFSET UNITYSDK_OFFSET(0x14274870)
#define ELCIGKLDNCF_MGBEEDNODHJ_OFFSET UNITYSDK_OFFSET(0x142767D0)
#define ELCIGKLDNCF_MJBECKJEGMP_OFFSET UNITYSDK_OFFSET(0x14273E40)
#define ELCIGKLDNCF_MNCBDIPHJIB_OFFSET UNITYSDK_OFFSET(0x14270EB0)
#define ELCIGKLDNCF_MPGOGGKGDEG_OFFSET UNITYSDK_OFFSET(0x14274750)
#define ELCIGKLDNCF_NBBIBKGNNCG_OFFSET UNITYSDK_OFFSET(0x14273E00)
#define ELCIGKLDNCF_NKJODFCFINH_OFFSET UNITYSDK_OFFSET(0x14273460)
#define ELCIGKLDNCF_NMDABLMBKAE_OFFSET UNITYSDK_OFFSET(0x14276510)
#define ELCIGKLDNCF_NODMCILBMGG_OFFSET UNITYSDK_OFFSET(0x14275A10)
#define ELCIGKLDNCF_OEIJBFLMHGM_OFFSET UNITYSDK_OFFSET(0x1426FDB0)
#define ELCIGKLDNCF_OFAFCONBLDD_OFFSET UNITYSDK_OFFSET(0x14274C10)
#define ELCIGKLDNCF_OGOACAGDCIP_OFFSET UNITYSDK_OFFSET(0x14272710)
#define ELCIGKLDNCF_OGOIHNJDFBJ_OFFSET UNITYSDK_OFFSET(0x142727C0)
#define ELCIGKLDNCF_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x1426F010)
#define ELCIGKLDNCF_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1426F380)
#define ELCIGKLDNCF_PAALCDFNFCH_OFFSET UNITYSDK_OFFSET(0x1426F060)
#define ELCIGKLDNCF_POBPMBJCKKO_OFFSET UNITYSDK_OFFSET(0x14276820)
#define ELCIGKLDNCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1426E710)

inline static constexpr unsigned int ELCIGKLDNCF_TypeDefinitionIndex = 53119;

class ELCIGKLDNCF
{
public:
	::FBAMLABJMKF* GFFCBBDKCGC; // 0x30
	::Il2CppArray<::PNJDGHBEMLK*>* EFFMMGHJJHF; // 0x38
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>* CPOOCGIICCH; // 0x40
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>* KEMEDHIGHGA; // 0x48
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>* JLPALPMKPEB; // 0x50
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* GFBDJIANFPH; // 0x58
	::MoleMole::Config::ConfigHollowChessboard* NGFHKHLKEHD; // 0x60
	::MoleMole::Config::ConfigHollowChessboard_MoveXY* GFMDEMMPIDH; // 0x68
	::MoleMole::UIHollowMainPageController* BNGABEMPOMH; // 0x70
	::DFEONFMKCKE* PDCIGKLLOBP; // 0x78
	::MoleMole::HollowChessboard::HollowEntity* ICFFBFOJJDD; // 0x80
	::ELCIGKLDNCF_LANLNFCHBGK* JOBKNDGOHCP; // 0x88
	::System::Boolean MEOEAAIFONK; // 0x90
	::System::Byte _padding0[0x3];
	::System::Single GPDCBHEPDGL; // 0x94
	::System::Single IDFONCPEIOP; // 0x98

	::System::Void _ctor(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void ILHBMCMGJFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_ILHBMCMGJFN_OFFSET))(this);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_OIBKFFAGPNH_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_OKJCHFGIKBH_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void KEINEKDAODC(::MoleMole::HollowChessboard::HollowEntity* BIAPIALNCLC, ::MoleMole::Vector2Int LDFFMCINBCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_KEINEKDAODC_OFFSET))(this, BIAPIALNCLC, LDFFMCINBCI);
	}

	::System::Void LGDMAAJFKNE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_LGDMAAJFKNE_OFFSET))(this);
	}

	::System::Void GDDMMDOMGKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_GDDMMDOMGKB_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* AAMKAILGNFD(::MoleMole::HollowChessboard::HollowEntity* BIAPIALNCLC)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_AAMKAILGNFD_OFFSET))(BIAPIALNCLC);
	}

	::System::Void FMOEGNMLMHI(::PNJDGHBEMLK* FDHLHDGGLDG, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase* JMDHBJMNBCP, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* AAOCANGHBDG, ::System::Action_1<::System::Object*>* ELNJNJAIFGE)
	{
		return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_FMOEGNMLMHI_OFFSET))(this, FDHLHDGGLDG, JMDHBJMNBCP, AAOCANGHBDG, ELNJNJAIFGE);
	}

	::Cysharp::Threading::Tasks::UniTask AJGBEFOEMBM(::MoleMole::HollowChessboard::HollowCell NHJFCNOFCEK, ::MoleMole::HollowChessboard::HollowEntity* BIAPIALNCLC)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_AJGBEFOEMBM_OFFSET))(this, NHJFCNOFCEK, BIAPIALNCLC);
	}

	::System::Void MNCBDIPHJIB(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* CAKPOLBHKFJ)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_MNCBDIPHJIB_OFFSET))(this, CAKPOLBHKFJ);
	}

	::System::Void GFKPHEDDPOK(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_GFKPHEDDPOK_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Void IGILDMJMNAK(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* JOIMFGHMOBJ, ::System::Boolean HNIAGKJAEKK, ::System::Boolean MFDIFALONAG)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_IGILDMJMNAK_OFFSET))(this, JOIMFGHMOBJ, HNIAGKJAEKK, MFDIFALONAG);
	}

	::Cysharp::Threading::Tasks::UniTask OGOACAGDCIP(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* CAKPOLBHKFJ)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_OGOACAGDCIP_OFFSET))(this, CAKPOLBHKFJ);
	}

	::System::Void OGOIHNJDFBJ(::MoleMole::HollowChessboard::HollowEntity* BIAPIALNCLC, ::MoleMole::Vector2Int LDFFMCINBCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_OGOIHNJDFBJ_OFFSET))(this, BIAPIALNCLC, LDFFMCINBCI);
	}

	static ::System::Void NKJODFCFINH(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* APNJCEHFIBO, ::HJEBAFLEPOF* DGBDDMGJHNK)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::HJEBAFLEPOF*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_NKJODFCFINH_OFFSET))(APNJCEHFIBO, DGBDDMGJHNK);
	}

	static ::System::Void ANIBDILEHHB(::MoleMole::HollowChessboard::HollowEntity* BIAPIALNCLC, ::JMIGPHLOLAJ* FONCLICGFMG, ::JCLMLILFGPJ* POBADKEDFOE)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowEntity*, ::JMIGPHLOLAJ*, ::JCLMLILFGPJ*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_ANIBDILEHHB_OFFSET))(BIAPIALNCLC, FONCLICGFMG, POBADKEDFOE);
	}

	::System::Void PAALCDFNFCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_PAALCDFNFCH_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigHollowChessboard_MoveXY* ECFHPBFLNGP()
	{
		return ((::MoleMole::Config::ConfigHollowChessboard_MoveXY*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_ECFHPBFLNGP_OFFSET))(this);
	}

	::System::Void NBBIBKGNNCG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_NBBIBKGNNCG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* MJBECKJEGMP(::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext* JBJDGHGDNGG)
	{
		return ((::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_MJBECKJEGMP_OFFSET))(this, JBJDGHGDNGG);
	}

	::System::Void EHLCNDFFEBG(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* OGDGINHGLGF, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* DJLOKMMLFJC, ::PEOIIIGPCBA* EODBABLJJNI)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::PEOIIIGPCBA*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_EHLCNDFFEBG_OFFSET))(this, OGDGINHGLGF, DJLOKMMLFJC, EODBABLJJNI);
	}

	::Cysharp::Threading::Tasks::UniTask MPGOGGKGDEG(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* JOIMFGHMOBJ)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_MPGOGGKGDEG_OFFSET))(this, JOIMFGHMOBJ);
	}

	::PNJDGHBEMLK* DIHBHELPMHI(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::PNJDGHBEMLK*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_DIHBHELPMHI_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* LNDGLCILGCJ(::System::Collections::Generic::List_1<::PNJDGHBEMLK*>* AMLAOIBHLPN, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext* JBJDGHGDNGG)
	{
		return ((::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*(*)(::PVOID, ::System::Collections::Generic::List_1<::PNJDGHBEMLK*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_LNDGLCILGCJ_OFFSET))(this, AMLAOIBHLPN, JBJDGHGDNGG);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void OFAFCONBLDD(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* IONAGJNINCA, ::MoleMole::Vector2Int LDFFMCINBCI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_OFAFCONBLDD_OFFSET))(this, IONAGJNINCA, LDFFMCINBCI);
	}

	::System::Void GEGPINCMKOO(::MoleMole::HollowChessboard::HollowCell NHJFCNOFCEK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_GEGPINCMKOO_OFFSET))(this, NHJFCNOFCEK);
	}

	::System::Void CLONHHECIEJ(::MoleMole::HollowChessboard::HollowCell NHJFCNOFCEK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_CLONHHECIEJ_OFFSET))(this, NHJFCNOFCEK);
	}

	::System::Void NODMCILBMGG(::MoleMole::HollowChessboard::HollowEntity* BIAPIALNCLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_NODMCILBMGG_OFFSET))(this, BIAPIALNCLC);
	}

	::Cysharp::Threading::Tasks::UniTask GFODEMMNLCA(::Cysharp::Threading::Tasks::UniTaskCompletionSource*& ANKNDFPDGDH, ::PNJDGHBEMLK* FDHLHDGGLDG, ::System::Collections::Generic::List_1<::System::Object*>* FKDMBPECLJL, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* AAOCANGHBDG, ::System::Collections::Generic::List_1<::System::Object*>* KFJEKMPLGBC)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*&, ::PNJDGHBEMLK*, ::System::Collections::Generic::List_1<::System::Object*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_GFODEMMNLCA_OFFSET))(this, ANKNDFPDGDH, FDHLHDGGLDG, FKDMBPECLJL, AAOCANGHBDG, KFJEKMPLGBC);
	}

	::Cysharp::Threading::Tasks::UniTask HLCFKPNOFNG(::MoleMole::HollowChessboard::HollowEntity* BIAPIALNCLC)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_HLCFKPNOFNG_OFFSET))(this, BIAPIALNCLC);
	}

	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* BIMMGNKADFB(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* OGDGINHGLGF, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext* JBJDGHGDNGG)
	{
		return ((::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_BIMMGNKADFB_OFFSET))(this, OGDGINHGLGF, JBJDGHGDNGG);
	}

	static ::System::Void OEIJBFLMHGM(::MoleMole::UIHollowMainPageController* FIEJJJIKOPC, ::AIKGHHJKNCE* FDHLHDGGLDG, ::ProtoScript::HollowGridLink JBCNPOHMGPE, ::ELCIGKLDNCF_LANLNFCHBGK* CJMGMMGBBNB)
	{
		return ((::System::Void(*)(::MoleMole::UIHollowMainPageController*, ::AIKGHHJKNCE*, ::ProtoScript::HollowGridLink, ::ELCIGKLDNCF_LANLNFCHBGK*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_OEIJBFLMHGM_OFFSET))(FIEJJJIKOPC, FDHLHDGGLDG, JBCNPOHMGPE, CJMGMMGBBNB);
	}

	::System::Void NMDABLMBKAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_NMDABLMBKAE_OFFSET))(this);
	}

	static ::System::Void KJBHFINKIFH(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* DJLOKMMLFJC, ::HJEBAFLEPOF* GIEGGIDALHM, ::ELCIGKLDNCF_EBPJKPAJJLM& param_2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::HJEBAFLEPOF*, ::ELCIGKLDNCF_EBPJKPAJJLM&))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_KJBHFINKIFH_OFFSET))(DJLOKMMLFJC, GIEGGIDALHM, param_2);
	}

	::System::Void FJLKMHHFMLP(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* JOIMFGHMOBJ)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_FJLKMHHFMLP_OFFSET))(this, JOIMFGHMOBJ);
	}

	static ::System::Collections::Generic::List_1<::PNJDGHBEMLK*>* KOAJDBANENO(::MoleMole::HollowChessboard::HollowEntity* BIAPIALNCLC)
	{
		return ((::System::Collections::Generic::List_1<::PNJDGHBEMLK*>*(*)(::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_KOAJDBANENO_OFFSET))(BIAPIALNCLC);
	}

	static ::MoleMole::Config::ConfigHollowChessboard_MoveXY* CNHPIJMPOLB(::FBAMLABJMKF* COBEJJHGMPO, ::MoleMole::Config::ConfigHollowChessboard_MoveXY* CKPDKHKEHIA, ::ProtoScript::HollowGridLink JBCNPOHMGPE)
	{
		return ((::MoleMole::Config::ConfigHollowChessboard_MoveXY*(*)(::FBAMLABJMKF*, ::MoleMole::Config::ConfigHollowChessboard_MoveXY*, ::ProtoScript::HollowGridLink))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_CNHPIJMPOLB_OFFSET))(COBEJJHGMPO, CKPDKHKEHIA, JBCNPOHMGPE);
	}

	::System::Void BKOFGIICCEA(::PNJDGHBEMLK* FDHLHDGGLDG, ::System::Collections::Generic::List_1<::System::Object*>* FKDMBPECLJL, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* AAOCANGHBDG, ::System::Collections::Generic::List_1<::System::Object*>* KFJEKMPLGBC, ::System::Action* LJDDOFEHCAM)
	{
		return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*, ::System::Collections::Generic::List_1<::System::Object*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Action*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_BKOFGIICCEA_OFFSET))(this, FDHLHDGGLDG, FKDMBPECLJL, AAOCANGHBDG, KFJEKMPLGBC, LJDDOFEHCAM);
	}

	static ::System::Void BELKBDLBGJM(::MoleMole::Vector2Int POJCDOGBKJC, ::JMIGPHLOLAJ* BCPBLCDOJDB, ::JCLMLILFGPJ* NODKADDMIKL, ::ELCIGKLDNCF_EBPJKPAJJLM& param_3)
	{
		return ((::System::Void(*)(::MoleMole::Vector2Int, ::JMIGPHLOLAJ*, ::JCLMLILFGPJ*, ::ELCIGKLDNCF_EBPJKPAJJLM&))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_BELKBDLBGJM_OFFSET))(POJCDOGBKJC, BCPBLCDOJDB, NODKADDMIKL, param_3);
	}

	::System::Void MGBEEDNODHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_MGBEEDNODHJ_OFFSET))(this);
	}

	::System::Void POBPMBJCKKO(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* JOIMFGHMOBJ)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_POBPMBJCKKO_OFFSET))(this, JOIMFGHMOBJ);
	}

	::System::Void BAJIIBGJLGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_BAJIIBGJLGG_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask DCCPNJDOGOP(::MoleMole::HollowChessboard::HollowEntity* BIAPIALNCLC, ::MoleMole::HollowChessboard::HollowCell NHJFCNOFCEK)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_DCCPNJDOGOP_OFFSET))(this, BIAPIALNCLC, NHJFCNOFCEK);
	}
};
