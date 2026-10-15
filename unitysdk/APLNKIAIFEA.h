#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/APLNKIAIFEA_MOODJBCCCPC.h"
#include "unitysdk/System/Nullable_1.h"
class AJPBKMBIGNC;
class BDHINPLKOPK;
class BFGMJKEJPNA;
class CLHIJOAKJCE;
class EHNCBICHIGP;
class GIDPDEJAAED;
class HKGJBAGOHFH;
class IDCOJJANCCK;
class JEFCEGFBOAF;
class JLJMMKPGDGH;
class KBKFLNHFHPF;
class KMKEFPAJIPI;
class MONJFDPKFBA;
class PJAPDCPOBGC;
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Action_1; }

#define APLNKIAIFEA_ADD_AGENDACOMPLETED_OFFSET UNITYSDK_OFFSET(0x15BA8240)
#define APLNKIAIFEA_ANELIPPLCFA_OFFSET UNITYSDK_OFFSET(0x15BA5F60)
#define APLNKIAIFEA_APIIJAJPLOB_OFFSET UNITYSDK_OFFSET(0x15BA6B00)
#define APLNKIAIFEA_BJHECCIBMAC_OFFSET UNITYSDK_OFFSET(0x15BA60C0)
#define APLNKIAIFEA_CIEELECABAG_OFFSET UNITYSDK_OFFSET(0x15BA7800)
#define APLNKIAIFEA_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA5F40)
#define APLNKIAIFEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BA63C0)
#define APLNKIAIFEA_DNIAJMGJLAE_OFFSET UNITYSDK_OFFSET(0x15BA79E0)
#define APLNKIAIFEA_EILJMKLGIHP_OFFSET UNITYSDK_OFFSET(0x15BA6410)
#define APLNKIAIFEA_FPEHBEDJAKI_OFFSET UNITYSDK_OFFSET(0x15BA7770)
#define APLNKIAIFEA_GLGEBFPEBJE_OFFSET UNITYSDK_OFFSET(0x15BA7E60)
#define APLNKIAIFEA_GPGLPKIDPFH_OFFSET UNITYSDK_OFFSET(0x15BA6710)
#define APLNKIAIFEA_JADHFDFCEBD_OFFSET UNITYSDK_OFFSET(0x15BA7680)
#define APLNKIAIFEA_JDFDABLNPCF_OFFSET UNITYSDK_OFFSET(0x15BA8050)
#define APLNKIAIFEA_JIBLKHAGKMO_OFFSET UNITYSDK_OFFSET(0x15BA68F0)
#define APLNKIAIFEA_KFKLGPALDGO_OFFSET UNITYSDK_OFFSET(0x15BA7420)
#define APLNKIAIFEA_KKLMJLPFNFH_OFFSET UNITYSDK_OFFSET(0x15BA7BC0)
#define APLNKIAIFEA_LNIIGMDKJBC_OFFSET UNITYSDK_OFFSET(0x15BA80C0)
#define APLNKIAIFEA_MKEAJNMAELO_OFFSET UNITYSDK_OFFSET(0x15BA72F0)
#define APLNKIAIFEA_NIOBHBCHKKF_OFFSET UNITYSDK_OFFSET(0x15BA65F0)
#define APLNKIAIFEA_REMOVE_AGENDACOMPLETED_OFFSET UNITYSDK_OFFSET(0x15BA82A0)
#define APLNKIAIFEA__ADVANCETOSELECTTARGETPARTSTAGE_B__17_0_OFFSET UNITYSDK_OFFSET(0x15BA8450)
#define APLNKIAIFEA__SELECTDEVELOPPARTASYNC_B__4_0_OFFSET UNITYSDK_OFFSET(0x15BA8300)
#define APLNKIAIFEA___ADVANCEPROCESS_B__16_0_OFFSET UNITYSDK_OFFSET(0x15BA8430)
#define APLNKIAIFEA___ADVANCEPROCESS_B__16_1_OFFSET UNITYSDK_OFFSET(0x15BA8440)
#define APLNKIAIFEA___ADVANCETOACTIONSELECTEMPTYSTATE_B__14_0_OFFSET UNITYSDK_OFFSET(0x15BA8420)

