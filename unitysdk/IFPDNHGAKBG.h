#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLCNOGIJGMH;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFPDNHGAKBG_AJIKCLOKMPJ_OFFSET UNITYSDK_OFFSET(0x15F31460)
#define IFPDNHGAKBG_BCIJBBMOKFG_OFFSET UNITYSDK_OFFSET(0x15F30CA0)
#define IFPDNHGAKBG_BKEGFCAPALL_OFFSET UNITYSDK_OFFSET(0x15F322C0)
#define IFPDNHGAKBG_COEBKKJEGEK_OFFSET UNITYSDK_OFFSET(0x15F31E20)
#define IFPDNHGAKBG_CTOR_OFFSET UNITYSDK_OFFSET(0x15F30B80)
#define IFPDNHGAKBG_DFPJEEJJJOJ_OFFSET UNITYSDK_OFFSET(0x15F31F70)
#define IFPDNHGAKBG_EDGJNNAMAMG_OFFSET UNITYSDK_OFFSET(0x15F31C50)
#define IFPDNHGAKBG_FGEFPMDLPKI_OFFSET UNITYSDK_OFFSET(0x15F30C30)
#define IFPDNHGAKBG_GET_DEBUGSTATE_OFFSET UNITYSDK_OFFSET(0x15F30B60)
#define IFPDNHGAKBG_GHIIBCPPKIO_OFFSET UNITYSDK_OFFSET(0x15F321A0)
#define IFPDNHGAKBG_GLOINMPKOIL_OFFSET UNITYSDK_OFFSET(0x15F317B0)
#define IFPDNHGAKBG_LKHPBPEPMHG_OFFSET UNITYSDK_OFFSET(0x15F311A0)
#define IFPDNHGAKBG_MIBEDIPNKFE_OFFSET UNITYSDK_OFFSET(0x15F31AA0)
#define IFPDNHGAKBG_NHMLOLIGJAH_OFFSET UNITYSDK_OFFSET(0x15F31CA0)
#define IFPDNHGAKBG_OACBIMNHLFO_OFFSET UNITYSDK_OFFSET(0x15F314D0)
#define IFPDNHGAKBG_OBKHHFLOKDG_OFFSET UNITYSDK_OFFSET(0x15F31D70)
#define IFPDNHGAKBG_PLIDKEFOBAJ_OFFSET UNITYSDK_OFFSET(0x15F31350)
#define IFPDNHGAKBG_SET_DEBUGSTATE_OFFSET UNITYSDK_OFFSET(0x15F30B70)
#define IFPDNHGAKBG___SHOWBATTLESUCCTOAST_B__30_0_OFFSET UNITYSDK_OFFSET(0x15F32CA0)
#define IFPDNHGAKBG___SHOWBOSSSUCCDIALOG_B__29_0_OFFSET UNITYSDK_OFFSET(0x15F32C70)
#define IFPDNHGAKBG___SHOWCATCHUPREWARDDIALOG_B__27_0_OFFSET UNITYSDK_OFFSET(0x15F32C40)
#define IFPDNHGAKBG___SHOWEQUIPORB_B__24_0_OFFSET UNITYSDK_OFFSET(0x15F32C10)

	class IFPDNHGAKBG : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* AFGBNAAFJFO; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* EGKCFNBCICI; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* FEKELAENMNH; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* BDFPNINIPKE; // 0x28
		::RPG::Client::Promises::Promise* DPGLAJCOOCH; // 0x30
		::RPG::Client::Promises::Promise* GLJPMGNOKNI; // 0x38
		::RPG::Client::Promises::Promise* BLOOOMDHGFG; // 0x40
		::System::UInt32 IJHAJEABAJF; // 0x48
		::System::Boolean FJHCJAKGLGK; // 0x4C
		::System::Byte _padding0[0x3];
		::System::UInt32 LPFLIFFMJEL; // 0x50
		::System::UInt32 _DebugState_k__BackingField; // 0x54
		// static const ::System::Object ENEDNPEBCJK; // 0x0
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_DebugState()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_GET_DEBUGSTATE_OFFSET))(this);
		}

		::System::Void set_DebugState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_SET_DEBUGSTATE_OFFSET))(this, a1);
		}

		::System::Void FGEFPMDLPKI(::JLCNOGIJGMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLCNOGIJGMH*))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_FGEFPMDLPKI_OFFSET))(this, a1);
		}

		::System::Void BCIJBBMOKFG(::JLCNOGIJGMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLCNOGIJGMH*))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_BCIJBBMOKFG_OFFSET))(this, a1);
		}

		::System::Void LKHPBPEPMHG(::JLCNOGIJGMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLCNOGIJGMH*))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_LKHPBPEPMHG_OFFSET))(this, a1);
		}

		::System::Void PLIDKEFOBAJ(::JLCNOGIJGMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLCNOGIJGMH*))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_PLIDKEFOBAJ_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* AJIKCLOKMPJ(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_AJIKCLOKMPJ_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* GLOINMPKOIL()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_GLOINMPKOIL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OACBIMNHLFO(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_OACBIMNHLFO_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* COEBKKJEGEK()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_COEBKKJEGEK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* MIBEDIPNKFE()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_MIBEDIPNKFE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NHMLOLIGJAH()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_NHMLOLIGJAH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OBKHHFLOKDG()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_OBKHHFLOKDG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* DFPJEEJJJOJ()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_DFPJEEJJJOJ_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* EDGJNNAMAMG()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_EDGJNNAMAMG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* BKEGFCAPALL(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_BKEGFCAPALL_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* GHIIBCPPKIO()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPDNHGAKBG_GHIIBCPPKIO_OFFSET))(this);
		}

		::System::Void __ShowEquipOrb_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPDNHGAKBG___SHOWEQUIPORB_B__24_0_OFFSET))(this);
		}

		::System::Void __ShowCatchUpRewardDialog_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPDNHGAKBG___SHOWCATCHUPREWARDDIALOG_B__27_0_OFFSET))(this);
		}

		::System::Void __ShowBossSuccDialog_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPDNHGAKBG___SHOWBOSSSUCCDIALOG_B__29_0_OFFSET))(this);
		}

		::System::Void __ShowBattleSuccToast_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPDNHGAKBG___SHOWBATTLESUCCTOAST_B__30_0_OFFSET))(this);
		}

	};
