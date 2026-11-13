#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLOCAENEKMK_EnterFlowFailFallback.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
class BNJGDLKNIEJ;
class DJNGLNNIAFL;
class GLOCAENEKMK;
class LDBOCEIMACL;
class NHHKCCGMHEF;
class NPMFJNCAKCD;
namespace RPG::Client { class BaseGameFlowContext; }
namespace RPG::Client { class ChenLingFesModule; }
namespace RPG::Client { class ChenLingFesStageInstance; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLOCAENEKMK_BECMFHFMHDC_OFFSET UNITYSDK_OFFSET(0x16C6DD20)
#define GLOCAENEKMK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16C6AF90)
#define GLOCAENEKMK_CMHDICCEDGE_OFFSET UNITYSDK_OFFSET(0x16C6B900)
#define GLOCAENEKMK_CPLGEOOGOFP_OFFSET UNITYSDK_OFFSET(0x16C6E2C0)
#define GLOCAENEKMK_CTOR_OFFSET UNITYSDK_OFFSET(0x16C6B1C0)
#define GLOCAENEKMK_DBODHFKAJNA_OFFSET UNITYSDK_OFFSET(0x16C6DC20)
#define GLOCAENEKMK_DCOHLFKDBKO_OFFSET UNITYSDK_OFFSET(0x16C6BCA0)
#define GLOCAENEKMK_ENDFKJAMIIE_OFFSET UNITYSDK_OFFSET(0x16C6D260)
#define GLOCAENEKMK_FEIHGKFLMGL_OFFSET UNITYSDK_OFFSET(0x16C6D1F0)
#define GLOCAENEKMK_GAOHBGJEJLB_OFFSET UNITYSDK_OFFSET(0x16C6C880)
#define GLOCAENEKMK_GET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x16C6E330)
#define GLOCAENEKMK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16C6E320)
#define GLOCAENEKMK_GNNNOACCCOM_OFFSET UNITYSDK_OFFSET(0x16C6D730)
#define GLOCAENEKMK_HJAEFBCBHAC_OFFSET UNITYSDK_OFFSET(0x16C6B4E0)
#define GLOCAENEKMK_HKAIGBNNJBM_OFFSET UNITYSDK_OFFSET(0x16C6D910)
#define GLOCAENEKMK_HPBEBCLADNK_OFFSET UNITYSDK_OFFSET(0x16C6B270)
#define GLOCAENEKMK_HPFMGENEJJP_OFFSET UNITYSDK_OFFSET(0x16C6C500)
#define GLOCAENEKMK_IJDACICECBJ_OFFSET UNITYSDK_OFFSET(0x16C6C800)
#define GLOCAENEKMK_ILIOCGPMEAK_OFFSET UNITYSDK_OFFSET(0x16C6B9F0)
#define GLOCAENEKMK_IMPHGDMBAPP_OFFSET UNITYSDK_OFFSET(0x16C6B370)
#define GLOCAENEKMK_JCJCBJMFOJI_OFFSET UNITYSDK_OFFSET(0x16C6B620)
#define GLOCAENEKMK_KHFNDNABGBE_OFFSET UNITYSDK_OFFSET(0x16C6B740)
#define GLOCAENEKMK_KJNCPBOHENL_OFFSET UNITYSDK_OFFSET(0x16C6D5D0)
#define GLOCAENEKMK_KNPLMAMBKAI_OFFSET UNITYSDK_OFFSET(0x16C6DCB0)
#define GLOCAENEKMK_LGJMGCABIMP_OFFSET UNITYSDK_OFFSET(0x16C6DA80)
#define GLOCAENEKMK_LHKAEIOAANM_OFFSET UNITYSDK_OFFSET(0x16C6C3C0)
#define GLOCAENEKMK_LJNNNIGKIMJ_OFFSET UNITYSDK_OFFSET(0x16C6D7F0)
#define GLOCAENEKMK_LKBNJCGAIIA_OFFSET UNITYSDK_OFFSET(0x16C6B890)
#define GLOCAENEKMK_LODPHBBGLHC_OFFSET UNITYSDK_OFFSET(0x16C6B1D0)
#define GLOCAENEKMK_MILAILHAFEE_OFFSET UNITYSDK_OFFSET(0x16C6C360)
#define GLOCAENEKMK_MMOCINCHBCI_OFFSET UNITYSDK_OFFSET(0x16C6DED0)
#define GLOCAENEKMK_MPKHOKONFFM_OFFSET UNITYSDK_OFFSET(0x16C6D0D0)
#define GLOCAENEKMK_NIPDCHOJNHJ_OFFSET UNITYSDK_OFFSET(0x16C6D190)
#define GLOCAENEKMK_OMNKAPCCHDP_OFFSET UNITYSDK_OFFSET(0x16C6CE60)
#define GLOCAENEKMK_ONENTERED_OFFSET UNITYSDK_OFFSET(0x16C6BF40)
#define GLOCAENEKMK_ONINITED_OFFSET UNITYSDK_OFFSET(0x16C6BDA0)
#define GLOCAENEKMK_SET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x16C6E340)
#define GLOCAENEKMK__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x16C6CBC0)
#define GLOCAENEKMK__ONEXITED_OFFSET UNITYSDK_OFFSET(0x16C6CC20)

inline static constexpr unsigned int GLOCAENEKMK_TypeDefinitionIndex = 80453;

