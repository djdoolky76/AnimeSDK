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

#define JDEKPPKFFIB_AGNIFNPMAAE_OFFSET UNITYSDK_OFFSET(0xB906160)
#define JDEKPPKFFIB_AHMLHFNPFGJ_OFFSET UNITYSDK_OFFSET(0xB906480)
#define JDEKPPKFFIB_AIMIMEOEEND_OFFSET UNITYSDK_OFFSET(0xB907150)
#define JDEKPPKFFIB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB9074B0)
#define JDEKPPKFFIB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB907670)
#define JDEKPPKFFIB_CBIPAHDJPIL_OFFSET UNITYSDK_OFFSET(0xB905EC0)
#define JDEKPPKFFIB_CCTOR_OFFSET UNITYSDK_OFFSET(0xB907850)
#define JDEKPPKFFIB_CJDPHKGDJAA_OFFSET UNITYSDK_OFFSET(0xB906EA0)
#define JDEKPPKFFIB_CTOR_OFFSET UNITYSDK_OFFSET(0xB907810)
#define JDEKPPKFFIB_DMMECKLOBBB_OFFSET UNITYSDK_OFFSET(0xB906800)
#define JDEKPPKFFIB_DNDHADKHEJI_OFFSET UNITYSDK_OFFSET(0xB907370)
#define JDEKPPKFFIB_EMFNEAJDHHB_OFFSET UNITYSDK_OFFSET(0xB9072B0)
#define JDEKPPKFFIB_EPDEMCDGFEC_OFFSET UNITYSDK_OFFSET(0xB9068F0)
#define JDEKPPKFFIB_FOIKLDNCDJP_OFFSET UNITYSDK_OFFSET(0xB905E60)
#define JDEKPPKFFIB_GGAHGOJJBIP_OFFSET UNITYSDK_OFFSET(0xB9065F0)
#define JDEKPPKFFIB_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0xB906410)
#define JDEKPPKFFIB_IGPJHNAIBKO_OFFSET UNITYSDK_OFFSET(0xB906770)
#define JDEKPPKFFIB_IPOOKMALKIN_OFFSET UNITYSDK_OFFSET(0xB906B00)
#define JDEKPPKFFIB_JHEDEOFINFC_OFFSET UNITYSDK_OFFSET(0xB906C20)
#define JDEKPPKFFIB_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xB9060A0)
#define JDEKPPKFFIB_JMBFOHAMFGI_OFFSET UNITYSDK_OFFSET(0xB906F50)
#define JDEKPPKFFIB_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0xB906DC0)
#define JDEKPPKFFIB_MGOOKMDDCKM_OFFSET UNITYSDK_OFFSET(0xB907020)
#define JDEKPPKFFIB_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0xB905FA0)
#define JDEKPPKFFIB_NEEFLPBIKMH_OFFSET UNITYSDK_OFFSET(0xB907090)
#define JDEKPPKFFIB_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xB905CA0)
#define JDEKPPKFFIB_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB905DD0)
#define JDEKPPKFFIB_PFJDLLGFCOD_OFFSET UNITYSDK_OFFSET(0xB906A00)
#define JDEKPPKFFIB__ONBIND_OFFSET UNITYSDK_OFFSET(0xB9055F0)
#define JDEKPPKFFIB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xB905C30)
#define JDEKPPKFFIB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB905D40)
#define JDEKPPKFFIB___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0xB9078C0)

inline static constexpr unsigned int JDEKPPKFFIB_TypeDefinitionIndex = 73384;

	class JDEKPPKFFIB : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* EAKFBADKHII; // 0x60
		::JHDMGHJHLGK* JMFMANFANAH; // 0x68
		::UnityEngine::ParticleSystem* CNIKPCNJHMA; // 0x70
		::UnityEngine::Animator* CFNGLMDMENE; // 0x78
		::RPG::Client::LocalizedText* AACBDGMIDEN; // 0x80
		::UnityEngine::UI::Image* PPJDHFKIMNH; // 0x88
		::UnityEngine::Transform* EHCEHIJMNJK; // 0x90
		::RPG::Client::LocalizedText* FLEDFEBIHEN; // 0x98
		::UnityEngine::UI::Image* AJFHFENNLCP; // 0xA0
		::UnityEngine::UI::Image* BOCHOANELAE; // 0xA8
		::UnityEngine::ParticleSystem* EGBLBGBNJHM; // 0xB0
		::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0xB8
		::UnityEngine::Transform* ECLMJGKIMJO; // 0xC0
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xC8
		::System::Int32 BFLNNOEKIGE; // 0xD0
		::System::Int32 CIDELCPIDHH; // 0xD4
		::System::Int32 EJNMGLJJEOO; // 0xD8
		::JDEKPPKFFIB_CounterType IIAFMBKHOHL; // 0xDC
		::System::Boolean EPCCCGMNGLO; // 0xE0
		::System::Boolean CDFHJPKKEEE; // 0xE1
		::System::Byte _padding0[0x2];
		::System::Int32 JBCBNGCPAKP; // 0xE4
		::RPG::GameCore::EnergyBarState LODNGAGNLCB; // 0xE8
		static ::System::Int32* StaticGet_FFEPLIHOFLA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDEKPPKFFIB")->GetStaticField(0x14910);
		}

		static ::System::Int32* StaticGet_BNFJMDBAFND()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDEKPPKFFIB")->GetStaticField(0x14914);
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + JDEKPPKFFIB__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEKPPKFFIB_ONRETURN_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEKPPKFFIB__SETUPVIEW_OFFSET))(this);
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
