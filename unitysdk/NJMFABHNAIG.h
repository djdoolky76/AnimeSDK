#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDGNMIDMACL.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/System/Object.h"
class JLCNOGIJGMH;
class NJKFNPIMGKD;
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NJMFABHNAIG_BHODBDOBGHG_OFFSET UNITYSDK_OFFSET(0xBC1C4D0)
#define NJMFABHNAIG_COBDLAEABBB_OFFSET UNITYSDK_OFFSET(0xBC1D970)
#define NJMFABHNAIG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC1B620)
#define NJMFABHNAIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC1E460)
#define NJMFABHNAIG_DNKBJBAIANM_OFFSET UNITYSDK_OFFSET(0xBC1D430)
#define NJMFABHNAIG_FEHNPACGLAL_OFFSET UNITYSDK_OFFSET(0xBC1C0B0)
#define NJMFABHNAIG_FKEILLAAGML_OFFSET UNITYSDK_OFFSET(0xBC1CFD0)
#define NJMFABHNAIG_GGOPAJFHOIG_OFFSET UNITYSDK_OFFSET(0xBC1D480)
#define NJMFABHNAIG_GMHOOKECBAA_OFFSET UNITYSDK_OFFSET(0xBC1B880)
#define NJMFABHNAIG_HNIKHFLJAEK_OFFSET UNITYSDK_OFFSET(0xBC1C440)
#define NJMFABHNAIG_JCOGCNAEANB_OFFSET UNITYSDK_OFFSET(0xBC1DEA0)
#define NJMFABHNAIG_JJPNOFFPIBO_OFFSET UNITYSDK_OFFSET(0xBC1BD90)
#define NJMFABHNAIG_JLEKMEHNGDN_OFFSET UNITYSDK_OFFSET(0xBC1CF60)
#define NJMFABHNAIG_KAIPFBDKMDL_OFFSET UNITYSDK_OFFSET(0xBC1E190)
#define NJMFABHNAIG_KBMMAHMBEEL_OFFSET UNITYSDK_OFFSET(0xBC1DCA0)
#define NJMFABHNAIG_LIALBJJLEJI_OFFSET UNITYSDK_OFFSET(0xBC1DBC0)
#define NJMFABHNAIG_LJFGHHDODNE_OFFSET UNITYSDK_OFFSET(0xBC1BB00)
#define NJMFABHNAIG_ODOGHMFKFNC_OFFSET UNITYSDK_OFFSET(0xBC1CB90)
#define NJMFABHNAIG_OOCHFPFHNON_OFFSET UNITYSDK_OFFSET(0xBC1D3A0)
#define NJMFABHNAIG_OPKGGEDMLGJ_OFFSET UNITYSDK_OFFSET(0xBC1E350)
#define NJMFABHNAIG_PHMKKLABNGF_OFFSET UNITYSDK_OFFSET(0xBC1CB20)
#define NJMFABHNAIG_PPFBBCBPILK_OFFSET UNITYSDK_OFFSET(0xBC1DC00)

	class NJMFABHNAIG : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* PBALHPODPMH; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveNodeType, ::NJKFNPIMGKD*>* OJDGHMDJJDG; // 0x18
		::RPG::Client::Promises::Promise* MOEMENBDMIJ; // 0x20
		::RPG::Client::ActivityIdleLive::StoryLine* GIOECPALNAC; // 0x28
		::RPG::Client::Promises::Promise* JNDMODCLOPP; // 0x30
		::RPG::Client::Promises::Promise* PFPPONIIGMJ; // 0x38
		::System::Boolean IAGIPLEIAEB; // 0x40
		::System::Byte _padding0[0x3];
		::System::UInt32 OIBHOGAKOEI; // 0x44
		::System::UInt32 EPPBOFDHCNN; // 0x48
		::System::UInt32 CABPCIOGFEL; // 0x4C
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::StoryLine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + NJMFABHNAIG_CTOR_OFFSET))(this, a1);
		}

		::System::Void GMHOOKECBAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG_GMHOOKECBAA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* LJFGHHDODNE()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG_LJFGHHDODNE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* JJPNOFFPIBO()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG_JJPNOFFPIBO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* FEHNPACGLAL()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG_FEHNPACGLAL_OFFSET))(this);
		}

		::System::Void HNIKHFLJAEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG_HNIKHFLJAEK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* BHODBDOBGHG(::JDGNMIDMACL a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::JDGNMIDMACL))((::PBYTE)hIl2Cpp + NJMFABHNAIG_BHODBDOBGHG_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* PHMKKLABNGF(::RPG::Client::ActivityIdleLive::StoryLine* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + NJMFABHNAIG_PHMKKLABNGF_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* JLEKMEHNGDN(::RPG::Client::ActivityIdleLive::StoryLine* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + NJMFABHNAIG_JLEKMEHNGDN_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* FKEILLAAGML(::RPG::Client::ActivityIdleLive::StoryLine* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + NJMFABHNAIG_FKEILLAAGML_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OOCHFPFHNON(::RPG::Client::ActivityIdleLive::StoryLine* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + NJMFABHNAIG_OOCHFPFHNON_OFFSET))(this, a1);
		}

		::System::UInt32 DNKBJBAIANM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG_DNKBJBAIANM_OFFSET))(this);
		}

		::System::Void GGOPAJFHOIG(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1, ::System::Func_1<::RPG::Client::Promises::IPromise*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*, ::System::Func_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + NJMFABHNAIG_GGOPAJFHOIG_OFFSET))(this, a1, a2);
		}

		::System::Void COBDLAEABBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG_COBDLAEABBB_OFFSET))(this);
		}

		::System::Void LIALBJJLEJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG_LIALBJJLEJI_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PPFBBCBPILK()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG_PPFBBCBPILK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* ODOGHMFKFNC(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + NJMFABHNAIG_ODOGHMFKFNC_OFFSET))(this, a1);
		}

		::System::Void KBMMAHMBEEL(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + NJMFABHNAIG_KBMMAHMBEEL_OFFSET))(this, a1, a2);
		}

		::System::Void JCOGCNAEANB(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + NJMFABHNAIG_JCOGCNAEANB_OFFSET))(this, a1, a2);
		}

		::System::Void OPKGGEDMLGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG_OPKGGEDMLGJ_OFFSET))(this);
		}

		::System::Void KAIPFBDKMDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG_KAIPFBDKMDL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG_DISPOSE_OFFSET))(this);
		}

	};
