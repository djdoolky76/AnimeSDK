#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/IGKFNIEJGLM.h"
class PIGKEFKJIHK;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TriggerEnergyBarEffectParam; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define BBPMAHFLHHH_AHMLHFNPFGJ_OFFSET UNITYSDK_OFFSET(0x15E9FF60)
#define BBPMAHFLHHH_AIMIMEOEEND_OFFSET UNITYSDK_OFFSET(0x15EA09D0)
#define BBPMAHFLHHH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15EA0BF0)
#define BBPMAHFLHHH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15EA0D70)
#define BBPMAHFLHHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x15EA0F10)
#define BBPMAHFLHHH_CJDPHKGDJAA_OFFSET UNITYSDK_OFFSET(0x15EA0720)
#define BBPMAHFLHHH_COIFADDJIGG_OFFSET UNITYSDK_OFFSET(0x15EA05E0)
#define BBPMAHFLHHH_CTOR_OFFSET UNITYSDK_OFFSET(0x15EA0ED0)
#define BBPMAHFLHHH_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15E9FA30)
#define BBPMAHFLHHH_DMMECKLOBBB_OFFSET UNITYSDK_OFFSET(0x15EA02C0)
#define BBPMAHFLHHH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15E9FC10)
#define BBPMAHFLHHH_EMFNEAJDHHB_OFFSET UNITYSDK_OFFSET(0x15EA0B30)
#define BBPMAHFLHHH_EPDEMCDGFEC_OFFSET UNITYSDK_OFFSET(0x15EA0400)
#define BBPMAHFLHHH_GGAHGOJJBIP_OFFSET UNITYSDK_OFFSET(0x15EA00D0)
#define BBPMAHFLHHH_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0x15E9FEF0)
#define BBPMAHFLHHH_IGPJHNAIBKO_OFFSET UNITYSDK_OFFSET(0x15EA0250)
#define BBPMAHFLHHH_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x15E9FE30)
#define BBPMAHFLHHH_JMBFOHAMFGI_OFFSET UNITYSDK_OFFSET(0x15EA07D0)
#define BBPMAHFLHHH_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0x15EA0640)
#define BBPMAHFLHHH_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0x15E9FCE0)
#define BBPMAHFLHHH_NEEFLPBIKMH_OFFSET UNITYSDK_OFFSET(0x15EA0910)
#define BBPMAHFLHHH_NMOOCOKOJAF_OFFSET UNITYSDK_OFFSET(0x15EA03A0)
#define BBPMAHFLHHH_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15E9FAA0)
#define BBPMAHFLHHH_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15E9FC70)
#define BBPMAHFLHHH_PFJDLLGFCOD_OFFSET UNITYSDK_OFFSET(0x15EA0520)
#define BBPMAHFLHHH__ONBIND_OFFSET UNITYSDK_OFFSET(0x15E9F660)

	class BBPMAHFLHHH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* HJDIPJHBBKB; // 0x60
		::UnityEngine::UI::Image* PPJDHFKIMNH; // 0x68
		::RPG::Client::LocalizedText* CDGCELHDPPA; // 0x70
		::UnityEngine::Animator* CFNGLMDMENE; // 0x78
		::UnityEngine::Transform* EHCEHIJMNJK; // 0x80
		::UnityEngine::Transform* DCHOMFHCNFK; // 0x88
		::UnityEngine::ParticleSystem* EGBLBGBNJHM; // 0x90
		::UnityEngine::Transform* EDEFOEEAPEC; // 0x98
		::UnityEngine::Transform* LKDABAJGPHE; // 0xA0
		::UnityEngine::ParticleSystem* CNIKPCNJHMA; // 0xA8
		::UnityEngine::Transform* KCMNLHPPBBO; // 0xB0
		::PIGKEFKJIHK* LCAFDOLIHIH; // 0xB8
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xC0
		::UnityEngine::UI::Image* EAKFBADKHII; // 0xC8
		::System::Int32 EJNMGLJJEOO; // 0xD0
		::System::Int32 BFLNNOEKIGE; // 0xD4
		::RPG::GameCore::EnergyBarState LODNGAGNLCB; // 0xD8
		::System::Int32 JBCBNGCPAKP; // 0xDC
		static ::System::Int32* StaticGet_FFEPLIHOFLA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "BBPMAHFLHHH")->GetStaticField(0x150F0);
		}

		// static const ::System::String* PELJGAPBLLI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBPMAHFLHHH_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPMAHFLHHH__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_ONRETURN_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void GHIFMGPKFPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_GHIFMGPKFPF_OFFSET))(this);
		}

		::System::Void MIIHAJHPKAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_MIIHAJHPKAF_OFFSET))(this);
		}

		::RPG::GameCore::AvatarEnergyBarState* AHMLHFNPFGJ()
		{
			return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_AHMLHFNPFGJ_OFFSET))(this);
		}

		::System::Void GGAHGOJJBIP(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_GGAHGOJJBIP_OFFSET))(this, a1);
		}

		::System::Void IGPJHNAIBKO(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_IGPJHNAIBKO_OFFSET))(this, a1);
		}

		::System::Void LEHJAPMONNN(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_LEHJAPMONNN_OFFSET))(this, a1);
		}

		::System::Void CJDPHKGDJAA(::RPG::GameCore::TriggerEnergyBarEffectParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEnergyBarEffectParam*))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_CJDPHKGDJAA_OFFSET))(this, a1);
		}

		::System::Void JMBFOHAMFGI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_JMBFOHAMFGI_OFFSET))(this, a1);
		}

		::System::Void NMOOCOKOJAF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_NMOOCOKOJAF_OFFSET))(this, a1);
		}

		::System::Void DMMECKLOBBB(::RPG::GameCore::EnergyBarState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_DMMECKLOBBB_OFFSET))(this, a1);
		}

		::System::Void EPDEMCDGFEC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_EPDEMCDGFEC_OFFSET))(this, a1);
		}

		::System::Void PFJDLLGFCOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_PFJDLLGFCOD_OFFSET))(this);
		}

		::System::Void COIFADDJIGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_COIFADDJIGG_OFFSET))(this);
		}

		::System::Void NEEFLPBIKMH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_NEEFLPBIKMH_OFFSET))(this, a1);
		}

		::System::Void AIMIMEOEEND(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_AIMIMEOEEND_OFFSET))(this, a1);
		}

		::System::Void EMFNEAJDHHB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_EMFNEAJDHHB_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
