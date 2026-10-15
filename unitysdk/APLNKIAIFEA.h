#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/APLNKIAIFEA_MOODJBCCCPC.h"
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
namespace System { class Action; }
namespace System { class Nullable; }

#define APLNKIAIFEA_ADD_AGENDACOMPLETED_OFFSET UNITYSDK_OFFSET(0x15BB4230)
#define APLNKIAIFEA_ANELIPPLCFA_OFFSET UNITYSDK_OFFSET(0x15BB1F60)
#define APLNKIAIFEA_APIIJAJPLOB_OFFSET UNITYSDK_OFFSET(0x15BB2B00)
#define APLNKIAIFEA_BJHECCIBMAC_OFFSET UNITYSDK_OFFSET(0x15BB20C0)
#define APLNKIAIFEA_CIEELECABAG_OFFSET UNITYSDK_OFFSET(0x15BB3800)
#define APLNKIAIFEA_CTOR_OFFSET UNITYSDK_OFFSET(0x15BB1F30)
#define APLNKIAIFEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BB23C0)
#define APLNKIAIFEA_DNIAJMGJLAE_OFFSET UNITYSDK_OFFSET(0x15BB39E0)
#define APLNKIAIFEA_EILJMKLGIHP_OFFSET UNITYSDK_OFFSET(0x15BB2410)
#define APLNKIAIFEA_FPEHBEDJAKI_OFFSET UNITYSDK_OFFSET(0x15BB3770)
#define APLNKIAIFEA_GLGEBFPEBJE_OFFSET UNITYSDK_OFFSET(0x15BB3E60)
#define APLNKIAIFEA_GPGLPKIDPFH_OFFSET UNITYSDK_OFFSET(0x15BB2710)
#define APLNKIAIFEA_JADHFDFCEBD_OFFSET UNITYSDK_OFFSET(0x15BB3680)
#define APLNKIAIFEA_JDFDABLNPCF_OFFSET UNITYSDK_OFFSET(0x15BB4040)
#define APLNKIAIFEA_JIBLKHAGKMO_OFFSET UNITYSDK_OFFSET(0x15BB28F0)
#define APLNKIAIFEA_KFKLGPALDGO_OFFSET UNITYSDK_OFFSET(0x15BB3420)
#define APLNKIAIFEA_KKLMJLPFNFH_OFFSET UNITYSDK_OFFSET(0x15BB3BC0)
#define APLNKIAIFEA_LNIIGMDKJBC_OFFSET UNITYSDK_OFFSET(0x15BB40B0)
#define APLNKIAIFEA_MKEAJNMAELO_OFFSET UNITYSDK_OFFSET(0x15BB32F0)
#define APLNKIAIFEA_NIOBHBCHKKF_OFFSET UNITYSDK_OFFSET(0x15BB25F0)
#define APLNKIAIFEA_REMOVE_AGENDACOMPLETED_OFFSET UNITYSDK_OFFSET(0x15BB4290)
#define APLNKIAIFEA__ADVANCETOSELECTTARGETPARTSTAGE_B__17_0_OFFSET UNITYSDK_OFFSET(0x15BB4440)
#define APLNKIAIFEA__SELECTDEVELOPPARTASYNC_B__4_0_OFFSET UNITYSDK_OFFSET(0x15BB42F0)
#define APLNKIAIFEA___ADVANCEPROCESS_B__16_0_OFFSET UNITYSDK_OFFSET(0x15BB4420)
#define APLNKIAIFEA___ADVANCEPROCESS_B__16_1_OFFSET UNITYSDK_OFFSET(0x15BB4430)
#define APLNKIAIFEA___ADVANCETOACTIONSELECTEMPTYSTATE_B__14_0_OFFSET UNITYSDK_OFFSET(0x15BB4410)

inline static constexpr unsigned int APLNKIAIFEA_TypeDefinitionIndex = 81807;

	class APLNKIAIFEA : public ::System::Object
	{
	public:
		::JLJMMKPGDGH* MJHHLOPFDNK; // 0x10
		::IDCOJJANCCK* MPFFGNPIDOA; // 0x18
		::EHNCBICHIGP* PGJDKJPNJFN; // 0x20
		::PJAPDCPOBGC* FCCMAEFHDIA; // 0x28
		::KBKFLNHFHPF* APIINPIAPFI; // 0x30
		::KMKEFPAJIPI* CEAAMGFCOLP; // 0x38
		::RPG::Client::UIController* MMFEAJNJNCH; // 0x40
		::System::Action* AgendaCompleted; // 0x48
		::RPG::Client::UIController* OBDLCANHEGH; // 0x50
		::BDHINPLKOPK* GKLKOIJJEKJ; // 0x58
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

		::APLNKIAIFEA_MOODJBCCCPC KFKLGPALDGO(::JEFCEGFBOAF* a1, ::System::Nullable* a2)
		{
			return ((::APLNKIAIFEA_MOODJBCCCPC(*)(::PVOID, ::JEFCEGFBOAF*, ::System::Nullable*))((::PBYTE)hIl2Cpp + APLNKIAIFEA_KFKLGPALDGO_OFFSET))(this, a1, a2);
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

		::System::Void add_AgendaCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + APLNKIAIFEA_ADD_AGENDACOMPLETED_OFFSET))(this, a1);
		}

		::System::Void remove_AgendaCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + APLNKIAIFEA_REMOVE_AGENDACOMPLETED_OFFSET))(this, a1);
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
