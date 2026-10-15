#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/PKILELCBFKH_CounterType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/IGKFNIEJGLM.h"
class JHDMGHJHLGK;
class PIGKEFKJIHK;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define PKILELCBFKH_AGNIFNPMAAE_OFFSET UNITYSDK_OFFSET(0xC2B9830)
#define PKILELCBFKH_AHMLHFNPFGJ_OFFSET UNITYSDK_OFFSET(0xC2B9AE0)
#define PKILELCBFKH_CBIPAHDJPIL_OFFSET UNITYSDK_OFFSET(0xC2B94F0)
#define PKILELCBFKH_CCTOR_OFFSET UNITYSDK_OFFSET(0xC2B9CA0)
#define PKILELCBFKH_COGALDANJEC_OFFSET UNITYSDK_OFFSET(0xC2B9220)
#define PKILELCBFKH_COIFADDJIGG_OFFSET UNITYSDK_OFFSET(0xC2B8950)
#define PKILELCBFKH_CTOR_OFFSET UNITYSDK_OFFSET(0xC2B9C50)
#define PKILELCBFKH_DHFLECOHKFF_OFFSET UNITYSDK_OFFSET(0xC2B8EB0)
#define PKILELCBFKH_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC2B9480)
#define PKILELCBFKH_DMMECKLOBBB_OFFSET UNITYSDK_OFFSET(0xC2B85A0)
#define PKILELCBFKH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC2B90E0)
#define PKILELCBFKH_EPDEMCDGFEC_OFFSET UNITYSDK_OFFSET(0xC2B86C0)
#define PKILELCBFKH_FOIKLDNCDJP_OFFSET UNITYSDK_OFFSET(0xC2B84C0)
#define PKILELCBFKH_IGPJHNAIBKO_OFFSET UNITYSDK_OFFSET(0xC2B8530)
#define PKILELCBFKH_JHEDEOFINFC_OFFSET UNITYSDK_OFFSET(0xC2B8B90)
#define PKILELCBFKH_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xC2B9790)
#define PKILELCBFKH_KELDIFJFGGK_OFFSET UNITYSDK_OFFSET(0xC2B8200)
#define PKILELCBFKH_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0xC2B95D0)
#define PKILELCBFKH_MINPFCLBNCC_OFFSET UNITYSDK_OFFSET(0xC2B88D0)
#define PKILELCBFKH_NJJHNDPJJJG_OFFSET UNITYSDK_OFFSET(0xC2B93D0)
#define PKILELCBFKH_NMOOCOKOJAF_OFFSET UNITYSDK_OFFSET(0xC2B8660)
#define PKILELCBFKH_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC2B8FC0)
#define PKILELCBFKH_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC2B9170)
#define PKILELCBFKH_PFJDLLGFCOD_OFFSET UNITYSDK_OFFSET(0xC2B87D0)
#define PKILELCBFKH__ONBIND_OFFSET UNITYSDK_OFFSET(0xC2B8030)

inline static constexpr unsigned int PKILELCBFKH_TypeDefinitionIndex = 71613;

	class PKILELCBFKH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* EAKFBADKHII; // 0x60
		::UnityEngine::ParticleSystem* CNIKPCNJHMA; // 0x68
		::UnityEngine::ParticleSystem* EGBLBGBNJHM; // 0x70
		::UnityEngine::Transform* EHCEHIJMNJK; // 0x78
		::JHDMGHJHLGK* JMFMANFANAH; // 0x80
		::UnityEngine::UI::Image* AJFHFENNLCP; // 0x88
		::UnityEngine::UI::Image* BOCHOANELAE; // 0x90
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x98
		::UnityEngine::Animator* CFNGLMDMENE; // 0xA0
		::UnityEngine::UI::Image* PPJDHFKIMNH; // 0xA8
		::PIGKEFKJIHK* NEBIFLIKJOF; // 0xB0
		::RPG::Client::LocalizedText* EKGJOANLLMO; // 0xB8
		::System::Boolean IJDOJHBGGPD; // 0xC0
		::System::Boolean CDFHJPKKEEE; // 0xC1
		::System::Boolean EPCCCGMNGLO; // 0xC2
		::System::Byte _padding0[0x1];
		::System::Int32 JBCBNGCPAKP; // 0xC4
		::RPG::GameCore::EnergyBarState LODNGAGNLCB; // 0xC8
		::System::Int32 BFLNNOEKIGE; // 0xCC
		::PKILELCBFKH_CounterType IIAFMBKHOHL; // 0xD0
		::System::Int32 EJNMGLJJEOO; // 0xD4
		static ::System::Int32* StaticGet_FFEPLIHOFLA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PKILELCBFKH")->GetStaticField(0x15C20);
		}

		// static const ::System::String* PELJGAPBLLI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILELCBFKH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKILELCBFKH_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILELCBFKH__ONBIND_OFFSET))(this);
		}

		::System::Void KELDIFJFGGK(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + PKILELCBFKH_KELDIFJFGGK_OFFSET))(this, a1);
		}

		::System::Void DHFLECOHKFF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PKILELCBFKH_DHFLECOHKFF_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PKILELCBFKH_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILELCBFKH_ONRETURN_OFFSET))(this);
		}

		::System::Void COGALDANJEC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PKILELCBFKH_COGALDANJEC_OFFSET))(this, a1);
		}

		::System::Void NJJHNDPJJJG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKILELCBFKH_NJJHNDPJJJG_OFFSET))(this, a1);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PKILELCBFKH_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILELCBFKH_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKILELCBFKH_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void FOIKLDNCDJP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKILELCBFKH_FOIKLDNCDJP_OFFSET))(this, a1);
		}

		::System::Void AGNIFNPMAAE(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + PKILELCBFKH_AGNIFNPMAAE_OFFSET))(this, a1);
		}

		::System::Void MIIHAJHPKAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILELCBFKH_MIIHAJHPKAF_OFFSET))(this);
		}

		::RPG::GameCore::AvatarEnergyBarState* AHMLHFNPFGJ()
		{
			return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILELCBFKH_AHMLHFNPFGJ_OFFSET))(this);
		}

		::System::Void IGPJHNAIBKO(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + PKILELCBFKH_IGPJHNAIBKO_OFFSET))(this, a1);
		}

		::System::Void JHEDEOFINFC(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + PKILELCBFKH_JHEDEOFINFC_OFFSET))(this, a1);
		}

		::System::Void CBIPAHDJPIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILELCBFKH_CBIPAHDJPIL_OFFSET))(this);
		}

		::System::Void NMOOCOKOJAF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PKILELCBFKH_NMOOCOKOJAF_OFFSET))(this, a1);
		}

		::System::Void DMMECKLOBBB(::RPG::GameCore::EnergyBarState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + PKILELCBFKH_DMMECKLOBBB_OFFSET))(this, a1);
		}

		::System::Void EPDEMCDGFEC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKILELCBFKH_EPDEMCDGFEC_OFFSET))(this, a1);
		}

		::System::Void PFJDLLGFCOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILELCBFKH_PFJDLLGFCOD_OFFSET))(this);
		}

		::System::Void MINPFCLBNCC(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + PKILELCBFKH_MINPFCLBNCC_OFFSET))(this, a1);
		}

		::System::Void COIFADDJIGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKILELCBFKH_COIFADDJIGG_OFFSET))(this);
		}

	};