	class GLOCAENEKMK : public ::RPG::Client::BaseGameFlow
	{
	public:
		::System::String* GNKBIHLPILA; // 0x40
		::RPG::Client::Promises::Promise* FDHDACECNOF; // 0x48
		::System::IDisposable* IDDCLDHMEEM; // 0x50
		::RPG::Client::Promises::Promise* INHEPNECOBC; // 0x58
		::RPG::Client::Promises::Promise* IJHMOGOKADB; // 0x60
		::System::String* JDHMHMPBDID; // 0x68
		::BNJGDLKNIEJ* _GameContext_k__BackingField; // 0x70
		::System::Boolean HDJNCCBGMDJ; // 0x78
		::System::Boolean DGBILBJLIPP; // 0x79
		::System::Byte _padding0[0x2];
		::System::UInt32 KOLIHHFNCKK; // 0x7C
		::System::UInt32 IGKPBCOMLGE; // 0x80
		::System::Boolean PALGDPAEOOI; // 0x84
		::System::Boolean OPFMAELOOKD; // 0x85
		::System::Boolean OAFFONHIPOF; // 0x86
		// static const ::System::String* AMDHBDONMDN; // 0x0
		// static const ::System::String* FILDPCJDHEF; // 0x0
		// static const ::System::Object BMGAJNDFEKP; // 0x0
		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + GLOCAENEKMK_CTOR_OFFSET))(this, a1);
		}

		static ::GLOCAENEKMK* BPLPBPMEODA(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::GLOCAENEKMK*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + GLOCAENEKMK_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void LODPHBBGLHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_LODPHBBGLHC_OFFSET))(this);
		}

		::System::Void HPBEBCLADNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_HPBEBCLADNK_OFFSET))(this);
		}

		::System::Void HJAEFBCBHAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_HJAEFBCBHAC_OFFSET))(this);
		}

		::System::Void KHFNDNABGBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_KHFNDNABGBE_OFFSET))(this);
		}

		::System::Void IMPHGDMBAPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_IMPHGDMBAPP_OFFSET))(this);
		}

		::System::Void LKBNJCGAIIA(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GLOCAENEKMK_LKBNJCGAIIA_OFFSET))(this, a1, a2);
		}

		::System::Void CMHDICCEDGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLOCAENEKMK_CMHDICCEDGE_OFFSET))(this, a1);
		}

		::System::Void ILIOCGPMEAK(::NHHKCCGMHEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHHKCCGMHEF*))((::PBYTE)hIl2Cpp + GLOCAENEKMK_ILIOCGPMEAK_OFFSET))(this, a1);
		}

		::System::Void DCOHLFKDBKO(::LDBOCEIMACL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDBOCEIMACL*))((::PBYTE)hIl2Cpp + GLOCAENEKMK_DCOHLFKDBKO_OFFSET))(this, a1);
		}

		::System::Void OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_ONINITED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_ONENTERED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* IJDACICECBJ()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_IJDACICECBJ_OFFSET))(this);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + GLOCAENEKMK__ONCONTEXTDETACHED_OFFSET))(this, a1);
		}

		::System::Void _OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK__ONEXITED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* HPFMGENEJJP()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_HPFMGENEJJP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* LHKAEIOAANM()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_LHKAEIOAANM_OFFSET))(this);
		}

		::System::Void FEIHGKFLMGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLOCAENEKMK_FEIHGKFLMGL_OFFSET))(this, a1);
		}

		::System::Void MPKHOKONFFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_MPKHOKONFFM_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* KJNCPBOHENL()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_KJNCPBOHENL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* GAOHBGJEJLB()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_GAOHBGJEJLB_OFFSET))(this);
		}

		::System::Void GNNNOACCCOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_GNNNOACCCOM_OFFSET))(this);
		}

		::System::Void LJNNNIGKIMJ(::DJNGLNNIAFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJNGLNNIAFL*))((::PBYTE)hIl2Cpp + GLOCAENEKMK_LJNNNIGKIMJ_OFFSET))(this, a1);
		}

		::System::Void OMNKAPCCHDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_OMNKAPCCHDP_OFFSET))(this);
		}

		::System::Void HKAIGBNNJBM(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + GLOCAENEKMK_HKAIGBNNJBM_OFFSET))(this, a1);
		}

		::GLOCAENEKMK_EnterFlowFailFallback LGJMGCABIMP()
		{
			return ((::GLOCAENEKMK_EnterFlowFailFallback(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_LGJMGCABIMP_OFFSET))(this);
		}

		::System::Void DBODHFKAJNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_DBODHFKAJNA_OFFSET))(this);
		}

		::System::Void KNPLMAMBKAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_KNPLMAMBKAI_OFFSET))(this);
		}

		::System::Void BECMFHFMHDC(::NPMFJNCAKCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPMFJNCAKCD*))((::PBYTE)hIl2Cpp + GLOCAENEKMK_BECMFHFMHDC_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* JCJCBJMFOJI()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_JCJCBJMFOJI_OFFSET))(this);
		}

		::System::Void CPLGEOOGOFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_CPLGEOOGOFP_OFFSET))(this);
		}

		::System::Void ENDFKJAMIIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_ENDFKJAMIIE_OFFSET))(this);
		}

		::System::Void MMOCINCHBCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_MMOCINCHBCI_OFFSET))(this);
		}

		::RPG::GameCore::GameFlowType get_Type()
		{
			return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_GET_TYPE_OFFSET))(this);
		}

		::BNJGDLKNIEJ* get_GameContext()
		{
			return ((::BNJGDLKNIEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_GET_GAMECONTEXT_OFFSET))(this);
		}

		::System::Void set_GameContext(::BNJGDLKNIEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNJGDLKNIEJ*))((::PBYTE)hIl2Cpp + GLOCAENEKMK_SET_GAMECONTEXT_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFesModule* NIPDCHOJNHJ()
		{
			return ((::RPG::Client::ChenLingFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_NIPDCHOJNHJ_OFFSET))(this);
		}

		::RPG::Client::ChenLingFesStageInstance* MILAILHAFEE()
		{
			return ((::RPG::Client::ChenLingFesStageInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK_MILAILHAFEE_OFFSET))(this);
		}

	};
