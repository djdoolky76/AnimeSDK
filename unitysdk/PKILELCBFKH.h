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

#define PKILELCBFKH_AGNIFNPMAAE_OFFSET UNITYSDK_OFFSET(0xC2C1240)
#define PKILELCBFKH_AHMLHFNPFGJ_OFFSET UNITYSDK_OFFSET(0xC2C14F0)
#define PKILELCBFKH_CBIPAHDJPIL_OFFSET UNITYSDK_OFFSET(0xC2C0EF0)
#define PKILELCBFKH_CCTOR_OFFSET UNITYSDK_OFFSET(0xC2C16A0)
#define PKILELCBFKH_COGALDANJEC_OFFSET UNITYSDK_OFFSET(0xC2C0C00)
#define PKILELCBFKH_COIFADDJIGG_OFFSET UNITYSDK_OFFSET(0xC2C0330)
#define PKILELCBFKH_CTOR_OFFSET UNITYSDK_OFFSET(0xC2C1660)
#define PKILELCBFKH_DHFLECOHKFF_OFFSET UNITYSDK_OFFSET(0xC2C08A0)
#define PKILELCBFKH_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC2C0E80)
#define PKILELCBFKH_DMMECKLOBBB_OFFSET UNITYSDK_OFFSET(0xC2BFF80)
#define PKILELCBFKH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC2C0AC0)
#define PKILELCBFKH_EPDEMCDGFEC_OFFSET UNITYSDK_OFFSET(0xC2C00A0)
#define PKILELCBFKH_FOIKLDNCDJP_OFFSET UNITYSDK_OFFSET(0xC2BFE90)
#define PKILELCBFKH_IGPJHNAIBKO_OFFSET UNITYSDK_OFFSET(0xC2BFF00)
#define PKILELCBFKH_JHEDEOFINFC_OFFSET UNITYSDK_OFFSET(0xC2C0580)
#define PKILELCBFKH_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xC2C11A0)
#define PKILELCBFKH_KELDIFJFGGK_OFFSET UNITYSDK_OFFSET(0xC2BFBC0)
#define PKILELCBFKH_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0xC2C0FD0)
#define PKILELCBFKH_MINPFCLBNCC_OFFSET UNITYSDK_OFFSET(0xC2C02B0)
#define PKILELCBFKH_NJJHNDPJJJG_OFFSET UNITYSDK_OFFSET(0xC2C0DC0)
#define PKILELCBFKH_NMOOCOKOJAF_OFFSET UNITYSDK_OFFSET(0xC2C0040)
#define PKILELCBFKH_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC2C09B0)
#define PKILELCBFKH_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC2C0B50)
#define PKILELCBFKH_PFJDLLGFCOD_OFFSET UNITYSDK_OFFSET(0xC2C01C0)
#define PKILELCBFKH__ONBIND_OFFSET UNITYSDK_OFFSET(0xC2BF9F0)

inline static constexpr unsigned int PKILELCBFKH_TypeDefinitionIndex = 71614;

	class PKILELCBFKH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* PPJDHFKIMNH; // 0x60
		::UnityEngine::ParticleSystem* CNIKPCNJHMA; // 0x68
		::UnityEngine::UI::Image* BOCHOANELAE; // 0x70
		::UnityEngine::ParticleSystem* EGBLBGBNJHM; // 0x78
		::RPG::Client::LocalizedText* EKGJOANLLMO; // 0x80
		::UnityEngine::UI::Image* AJFHFENNLCP; // 0x88
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x90
		::UnityEngine::Animator* CFNGLMDMENE; // 0x98
		::UnityEngine::UI::Image* EAKFBADKHII; // 0xA0
		::PIGKEFKJIHK* NEBIFLIKJOF; // 0xA8
		::UnityEngine::Transform* EHCEHIJMNJK; // 0xB0
		::JHDMGHJHLGK* JMFMANFANAH; // 0xB8
		::System::Int32 EJNMGLJJEOO; // 0xC0
		::System::Int32 BFLNNOEKIGE; // 0xC4
		::RPG::GameCore::EnergyBarState LODNGAGNLCB; // 0xC8
		::PKILELCBFKH_CounterType IIAFMBKHOHL; // 0xCC
		::System::Int32 JBCBNGCPAKP; // 0xD0
		::System::Boolean IJDOJHBGGPD; // 0xD4
		::System::Boolean EPCCCGMNGLO; // 0xD5
		::System::Boolean CDFHJPKKEEE; // 0xD6
		static ::System::Int32* StaticGet_FFEPLIHOFLA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PKILELCBFKH")->GetStaticField(0x15B90);
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
