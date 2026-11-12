#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TransitionMode.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class CustomMazeBattleTransitionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MazeBattleTransitionConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransitionPerformConfig; }
namespace System { class Action; }
namespace System { class Object; }

#define IILBDKLEPMM_AACEAMPHLFF_OFFSET UNITYSDK_OFFSET(0x17401050)
#define IILBDKLEPMM_AGMPLGKHIFG_OFFSET UNITYSDK_OFFSET(0x17402690)
#define IILBDKLEPMM_ANOHODCAOJE_OFFSET UNITYSDK_OFFSET(0x17400630)
#define IILBDKLEPMM_BHEIANKOOPN_OFFSET UNITYSDK_OFFSET(0x173FE480)
#define IILBDKLEPMM_BKEIKNAJNKA_OFFSET UNITYSDK_OFFSET(0x173FFD90)
#define IILBDKLEPMM_BPJCPGABDBN_OFFSET UNITYSDK_OFFSET(0x17400D60)
#define IILBDKLEPMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x17402B90)
#define IILBDKLEPMM_CKKCEIDOKJK_OFFSET UNITYSDK_OFFSET(0x17401DA0)
#define IILBDKLEPMM_CKPLFODNPCE_OFFSET UNITYSDK_OFFSET(0x174002E0)
#define IILBDKLEPMM_CNADBDCOIBB_OFFSET UNITYSDK_OFFSET(0x17402B70)
#define IILBDKLEPMM_CTOR_OFFSET UNITYSDK_OFFSET(0x173FE3E0)
#define IILBDKLEPMM_DGODOKNHFNK_OFFSET UNITYSDK_OFFSET(0x174028E0)
#define IILBDKLEPMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x173FECE0)
#define IILBDKLEPMM_DNJLGLOCCPF_OFFSET UNITYSDK_OFFSET(0x17400870)
#define IILBDKLEPMM_EBFPJKBAFJM_OFFSET UNITYSDK_OFFSET(0x173FED80)
#define IILBDKLEPMM_ECPDMJMMBPK_OFFSET UNITYSDK_OFFSET(0x17401100)
#define IILBDKLEPMM_EEIOIGOGCJG_OFFSET UNITYSDK_OFFSET(0x17400560)
#define IILBDKLEPMM_EFANADMIDBM_OFFSET UNITYSDK_OFFSET(0x17400B00)
#define IILBDKLEPMM_EFFEPBAIHMN_OFFSET UNITYSDK_OFFSET(0x174010A0)
#define IILBDKLEPMM_FEJCLAAIODB_OFFSET UNITYSDK_OFFSET(0x17400EA0)
#define IILBDKLEPMM_FFMJBPDCACD_OFFSET UNITYSDK_OFFSET(0x174005C0)
#define IILBDKLEPMM_FPMNNGCHPOO_OFFSET UNITYSDK_OFFSET(0x17402AE0)
#define IILBDKLEPMM_GBFAJLDBEAO_OFFSET UNITYSDK_OFFSET(0x17402890)
#define IILBDKLEPMM_GET_CURRENTATTACKER_OFFSET UNITYSDK_OFFSET(0x17402B30)
#define IILBDKLEPMM_GET_CURRENTDEFENDER_OFFSET UNITYSDK_OFFSET(0x17402B50)
#define IILBDKLEPMM_GET_ISMAZETOBATTLETRANSITIONSHOWSTARTED_OFFSET UNITYSDK_OFFSET(0x17402B10)
#define IILBDKLEPMM_GFPALCDENJK_OFFSET UNITYSDK_OFFSET(0x17402100)
#define IILBDKLEPMM_GLEPIBPKBCA_OFFSET UNITYSDK_OFFSET(0x173FF050)
#define IILBDKLEPMM_GNKBACDNLLL_OFFSET UNITYSDK_OFFSET(0x17402830)
#define IILBDKLEPMM_GPCCAAAHACH_OFFSET UNITYSDK_OFFSET(0x17400290)
#define IILBDKLEPMM_HHHAEDFIFJN_OFFSET UNITYSDK_OFFSET(0x17402460)
#define IILBDKLEPMM_HNOBBKNPIIK_OFFSET UNITYSDK_OFFSET(0x173FF4B0)
#define IILBDKLEPMM_JHFMPLBJBMH_OFFSET UNITYSDK_OFFSET(0x173FF280)
#define IILBDKLEPMM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x173FE560)
#define IILBDKLEPMM_LIMKLIIEENE_OFFSET UNITYSDK_OFFSET(0x17401270)
#define IILBDKLEPMM_LKLBIBAMIPC_OFFSET UNITYSDK_OFFSET(0x174019A0)
#define IILBDKLEPMM_LNONBNCBDOB_OFFSET UNITYSDK_OFFSET(0x174024C0)
#define IILBDKLEPMM_MFDIMFNLDOL_OFFSET UNITYSDK_OFFSET(0x17402B80)
#define IILBDKLEPMM_MFFGIAPHGOC_OFFSET UNITYSDK_OFFSET(0x17400F00)
#define IILBDKLEPMM_NBCDFGJDDDF_OFFSET UNITYSDK_OFFSET(0x17400040)
#define IILBDKLEPMM_NBEJGFBJILP_OFFSET UNITYSDK_OFFSET(0x17402930)
#define IILBDKLEPMM_NHCPNDGAGKK_OFFSET UNITYSDK_OFFSET(0x17401740)
#define IILBDKLEPMM_OKONFDLDGPB_OFFSET UNITYSDK_OFFSET(0x17401690)
#define IILBDKLEPMM_PDADKILDHFM_OFFSET UNITYSDK_OFFSET(0x17400510)
#define IILBDKLEPMM_PGCBCKNNCGH_OFFSET UNITYSDK_OFFSET(0x173FEF70)
#define IILBDKLEPMM_PNKJBLDJKBF_OFFSET UNITYSDK_OFFSET(0x173FFFF0)
#define IILBDKLEPMM_POLKKBNHFFH_OFFSET UNITYSDK_OFFSET(0x173FF7A0)
#define IILBDKLEPMM_PPNGAECHIAE_OFFSET UNITYSDK_OFFSET(0x173FFA80)
#define IILBDKLEPMM_SET_CURRENTATTACKER_OFFSET UNITYSDK_OFFSET(0x17402B40)
#define IILBDKLEPMM_SET_CURRENTDEFENDER_OFFSET UNITYSDK_OFFSET(0x17402B60)
#define IILBDKLEPMM_SET_ISMAZETOBATTLETRANSITIONSHOWSTARTED_OFFSET UNITYSDK_OFFSET(0x17402B20)

