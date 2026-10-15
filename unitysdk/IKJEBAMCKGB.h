#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CKMNJCKACJB;
class JPKECMHCCFH;
class KOAOAKKCCPK;
class LCJPDOOLBEC;
class LNCDCLGLNGE;
class ODCOIGDOFGH;
namespace RPG::Client { class AnimatorButton; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }

#define IKJEBAMCKGB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16482200)
#define IKJEBAMCKGB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16482320)
#define IKJEBAMCKGB_BCIMCCIDABD_OFFSET UNITYSDK_OFFSET(0x164817B0)
#define IKJEBAMCKGB_BDLPFMMILJK_OFFSET UNITYSDK_OFFSET(0x16481710)
#define IKJEBAMCKGB_BHMALFHBGBD_OFFSET UNITYSDK_OFFSET(0x16481230)
#define IKJEBAMCKGB_BPEPILKMJHE_OFFSET UNITYSDK_OFFSET(0x16481750)
#define IKJEBAMCKGB_CEMLFKJFMPC_OFFSET UNITYSDK_OFFSET(0x164815B0)
#define IKJEBAMCKGB_CJBHFMNJCEK_OFFSET UNITYSDK_OFFSET(0x16482080)
#define IKJEBAMCKGB_CLACADDAFMH_OFFSET UNITYSDK_OFFSET(0x16481660)
#define IKJEBAMCKGB_CTOR_OFFSET UNITYSDK_OFFSET(0x16482410)
#define IKJEBAMCKGB_DCJCMCCFKEB_OFFSET UNITYSDK_OFFSET(0x16482140)
#define IKJEBAMCKGB_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x16480E20)
#define IKJEBAMCKGB_DHLIAOJAKDO_OFFSET UNITYSDK_OFFSET(0x16482040)
#define IKJEBAMCKGB_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x164813C0)
#define IKJEBAMCKGB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x16480FF0)
#define IKJEBAMCKGB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x164810D0)
#define IKJEBAMCKGB_EMGHAJAHCOE_OFFSET UNITYSDK_OFFSET(0x164818A0)
#define IKJEBAMCKGB_ENPCMALIEIE_OFFSET UNITYSDK_OFFSET(0x16481C60)
#define IKJEBAMCKGB_FDKGLAHIOLB_OFFSET UNITYSDK_OFFSET(0x16481970)
#define IKJEBAMCKGB_HAEPMJAFDEO_OFFSET UNITYSDK_OFFSET(0x16481510)
#define IKJEBAMCKGB_HJCLBHDEPKG_OFFSET UNITYSDK_OFFSET(0x16481A20)
#define IKJEBAMCKGB_IGKDFAGCKOD_OFFSET UNITYSDK_OFFSET(0x16481ED0)
#define IKJEBAMCKGB_IGNKKEBEGPJ_OFFSET UNITYSDK_OFFSET(0x16481460)
#define IKJEBAMCKGB_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x16481410)
#define IKJEBAMCKGB_LDOPOAIHGNF_OFFSET UNITYSDK_OFFSET(0x16481A80)
#define IKJEBAMCKGB_LELILHEOLDP_OFFSET UNITYSDK_OFFSET(0x16481DE0)
#define IKJEBAMCKGB_MNENGFILHMO_OFFSET UNITYSDK_OFFSET(0x16481D90)
#define IKJEBAMCKGB_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x16480E90)
#define IKJEBAMCKGB_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x164812A0)
#define IKJEBAMCKGB_PFKDDJCDBGB_OFFSET UNITYSDK_OFFSET(0x16481E80)
#define IKJEBAMCKGB_PMCLCDGCNAM_OFFSET UNITYSDK_OFFSET(0x16481600)
#define IKJEBAMCKGB__ONBIND_OFFSET UNITYSDK_OFFSET(0x16480D80)
#define IKJEBAMCKGB__ONTICK_OFFSET UNITYSDK_OFFSET(0x16481910)
#define IKJEBAMCKGB___SETUPVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x16482490)

