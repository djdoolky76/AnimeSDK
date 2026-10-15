#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/SummonerEnergyBarType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AFICLLPMPJO;
class BFOFICAMFGM;
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AICCLEAHNLO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xEB9AF90)
#define AICCLEAHNLO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xEB9B0F0)
#define AICCLEAHNLO_BLMMLCJILNP_OFFSET UNITYSDK_OFFSET(0xEB9A590)
#define AICCLEAHNLO_CTOR_OFFSET UNITYSDK_OFFSET(0xEB9B220)
#define AICCLEAHNLO_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xEB99B20)
#define AICCLEAHNLO_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xEB99AD0)
#define AICCLEAHNLO_EMFNEAJDHHB_OFFSET UNITYSDK_OFFSET(0xEB9AD90)
#define AICCLEAHNLO_FKGDHHDONAD_OFFSET UNITYSDK_OFFSET(0xEB9ACD0)
#define AICCLEAHNLO_FNMAFAJCMLC_OFFSET UNITYSDK_OFFSET(0xEB99F80)
#define AICCLEAHNLO_GFJGLGFCOFK_OFFSET UNITYSDK_OFFSET(0xEB9A3A0)
#define AICCLEAHNLO_GGAHGOJJBIP_OFFSET UNITYSDK_OFFSET(0xEB99D40)
#define AICCLEAHNLO_GNNLGCPMHBM_OFFSET UNITYSDK_OFFSET(0xEB9AEA0)
#define AICCLEAHNLO_HMNKNBKDEFF_OFFSET UNITYSDK_OFFSET(0xEB9A9B0)
#define AICCLEAHNLO_JAOHFKNGEAG_OFFSET UNITYSDK_OFFSET(0xEB9AB40)
#define AICCLEAHNLO_JMBFOHAMFGI_OFFSET UNITYSDK_OFFSET(0xEB99F00)
#define AICCLEAHNLO_KMMLJBOPBPF_OFFSET UNITYSDK_OFFSET(0xEB9A4E0)
#define AICCLEAHNLO_LCKHFGECEEF_OFFSET UNITYSDK_OFFSET(0xEB9A780)
#define AICCLEAHNLO_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0xEB99E20)
#define AICCLEAHNLO_LFLFCBJAIFL_OFFSET UNITYSDK_OFFSET(0xEB99940)
#define AICCLEAHNLO_LKNOGJNAGNJ_OFFSET UNITYSDK_OFFSET(0xEB9A2D0)
#define AICCLEAHNLO_OBFAPGCMDHB_OFFSET UNITYSDK_OFFSET(0xEB9A820)
#define AICCLEAHNLO_OGGILOGLGPJ_OFFSET UNITYSDK_OFFSET(0xEB9A250)
#define AICCLEAHNLO_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xEB99A40)
#define AICCLEAHNLO_ONRETURN_OFFSET UNITYSDK_OFFSET(0xEB99800)
#define AICCLEAHNLO_PFJDLLGFCOD_OFFSET UNITYSDK_OFFSET(0xEB9A010)
#define AICCLEAHNLO__ONBIND_OFFSET UNITYSDK_OFFSET(0xEB997C0)

inline static constexpr unsigned int AICCLEAHNLO_TypeDefinitionIndex = 72337;

	class AICCLEAHNLO : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SummonerEnergyBarType, ::System::Action*>* KHJBLBCNCDO; // 0x60
		::RPG::GameCore::GameEntity* KCCKDHAOPDG; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SummonerEnergyBarType, ::BFOFICAMFGM*>* AENBOOBMFLI; // 0x70
		::AFICLLPMPJO* ONONLNOCOOE; // 0x78
		::RPG::GameCore::CharacterDataComponent* PPGPCDBHOLO; // 0x80
		::System::UInt32 IJNMMCIFHBL; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO__ONBIND_OFFSET))(this);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO_ONRETURN_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AICCLEAHNLO_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + AICCLEAHNLO_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void LEHJAPMONNN(::AFICLLPMPJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFICLLPMPJO*))((::PBYTE)hIl2Cpp + AICCLEAHNLO_LEHJAPMONNN_OFFSET))(this, a1);
		}

		::System::Void JMBFOHAMFGI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AICCLEAHNLO_JMBFOHAMFGI_OFFSET))(this, a1);
		}

		::System::Void FNMAFAJCMLC(::RPG::GameCore::LevelCharacterRevive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + AICCLEAHNLO_FNMAFAJCMLC_OFFSET))(this, a1);
		}

		::System::Void GGAHGOJJBIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO_GGAHGOJJBIP_OFFSET))(this);
		}

		::System::Void PFJDLLGFCOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO_PFJDLLGFCOD_OFFSET))(this);
		}

		::System::Void OGGILOGLGPJ(::RPG::GameCore::SummonerEnergyBarType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonerEnergyBarType))((::PBYTE)hIl2Cpp + AICCLEAHNLO_OGGILOGLGPJ_OFFSET))(this, a1);
		}

		::System::Void LFLFCBJAIFL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AICCLEAHNLO_LFLFCBJAIFL_OFFSET))(this, a1);
		}

		::System::Void LKNOGJNAGNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO_LKNOGJNAGNJ_OFFSET))(this);
		}

		::System::Void GFJGLGFCOFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO_GFJGLGFCOFK_OFFSET))(this);
		}

		::System::Void KMMLJBOPBPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO_KMMLJBOPBPF_OFFSET))(this);
		}

		::System::Boolean LCKHFGECEEF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO_LCKHFGECEEF_OFFSET))(this);
		}

		::System::Void OBFAPGCMDHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO_OBFAPGCMDHB_OFFSET))(this);
		}

		::System::Void HMNKNBKDEFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO_HMNKNBKDEFF_OFFSET))(this);
		}

		::System::Void JAOHFKNGEAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO_JAOHFKNGEAG_OFFSET))(this);
		}

		::System::String* BLMMLCJILNP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO_BLMMLCJILNP_OFFSET))(this);
		}

		::System::Void FKGDHHDONAD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AICCLEAHNLO_FKGDHHDONAD_OFFSET))(this, a1);
		}

		::System::Void EMFNEAJDHHB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AICCLEAHNLO_EMFNEAJDHHB_OFFSET))(this, a1);
		}

		::System::Void GNNLGCPMHBM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AICCLEAHNLO_GNNLGCPMHBM_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
