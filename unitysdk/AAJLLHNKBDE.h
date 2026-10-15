#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/IGKFNIEJGLM.h"
class PEPGBNEBKLL;
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace RPG::GameCore { class TriggerEnergyBarEffectParam; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define AAJLLHNKBDE_AHMLHFNPFGJ_OFFSET UNITYSDK_OFFSET(0xB0C7E10)
#define AAJLLHNKBDE_AIMIMEOEEND_OFFSET UNITYSDK_OFFSET(0xB0C8850)
#define AAJLLHNKBDE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB0C8B10)
#define AAJLLHNKBDE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB0C8CD0)
#define AAJLLHNKBDE_CJDPHKGDJAA_OFFSET UNITYSDK_OFFSET(0xB0C85E0)
#define AAJLLHNKBDE_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C8E70)
#define AAJLLHNKBDE_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB0C7A50)
#define AAJLLHNKBDE_DMMECKLOBBB_OFFSET UNITYSDK_OFFSET(0xB0C8280)
#define AAJLLHNKBDE_DNDHADKHEJI_OFFSET UNITYSDK_OFFSET(0xB0C89D0)
#define AAJLLHNKBDE_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB0C7B50)
#define AAJLLHNKBDE_EMFNEAJDHHB_OFFSET UNITYSDK_OFFSET(0xB0C8910)
#define AAJLLHNKBDE_EPDEMCDGFEC_OFFSET UNITYSDK_OFFSET(0xB0C82E0)
#define AAJLLHNKBDE_FOIKLDNCDJP_OFFSET UNITYSDK_OFFSET(0xB0C7C40)
#define AAJLLHNKBDE_GGAHGOJJBIP_OFFSET UNITYSDK_OFFSET(0xB0C7F80)
#define AAJLLHNKBDE_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0xB0C7DD0)
#define AAJLLHNKBDE_IGPJHNAIBKO_OFFSET UNITYSDK_OFFSET(0xB0C8200)
#define AAJLLHNKBDE_IPOOKMALKIN_OFFSET UNITYSDK_OFFSET(0xB0C83C0)
#define AAJLLHNKBDE_JHEDEOFINFC_OFFSET UNITYSDK_OFFSET(0xB0C84B0)
#define AAJLLHNKBDE_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xB0C7D80)
#define AAJLLHNKBDE_JMBFOHAMFGI_OFFSET UNITYSDK_OFFSET(0xB0C8670)
#define AAJLLHNKBDE_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0xB0C8500)
#define AAJLLHNKBDE_MGOOKMDDCKM_OFFSET UNITYSDK_OFFSET(0xB0C8720)
#define AAJLLHNKBDE_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0xB0C7C90)
#define AAJLLHNKBDE_NEEFLPBIKMH_OFFSET UNITYSDK_OFFSET(0xB0C8790)
#define AAJLLHNKBDE_OJAFLHNHNNP_OFFSET UNITYSDK_OFFSET(0xB0C8330)
#define AAJLLHNKBDE_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xB0C7AB0)
#define AAJLLHNKBDE_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB0C7BC0)
#define AAJLLHNKBDE__ONBIND_OFFSET UNITYSDK_OFFSET(0xB0C77F0)

inline static constexpr unsigned int AAJLLHNKBDE_TypeDefinitionIndex = 71400;

	class AAJLLHNKBDE : public ::FMPCODLIOLG
	{
	public:
		::Il2CppArray<::PEPGBNEBKLL*>* MLJDAEMEBFJ; // 0x60
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::System::Int32 BFLNNOEKIGE; // 0x78
		::System::Int32 CIDELCPIDHH; // 0x7C
		::System::Boolean EPCCCGMNGLO; // 0x80
		::System::Byte _padding0[0x3];
		::System::Int32 EJNMGLJJEOO; // 0x84
		::RPG::GameCore::EnergyBarState LODNGAGNLCB; // 0x88
		::System::Int32 JBCBNGCPAKP; // 0x8C
		// static const ::System::String* PELJGAPBLLI; // 0x0
		// static const ::System::String* FOJHBNDBANG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJLLHNKBDE__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_ONRETURN_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void FOIKLDNCDJP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_FOIKLDNCDJP_OFFSET))(this, a1);
		}

		::System::Void GHIFMGPKFPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_GHIFMGPKFPF_OFFSET))(this);
		}

		::System::Void MIIHAJHPKAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_MIIHAJHPKAF_OFFSET))(this);
		}

		::RPG::GameCore::AvatarEnergyBarState* AHMLHFNPFGJ()
		{
			return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_AHMLHFNPFGJ_OFFSET))(this);
		}

		::System::Void GGAHGOJJBIP(::RPG::GameCore::AvatarEnergyBarState* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*, ::System::Boolean))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_GGAHGOJJBIP_OFFSET))(this, a1, a2);
		}

		::System::Void IGPJHNAIBKO(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_IGPJHNAIBKO_OFFSET))(this, a1);
		}

		::System::Void JHEDEOFINFC(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_JHEDEOFINFC_OFFSET))(this, a1);
		}

		::System::Void OJAFLHNHNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_OJAFLHNHNNP_OFFSET))(this, a1);
		}

		::System::Void LEHJAPMONNN(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_LEHJAPMONNN_OFFSET))(this, a1);
		}

		::System::Void CJDPHKGDJAA(::RPG::GameCore::TriggerEnergyBarEffectParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEnergyBarEffectParam*))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_CJDPHKGDJAA_OFFSET))(this, a1);
		}

		::System::Void JMBFOHAMFGI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_JMBFOHAMFGI_OFFSET))(this, a1);
		}

		::System::Void MGOOKMDDCKM(::RPG::GameCore::LevelCharacterRevive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_MGOOKMDDCKM_OFFSET))(this, a1);
		}

		::System::Void DMMECKLOBBB(::RPG::GameCore::EnergyBarState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_DMMECKLOBBB_OFFSET))(this, a1);
		}

		::System::Void EPDEMCDGFEC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_EPDEMCDGFEC_OFFSET))(this, a1);
		}

		::System::Void IPOOKMALKIN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_IPOOKMALKIN_OFFSET))(this, a1);
		}

		::System::Void NEEFLPBIKMH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_NEEFLPBIKMH_OFFSET))(this, a1);
		}

		::System::Void AIMIMEOEEND(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_AIMIMEOEEND_OFFSET))(this, a1);
		}

		::System::Void EMFNEAJDHHB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_EMFNEAJDHHB_OFFSET))(this, a1);
		}

		::System::Void DNDHADKHEJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_DNDHADKHEJI_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJLLHNKBDE_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
