#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/JDEKPPKFFIB_CounterType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/IGKFNIEJGLM.h"
class JHDMGHJHLGK;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace RPG::GameCore { class TriggerEnergyBarEffectParam; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define JDEKPPKFFIB_AGNIFNPMAAE_OFFSET UNITYSDK_OFFSET(0x165B0D10)
#define JDEKPPKFFIB_AHMLHFNPFGJ_OFFSET UNITYSDK_OFFSET(0x165B1020)
#define JDEKPPKFFIB_AIMIMEOEEND_OFFSET UNITYSDK_OFFSET(0x165B1CF0)
#define JDEKPPKFFIB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x165B2050)
#define JDEKPPKFFIB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x165B2210)
#define JDEKPPKFFIB_CBIPAHDJPIL_OFFSET UNITYSDK_OFFSET(0x165B0A70)
#define JDEKPPKFFIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x165B23F0)
#define JDEKPPKFFIB_CJDPHKGDJAA_OFFSET UNITYSDK_OFFSET(0x165B1A40)
#define JDEKPPKFFIB_CTOR_OFFSET UNITYSDK_OFFSET(0x165B23B0)
#define JDEKPPKFFIB_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x165B07F0)
#define JDEKPPKFFIB_DMMECKLOBBB_OFFSET UNITYSDK_OFFSET(0x165B13A0)
#define JDEKPPKFFIB_DNDHADKHEJI_OFFSET UNITYSDK_OFFSET(0x165B1F10)
#define JDEKPPKFFIB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x165B08F0)
#define JDEKPPKFFIB_EMFNEAJDHHB_OFFSET UNITYSDK_OFFSET(0x165B1E50)
#define JDEKPPKFFIB_EPDEMCDGFEC_OFFSET UNITYSDK_OFFSET(0x165B14A0)
#define JDEKPPKFFIB_FOIKLDNCDJP_OFFSET UNITYSDK_OFFSET(0x165B0A10)
#define JDEKPPKFFIB_GGAHGOJJBIP_OFFSET UNITYSDK_OFFSET(0x165B1190)
#define JDEKPPKFFIB_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0x165B0FB0)
#define JDEKPPKFFIB_IGPJHNAIBKO_OFFSET UNITYSDK_OFFSET(0x165B1310)
#define JDEKPPKFFIB_IPOOKMALKIN_OFFSET UNITYSDK_OFFSET(0x165B16A0)
#define JDEKPPKFFIB_JHEDEOFINFC_OFFSET UNITYSDK_OFFSET(0x165B17C0)
#define JDEKPPKFFIB_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x165B0C50)
#define JDEKPPKFFIB_JMBFOHAMFGI_OFFSET UNITYSDK_OFFSET(0x165B1AF0)
#define JDEKPPKFFIB_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0x165B1960)
#define JDEKPPKFFIB_MGOOKMDDCKM_OFFSET UNITYSDK_OFFSET(0x165B1BC0)
#define JDEKPPKFFIB_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0x165B0B50)
#define JDEKPPKFFIB_NEEFLPBIKMH_OFFSET UNITYSDK_OFFSET(0x165B1C30)
#define JDEKPPKFFIB_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x165B0850)
#define JDEKPPKFFIB_ONRETURN_OFFSET UNITYSDK_OFFSET(0x165B0980)
#define JDEKPPKFFIB_PFJDLLGFCOD_OFFSET UNITYSDK_OFFSET(0x165B15B0)
#define JDEKPPKFFIB__ONBIND_OFFSET UNITYSDK_OFFSET(0x165B04F0)
#define JDEKPPKFFIB___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x165B2460)

inline static constexpr unsigned int JDEKPPKFFIB_TypeDefinitionIndex = 71401;

