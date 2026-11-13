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

#define BBPMAHFLHHH_AHMLHFNPFGJ_OFFSET UNITYSDK_OFFSET(0x19D6DD30)
#define BBPMAHFLHHH_AIMIMEOEEND_OFFSET UNITYSDK_OFFSET(0x19D6E790)
#define BBPMAHFLHHH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x19D6E9B0)
#define BBPMAHFLHHH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x19D6EB30)
#define BBPMAHFLHHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x19D6ECD0)
#define BBPMAHFLHHH_CJDPHKGDJAA_OFFSET UNITYSDK_OFFSET(0x19D6E4E0)
#define BBPMAHFLHHH_COIFADDJIGG_OFFSET UNITYSDK_OFFSET(0x19D6E3A0)
#define BBPMAHFLHHH_CTOR_OFFSET UNITYSDK_OFFSET(0x19D6EC90)
#define BBPMAHFLHHH_DMMECKLOBBB_OFFSET UNITYSDK_OFFSET(0x19D6E090)
#define BBPMAHFLHHH_EMFNEAJDHHB_OFFSET UNITYSDK_OFFSET(0x19D6E8F0)
#define BBPMAHFLHHH_EPDEMCDGFEC_OFFSET UNITYSDK_OFFSET(0x19D6E1D0)
#define BBPMAHFLHHH_GGAHGOJJBIP_OFFSET UNITYSDK_OFFSET(0x19D6DEA0)
#define BBPMAHFLHHH_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0x19D6DCC0)
#define BBPMAHFLHHH_IGPJHNAIBKO_OFFSET UNITYSDK_OFFSET(0x19D6E020)
#define BBPMAHFLHHH_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x19D6DC00)
#define BBPMAHFLHHH_JMBFOHAMFGI_OFFSET UNITYSDK_OFFSET(0x19D6E590)
#define BBPMAHFLHHH_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0x19D6E400)
#define BBPMAHFLHHH_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0x19D6DAB0)
#define BBPMAHFLHHH_NEEFLPBIKMH_OFFSET UNITYSDK_OFFSET(0x19D6E6D0)
#define BBPMAHFLHHH_NMOOCOKOJAF_OFFSET UNITYSDK_OFFSET(0x19D6E170)
#define BBPMAHFLHHH_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x19D6D880)
#define BBPMAHFLHHH_ONRETURN_OFFSET UNITYSDK_OFFSET(0x19D6DA40)
#define BBPMAHFLHHH_PFJDLLGFCOD_OFFSET UNITYSDK_OFFSET(0x19D6E2E0)
#define BBPMAHFLHHH__ONBIND_OFFSET UNITYSDK_OFFSET(0x19D6D220)
#define BBPMAHFLHHH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x19D6D820)
#define BBPMAHFLHHH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19D6D9E0)

inline static constexpr unsigned int BBPMAHFLHHH_TypeDefinitionIndex = 73628;

	class BBPMAHFLHHH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* EAKFBADKHII; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::UnityEngine::ParticleSystem* CNIKPCNJHMA; // 0x70
		::UnityEngine::Transform* DCHOMFHCNFK; // 0x78
		::RPG::Client::LocalizedText* CDGCELHDPPA; // 0x80
		::UnityEngine::Transform* EDEFOEEAPEC; // 0x88
		::UnityEngine::ParticleSystem* EGBLBGBNJHM; // 0x90
		::UnityEngine::UI::Image* PPJDHFKIMNH; // 0x98
		::UnityEngine::Transform* LKDABAJGPHE; // 0xA0
		::PIGKEFKJIHK* LCAFDOLIHIH; // 0xA8
		::UnityEngine::Transform* KCMNLHPPBBO; // 0xB0
		::UnityEngine::Transform* HJDIPJHBBKB; // 0xB8
		::UnityEngine::Transform* EHCEHIJMNJK; // 0xC0
		::UnityEngine::Animator* CFNGLMDMENE; // 0xC8
		::System::Int32 JBCBNGCPAKP; // 0xD0
		::RPG::GameCore::EnergyBarState LODNGAGNLCB; // 0xD4
		::System::Int32 BFLNNOEKIGE; // 0xD8
		::System::Int32 EJNMGLJJEOO; // 0xDC
		static ::System::Int32* StaticGet_FFEPLIHOFLA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "BBPMAHFLHHH")->GetStaticField(0x11EB0);
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BBPMAHFLHHH__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPMAHFLHHH_ONRETURN_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPMAHFLHHH__SETUPVIEW_OFFSET))(this);
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