inline static constexpr unsigned int IILBDKLEPMM_TypeDefinitionIndex = 62236;

	class IILBDKLEPMM : public ::System::Object
	{
	public:
		::KFELGAIGHAP* BJGABKCJAOE; // 0x10
		::System::Action* BCFPKMGLLLA; // 0x18
		::System::Action* MKCOENMILLE; // 0x20
		::System::Action* IGIBHLAJFPK; // 0x28
		::KFELGAIGHAP* MEJPPBPJHAM; // 0x30
		::KFELGAIGHAP* HKMCLGPNHCH; // 0x38
		::KFELGAIGHAP* ENLHHHHLDDM; // 0x40
		::RPG::GameCore::GameEntity* PPLPMFMJNCI; // 0x48
		::KFELGAIGHAP* AIOOHHBNFLK; // 0x50
		::RPG::GameCore::TransitionPerformConfig* BELOGLIJJOM; // 0x58
		::RPG::GameCore::GameEntity* _CurrentAttacker_k__BackingField; // 0x60
		::KFELGAIGHAP* JJMDDMPHMMM; // 0x68
		::KFELGAIGHAP* JDDLNENDKIC; // 0x70
		::KFELGAIGHAP* ECAHDDPJIAE; // 0x78
		::System::Action* AAEAOOJPEDH; // 0x80
		::KFELGAIGHAP* DIFGAPACOBF; // 0x88
		::RPG::GameCore::CustomMazeBattleTransitionConfig* KFCAGIFCAGN; // 0x90
		::KFELGAIGHAP* KPFPLNAGJBE; // 0x98
		::KFELGAIGHAP* BMODALJIEFF; // 0xA0
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0xA8
		::KFELGAIGHAP* PMEPGPKHNLE; // 0xB0
		::KFELGAIGHAP* FPAFGKJELKK; // 0xB8
		::RPG::GameCore::GameEntity* _CurrentDefender_k__BackingField; // 0xC0
		::System::UInt32 FPFEBOAOGBN; // 0xC8
		::System::Single AOFLNHMMAIC; // 0xCC
		::System::UInt32 DHBCHLIOOKO; // 0xD0
		::System::Boolean MDCPEKPIFEH; // 0xD4
		::System::Boolean _IsMazeToBattleTransitionShowStarted_k__BackingField; // 0xD5
		::System::Boolean PBNNFAIFELK; // 0xD6
		::System::Boolean JKHLCLEDDDB; // 0xD7
		::System::Single PBPBGJCGHND; // 0xD8
		::RPG::Client::TransitionMode BJDEPLPPMGL; // 0xDC
		static ::RPG::Client::RPGProfilerMarker** StaticGet_KJOGJIMKFAC()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IILBDKLEPMM")->GetStaticField(0x67D90);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_ECPOIFJJMAE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IILBDKLEPMM")->GetStaticField(0x67D98);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_OMIPBJBBHPC()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IILBDKLEPMM")->GetStaticField(0x67DA0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_INDOPNJHICP()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IILBDKLEPMM")->GetStaticField(0x67DA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IILBDKLEPMM_CCTOR_OFFSET))();
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IILBDKLEPMM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_DISPOSE_OFFSET))(this);
		}

		::System::Void GLEPIBPKBCA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + IILBDKLEPMM_GLEPIBPKBCA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void POLKKBNHFFH(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IILBDKLEPMM_POLKKBNHFFH_OFFSET))(this, a1);
		}

		::System::Void PPNGAECHIAE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + IILBDKLEPMM_PPNGAECHIAE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PNKJBLDJKBF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IILBDKLEPMM_PNKJBLDJKBF_OFFSET))(this, a1);
		}

		::System::Void GPCCAAAHACH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IILBDKLEPMM_GPCCAAAHACH_OFFSET))(this, a1);
		}

		::System::Void PDADKILDHFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_PDADKILDHFM_OFFSET))(this);
		}

		::System::Boolean EEIOIGOGCJG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_EEIOIGOGCJG_OFFSET))(this);
		}

		::System::Void FFMJBPDCACD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IILBDKLEPMM_FFMJBPDCACD_OFFSET))(this, a1);
		}

		::System::Void DNJLGLOCCPF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IILBDKLEPMM_DNJLGLOCCPF_OFFSET))(this, a1);
		}

		::System::Void EFANADMIDBM(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IILBDKLEPMM_EFANADMIDBM_OFFSET))(this, a1);
		}

		::System::Boolean BPJCPGABDBN(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IILBDKLEPMM_BPJCPGABDBN_OFFSET))(this, a1);
		}

		::System::Boolean FEJCLAAIODB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_FEJCLAAIODB_OFFSET))(this);
		}

		::System::Void MFFGIAPHGOC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IILBDKLEPMM_MFFGIAPHGOC_OFFSET))(this, a1);
		}

		::System::Boolean AACEAMPHLFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_AACEAMPHLFF_OFFSET))(this);
		}

		::System::Boolean EFFEPBAIHMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_EFFEPBAIHMN_OFFSET))(this);
		}

		::System::Void ECPDMJMMBPK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IILBDKLEPMM_ECPDMJMMBPK_OFFSET))(this, a1);
		}

		::System::Void LIMKLIIEENE(::RPG::GameCore::TransitionLoadingType a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType, ::System::Action*))((::PBYTE)hIl2Cpp + IILBDKLEPMM_LIMKLIIEENE_OFFSET))(this, a1, a2);
		}

		::System::Void LKLBIBAMIPC(::RPG::GameCore::TransitionLoadingType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType))((::PBYTE)hIl2Cpp + IILBDKLEPMM_LKLBIBAMIPC_OFFSET))(this, a1);
		}

		::System::Void CKKCEIDOKJK(::RPG::GameCore::TransitionLoadingType a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType, ::System::Action*))((::PBYTE)hIl2Cpp + IILBDKLEPMM_CKKCEIDOKJK_OFFSET))(this, a1, a2);
		}

		::System::Void GFPALCDENJK(::RPG::GameCore::TransitionLoadingType a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType, ::System::Action*))((::PBYTE)hIl2Cpp + IILBDKLEPMM_GFPALCDENJK_OFFSET))(this, a1, a2);
		}

		::System::Void NHCPNDGAGKK(::RPG::GameCore::TransitionLoadingType a1, ::KFELGAIGHAP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + IILBDKLEPMM_NHCPNDGAGKK_OFFSET))(this, a1, a2);
		}

		::System::Boolean HHHAEDFIFJN(::RPG::GameCore::TransitionLoadingType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType))((::PBYTE)hIl2Cpp + IILBDKLEPMM_HHHAEDFIFJN_OFFSET))(this, a1);
		}

		::System::Void BHEIANKOOPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_BHEIANKOOPN_OFFSET))(this);
		}

		::System::Void PGCBCKNNCGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_PGCBCKNNCGH_OFFSET))(this);
		}

		::System::Void HNOBBKNPIIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_HNOBBKNPIIK_OFFSET))(this);
		}

		::System::Void BKEIKNAJNKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_BKEIKNAJNKA_OFFSET))(this);
		}

		::System::Void NBCDFGJDDDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_NBCDFGJDDDF_OFFSET))(this);
		}

		::System::Void CKPLFODNPCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_CKPLFODNPCE_OFFSET))(this);
		}

		::System::Void ANOHODCAOJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_ANOHODCAOJE_OFFSET))(this);
		}

		::System::Void JHFMPLBJBMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_JHFMPLBJBMH_OFFSET))(this);
		}

		::System::Void EBFPJKBAFJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_EBFPJKBAFJM_OFFSET))(this);
		}

		::System::Void LNONBNCBDOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_LNONBNCBDOB_OFFSET))(this);
		}

		::System::Void AGMPLGKHIFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_AGMPLGKHIFG_OFFSET))(this);
		}

		::System::Boolean GNKBACDNLLL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_GNKBACDNLLL_OFFSET))(this);
		}

		::System::Void GBFAJLDBEAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_GBFAJLDBEAO_OFFSET))(this);
		}

		::System::Void DGODOKNHFNK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IILBDKLEPMM_DGODOKNHFNK_OFFSET))(this, a1);
		}

		::System::Void NBEJGFBJILP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IILBDKLEPMM_NBEJGFBJILP_OFFSET))(this, a1);
		}

		::RPG::GameCore::MazeBattleTransitionConfig* FPMNNGCHPOO()
		{
			return ((::RPG::GameCore::MazeBattleTransitionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_FPMNNGCHPOO_OFFSET))(this);
		}

		::RPG::GameCore::TransitionPerformConfig* OKONFDLDGPB()
		{
			return ((::RPG::GameCore::TransitionPerformConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_OKONFDLDGPB_OFFSET))(this);
		}

		::System::Boolean get_IsMazeToBattleTransitionShowStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_GET_ISMAZETOBATTLETRANSITIONSHOWSTARTED_OFFSET))(this);
		}

		::System::Void set_IsMazeToBattleTransitionShowStarted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IILBDKLEPMM_SET_ISMAZETOBATTLETRANSITIONSHOWSTARTED_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_CurrentAttacker()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_GET_CURRENTATTACKER_OFFSET))(this);
		}

		::System::Void set_CurrentAttacker(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IILBDKLEPMM_SET_CURRENTATTACKER_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_CurrentDefender()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_GET_CURRENTDEFENDER_OFFSET))(this);
		}

		::System::Void set_CurrentDefender(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IILBDKLEPMM_SET_CURRENTDEFENDER_OFFSET))(this, a1);
		}

		::System::UInt32 CNADBDCOIBB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_CNADBDCOIBB_OFFSET))(this);
		}

		::RPG::GameCore::CustomMazeBattleTransitionConfig* MFDIMFNLDOL()
		{
			return ((::RPG::GameCore::CustomMazeBattleTransitionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDKLEPMM_MFDIMFNLDOL_OFFSET))(this);
		}

	};