	class JDEKPPKFFIB : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* PPJDHFKIMNH; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::UnityEngine::UI::Image* BOCHOANELAE; // 0x70
		::UnityEngine::UI::Image* EAKFBADKHII; // 0x78
		::UnityEngine::Transform* EHCEHIJMNJK; // 0x80
		::UnityEngine::ParticleSystem* CNIKPCNJHMA; // 0x88
		::RPG::Client::LocalizedText* AACBDGMIDEN; // 0x90
		::UnityEngine::Transform* ECLMJGKIMJO; // 0x98
		::RPG::Client::LocalizedText* FLEDFEBIHEN; // 0xA0
		::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0xA8
		::UnityEngine::Animator* CFNGLMDMENE; // 0xB0
		::JHDMGHJHLGK* JMFMANFANAH; // 0xB8
		::UnityEngine::ParticleSystem* EGBLBGBNJHM; // 0xC0
		::UnityEngine::UI::Image* AJFHFENNLCP; // 0xC8
		::RPG::GameCore::EnergyBarState LODNGAGNLCB; // 0xD0
		::JDEKPPKFFIB_CounterType IIAFMBKHOHL; // 0xD4
		::System::Int32 BFLNNOEKIGE; // 0xD8
		::System::Int32 JBCBNGCPAKP; // 0xDC
		::System::Int32 CIDELCPIDHH; // 0xE0
		::System::Boolean EPCCCGMNGLO; // 0xE4
		::System::Boolean CDFHJPKKEEE; // 0xE5
		::System::Byte _padding0[0x2];
		::System::Int32 EJNMGLJJEOO; // 0xE8
		static ::System::Int32* StaticGet_FFEPLIHOFLA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDEKPPKFFIB")->GetStaticField(0x15400);
		}

		static ::System::Int32* StaticGet_BNFJMDBAFND()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDEKPPKFFIB")->GetStaticField(0x15404);
		}

		// static const ::System::String* PELJGAPBLLI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDEKPPKFFIB_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEKPPKFFIB__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_ONRETURN_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void FOIKLDNCDJP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_FOIKLDNCDJP_OFFSET))(this, a1);
		}

		::System::Void AGNIFNPMAAE(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_AGNIFNPMAAE_OFFSET))(this, a1);
		}

		::System::Void GHIFMGPKFPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_GHIFMGPKFPF_OFFSET))(this);
		}

		::System::Void MIIHAJHPKAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_MIIHAJHPKAF_OFFSET))(this);
		}

		::RPG::GameCore::AvatarEnergyBarState* AHMLHFNPFGJ()
		{
			return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_AHMLHFNPFGJ_OFFSET))(this);
		}

		::System::Void GGAHGOJJBIP(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_GGAHGOJJBIP_OFFSET))(this, a1);
		}

		::System::Void IGPJHNAIBKO(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_IGPJHNAIBKO_OFFSET))(this, a1);
		}

		::System::Void JHEDEOFINFC(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_JHEDEOFINFC_OFFSET))(this, a1);
		}

		::System::Void CBIPAHDJPIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_CBIPAHDJPIL_OFFSET))(this);
		}

		::System::Void LEHJAPMONNN(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_LEHJAPMONNN_OFFSET))(this, a1);
		}

		::System::Void CJDPHKGDJAA(::RPG::GameCore::TriggerEnergyBarEffectParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEnergyBarEffectParam*))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_CJDPHKGDJAA_OFFSET))(this, a1);
		}

		::System::Void JMBFOHAMFGI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_JMBFOHAMFGI_OFFSET))(this, a1);
		}

		::System::Void MGOOKMDDCKM(::RPG::GameCore::LevelCharacterRevive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_MGOOKMDDCKM_OFFSET))(this, a1);
		}

		::System::Void DMMECKLOBBB(::RPG::GameCore::EnergyBarState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_DMMECKLOBBB_OFFSET))(this, a1);
		}

		::System::Void EPDEMCDGFEC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_EPDEMCDGFEC_OFFSET))(this, a1);
		}

		::System::Void PFJDLLGFCOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_PFJDLLGFCOD_OFFSET))(this);
		}

		::System::Void IPOOKMALKIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_IPOOKMALKIN_OFFSET))(this);
		}

		::System::Void NEEFLPBIKMH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_NEEFLPBIKMH_OFFSET))(this, a1);
		}

		::System::Void AIMIMEOEEND(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_AIMIMEOEEND_OFFSET))(this, a1);
		}

		::System::Void EMFNEAJDHHB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_EMFNEAJDHHB_OFFSET))(this, a1);
		}

		::System::Void DNDHADKHEJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_DNDHADKHEJI_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __OnBind_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEKPPKFFIB___ONBIND_B__0_0_OFFSET))(this);
		}

	};