inline static constexpr unsigned int IKJEBAMCKGB_TypeDefinitionIndex = 72145;

	class IKJEBAMCKGB : public ::FMPCODLIOLG
	{
	public:
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x60
		::ODCOIGDOFGH* FIMHKHJMCIB; // 0x68
		::LNCDCLGLNGE* HPOMCNPLMIC; // 0x70
		::JPKECMHCCFH* BMOCBDAAAAG; // 0x78
		::RPG::Client::AnimatorButton* NIDPJAFEHNM; // 0x80
		::System::Collections::Generic::Queue_1<::CKMNJCKACJB*>* AJLOGPEKGHK; // 0x88
		::System::Action* IDDFLLPLNDG; // 0x90
		::LCJPDOOLBEC* MIGLENPAECA; // 0x98
		::System::Boolean FMNEEONAMNO; // 0xA0
		::System::Byte _padding0[0x3];
		::System::Int32 IKIIIHNECLG; // 0xA4
		::System::Single LLDJDOPCDFM; // 0xA8
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object COLGIBCKANG; // 0x0
		// static const ::System::String* PPKMJCFGHOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_NJBDJBHEBAN_OFFSET))(this, a1, a2);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_KGJAMKFPOAB_OFFSET))(this);
		}

		::UnityEngine::GameObject* IGNKKEBEGPJ()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_IGNKKEBEGPJ_OFFSET))(this);
		}

		::System::Void CEMLFKJFMPC(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_CEMLFKJFMPC_OFFSET))(this, a1);
		}

		::System::Boolean PMCLCDGCNAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_PMCLCDGCNAM_OFFSET))(this);
		}

		::System::Boolean BDLPFMMILJK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_BDLPFMMILJK_OFFSET))(this);
		}

		::System::Void BPEPILKMJHE(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_BPEPILKMJHE_OFFSET))(this, a1, a2);
		}

		::System::Void BCIMCCIDABD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_BCIMCCIDABD_OFFSET))(this, a1);
		}

		::System::Boolean HAEPMJAFDEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_HAEPMJAFDEO_OFFSET))(this);
		}

		::System::Boolean EMGHAJAHCOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_EMGHAJAHCOE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKJEBAMCKGB__ONTICK_OFFSET))(this, a1);
		}

		::System::Void HJCLBHDEPKG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_HJCLBHDEPKG_OFFSET))(this, a1);
		}

		::System::Void LDOPOAIHGNF(::CKMNJCKACJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKMNJCKACJB*))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_LDOPOAIHGNF_OFFSET))(this, a1);
		}

		::System::Void PFKDDJCDBGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_PFKDDJCDBGB_OFFSET))(this);
		}

		::System::Void BHMALFHBGBD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_BHMALFHBGBD_OFFSET))(this, a1);
		}

		::System::Void IGKDFAGCKOD(::CKMNJCKACJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKMNJCKACJB*))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_IGKDFAGCKOD_OFFSET))(this, a1);
		}

		::System::Void MNENGFILHMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_MNENGFILHMO_OFFSET))(this);
		}

		::System::Void DHLIAOJAKDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_DHLIAOJAKDO_OFFSET))(this);
		}

		::System::Void ENPCMALIEIE(::CKMNJCKACJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKMNJCKACJB*))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_ENPCMALIEIE_OFFSET))(this, a1);
		}

		::System::Void FDKGLAHIOLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_FDKGLAHIOLB_OFFSET))(this);
		}

		::System::Void LELILHEOLDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_LELILHEOLDP_OFFSET))(this);
		}

		::System::Void CLACADDAFMH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_CLACADDAFMH_OFFSET))(this, a1);
		}

		::System::Void CJBHFMNJCEK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_CJBHFMNJCEK_OFFSET))(this, a1);
		}

		::System::Void DCJCMCCFKEB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_DCJCMCCFKEB_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __SetupView_b__9_0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + IKJEBAMCKGB___SETUPVIEW_B__9_0_OFFSET))(this, a1);
		}

	};