inline static constexpr unsigned int APLNKIAIFEA_TypeDefinitionIndex = 81806;

	class APLNKIAIFEA : public ::System::Object
	{
	public:
		::JLJMMKPGDGH* MJHHLOPFDNK; // 0x10
		::EHNCBICHIGP* PGJDKJPNJFN; // 0x18
		::IDCOJJANCCK* MPFFGNPIDOA; // 0x20
		::System::Action_1<::BFGMJKEJPNA*>* AgendaCompleted; // 0x28
		::RPG::Client::UIController* MMFEAJNJNCH; // 0x30
		::BDHINPLKOPK* GKLKOIJJEKJ; // 0x38
		::KMKEFPAJIPI* CEAAMGFCOLP; // 0x40
		::RPG::Client::UIController* OBDLCANHEGH; // 0x48
		::PJAPDCPOBGC* FCCMAEFHDIA; // 0x50
		::KBKFLNHFHPF* APIINPIAPFI; // 0x58
		::System::Boolean JGLJAMJKECE; // 0x60
		::System::Void _ctor(::BDHINPLKOPK* a1, ::JLJMMKPGDGH* a2, ::PJAPDCPOBGC* a3, ::KBKFLNHFHPF* a4, ::EHNCBICHIGP* a5, ::IDCOJJANCCK* a6)
		{
			return ((::System::Void(*)(::PVOID, ::BDHINPLKOPK*, ::JLJMMKPGDGH*, ::PJAPDCPOBGC*, ::KBKFLNHFHPF*, ::EHNCBICHIGP*, ::IDCOJJANCCK*))((::PBYTE)hIl2Cpp + APLNKIAIFEA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ANELIPPLCFA(::AJPBKMBIGNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJPBKMBIGNC*))((::PBYTE)hIl2Cpp + APLNKIAIFEA_ANELIPPLCFA_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLNKIAIFEA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* EILJMKLGIHP(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APLNKIAIFEA_EILJMKLGIHP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* NIOBHBCHKKF(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APLNKIAIFEA_NIOBHBCHKKF_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* GPGLPKIDPFH(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APLNKIAIFEA_GPGLPKIDPFH_OFFSET))(this, a1);
		}

		::System::Void JIBLKHAGKMO(::HKGJBAGOHFH* a1, ::CLHIJOAKJCE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HKGJBAGOHFH*, ::CLHIJOAKJCE*))((::PBYTE)hIl2Cpp + APLNKIAIFEA_JIBLKHAGKMO_OFFSET))(this, a1, a2);
		}

		::System::UInt32 APIIJAJPLOB(::MONJFDPKFBA* a1, ::CLHIJOAKJCE* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::MONJFDPKFBA*, ::CLHIJOAKJCE*))((::PBYTE)hIl2Cpp + APLNKIAIFEA_APIIJAJPLOB_OFFSET))(this, a1, a2);
		}

		::System::UInt32 MKEAJNMAELO(::MONJFDPKFBA* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::MONJFDPKFBA*, ::System::UInt32))((::PBYTE)hIl2Cpp + APLNKIAIFEA_MKEAJNMAELO_OFFSET))(this, a1, a2);
		}

		::APLNKIAIFEA_MOODJBCCCPC KFKLGPALDGO(::JEFCEGFBOAF* a1, ::System::Nullable_1<::System::UInt32> a2)
		{
			return ((::APLNKIAIFEA_MOODJBCCCPC(*)(::PVOID, ::JEFCEGFBOAF*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + APLNKIAIFEA_KFKLGPALDGO_OFFSET))(this, a1, a2);
		}

		::System::Void JADHFDFCEBD(::APLNKIAIFEA_MOODJBCCCPC a1)
		{
			return ((::System::Void(*)(::PVOID, ::APLNKIAIFEA_MOODJBCCCPC))((::PBYTE)hIl2Cpp + APLNKIAIFEA_JADHFDFCEBD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* CIEELECABAG(::System::UInt32 a1, ::System::UInt32 a2, ::APLNKIAIFEA_MOODJBCCCPC a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::APLNKIAIFEA_MOODJBCCCPC))((::PBYTE)hIl2Cpp + APLNKIAIFEA_CIEELECABAG_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise* DNIAJMGJLAE(::System::UInt32 a1, ::System::UInt32 a2, ::APLNKIAIFEA_MOODJBCCCPC a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::APLNKIAIFEA_MOODJBCCCPC))((::PBYTE)hIl2Cpp + APLNKIAIFEA_DNIAJMGJLAE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KKLMJLPFNFH(::APLNKIAIFEA_MOODJBCCCPC a1)
		{
			return ((::System::Void(*)(::PVOID, ::APLNKIAIFEA_MOODJBCCCPC))((::PBYTE)hIl2Cpp + APLNKIAIFEA_KKLMJLPFNFH_OFFSET))(this, a1);
		}

		::System::Void FPEHBEDJAKI(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + APLNKIAIFEA_FPEHBEDJAKI_OFFSET))(this, a1);
		}

		::System::Void BJHECCIBMAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLNKIAIFEA_BJHECCIBMAC_OFFSET))(this);
		}

		::System::Void GLGEBFPEBJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLNKIAIFEA_GLGEBFPEBJE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* JDFDABLNPCF()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + APLNKIAIFEA_JDFDABLNPCF_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* LNIIGMDKJBC(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APLNKIAIFEA_LNIIGMDKJBC_OFFSET))(this, a1);
		}

		::System::Void add_AgendaCompleted(::System::Action_1<::BFGMJKEJPNA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::BFGMJKEJPNA*>*))((::PBYTE)hIl2Cpp + APLNKIAIFEA_ADD_AGENDACOMPLETED_OFFSET))(this, a1);
		}

		::System::Void remove_AgendaCompleted(::System::Action_1<::BFGMJKEJPNA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::BFGMJKEJPNA*>*))((::PBYTE)hIl2Cpp + APLNKIAIFEA_REMOVE_AGENDACOMPLETED_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _SelectDevelopPartAsync_b__4_0(::GIDPDEJAAED* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::GIDPDEJAAED*))((::PBYTE)hIl2Cpp + APLNKIAIFEA__SELECTDEVELOPPARTASYNC_B__4_0_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* __AdvanceToActionSelectEmptyState_b__14_0(::RPG::Client::UIController* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + APLNKIAIFEA___ADVANCETOACTIONSELECTEMPTYSTATE_B__14_0_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* __AdvanceProcess_b__16_0(::RPG::Client::UIController* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + APLNKIAIFEA___ADVANCEPROCESS_B__16_0_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* __AdvanceProcess_b__16_1(::RPG::Client::UIController* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + APLNKIAIFEA___ADVANCEPROCESS_B__16_1_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* _AdvanceToSelectTargetPartStage_b__17_0(::RPG::Client::UIController* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + APLNKIAIFEA__ADVANCETOSELECTTARGETPARTSTAGE_B__17_0_OFFSET))(this, a1);
		}

	};
