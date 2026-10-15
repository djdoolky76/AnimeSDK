#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FMPCODLIOLG;
class GIPFFGFJCBF_PBICBEEGHJO;
class LEEEHNMHAAP;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define AGAGNDEHIOI_AAFDOHAMBOH_OFFSET UNITYSDK_OFFSET(0xCF24620)
#define AGAGNDEHIOI_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xCF24050)
#define AGAGNDEHIOI_CFLMMIMOJCE_OFFSET UNITYSDK_OFFSET(0xCF23FB0)
#define AGAGNDEHIOI_CGDNPIJGNNK_OFFSET UNITYSDK_OFFSET(0xCF24C30)
#define AGAGNDEHIOI_CTOR_OFFSET UNITYSDK_OFFSET(0xCF24E10)
#define AGAGNDEHIOI_DCODHLFNNGL_OFFSET UNITYSDK_OFFSET(0xCF23F10)
#define AGAGNDEHIOI_DGMBHHIANKI_OFFSET UNITYSDK_OFFSET(0xCF23F60)
#define AGAGNDEHIOI_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xCF23CB0)
#define AGAGNDEHIOI_EEBPFJBGKAP_OFFSET UNITYSDK_OFFSET(0xCF24910)
#define AGAGNDEHIOI_EHBGBIBFFAJ_OFFSET UNITYSDK_OFFSET(0xCF24450)
#define AGAGNDEHIOI_EMFHBBJJGHG_OFFSET UNITYSDK_OFFSET(0xCF242C0)
#define AGAGNDEHIOI_FEGFHCCDKNE_OFFSET UNITYSDK_OFFSET(0xCF24CB0)
#define AGAGNDEHIOI_FIADDJLKIGB_OFFSET UNITYSDK_OFFSET(0xCF23E80)
#define AGAGNDEHIOI_FNFBPFAOELN_OFFSET UNITYSDK_OFFSET(0xCF24780)
#define AGAGNDEHIOI_FONIBOKMJMK_OFFSET UNITYSDK_OFFSET(0xCF24000)
#define AGAGNDEHIOI_MLMNEACFLIK_OFFSET UNITYSDK_OFFSET(0xCF241E0)
#define AGAGNDEHIOI_NEBEIPJLDMJ_OFFSET UNITYSDK_OFFSET(0xCF24A70)
#define AGAGNDEHIOI_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0xCF24DD0)
#define AGAGNDEHIOI_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0xCF24C70)
#define AGAGNDEHIOI__ONBATTLECHANGEAVATARHUDPANELSHOW_B__10_0_OFFSET UNITYSDK_OFFSET(0xCF24E40)
#define AGAGNDEHIOI__ONBIND_OFFSET UNITYSDK_OFFSET(0xCF23D50)
#define AGAGNDEHIOI__SETASLASTSIBLING_B__12_0_OFFSET UNITYSDK_OFFSET(0xCF24F40)

	class AGAGNDEHIOI : public ::FMPCODLIOLG
	{
	public:
		::LEEEHNMHAAP* GEPAKAEKLMJ; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::RPG::GameCore::CharacterHUDType PKJHLMMKILL; // 0x70
		::System::Int32 FFNBLDFFMCN; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGNDEHIOI__ONBIND_OFFSET))(this);
		}

		::LEEEHNMHAAP* FIADDJLKIGB(::GIPFFGFJCBF_PBICBEEGHJO* a1)
		{
			return ((::LEEEHNMHAAP*(*)(::PVOID, ::GIPFFGFJCBF_PBICBEEGHJO*))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_FIADDJLKIGB_OFFSET))(this, a1);
		}

		::System::Void DCODHLFNNGL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_DCODHLFNNGL_OFFSET))(this, a1);
		}

		::System::Void DGMBHHIANKI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_DGMBHHIANKI_OFFSET))(this, a1);
		}

		::System::Void CFLMMIMOJCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_CFLMMIMOJCE_OFFSET))(this);
		}

		::System::Void FONIBOKMJMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_FONIBOKMJMK_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void EMFHBBJJGHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_EMFHBBJJGHG_OFFSET))(this, a1);
		}

		::System::Void EHBGBIBFFAJ(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_EHBGBIBFFAJ_OFFSET))(this, a1, a2);
		}

		::System::Void AAFDOHAMBOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_AAFDOHAMBOH_OFFSET))(this);
		}

		::System::Void FNFBPFAOELN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_FNFBPFAOELN_OFFSET))(this, a1);
		}

		::System::Void EEBPFJBGKAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_EEBPFJBGKAP_OFFSET))(this);
		}

		::System::Boolean NEBEIPJLDMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_NEBEIPJLDMJ_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CGDNPIJGNNK()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_CGDNPIJGNNK_OFFSET))(this);
		}

		::System::Int32 PCKEJOJIOOM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_PCKEJOJIOOM_OFFSET))(this);
		}

		::RPG::GameCore::CharacterHUDType FEGFHCCDKNE()
		{
			return ((::RPG::GameCore::CharacterHUDType(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_FEGFHCCDKNE_OFFSET))(this);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_OAAOHHINHPH_OFFSET))(this);
		}

		::System::Void MLMNEACFLIK(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_MLMNEACFLIK_OFFSET))(this, a1);
		}

		::System::Void _OnBattleChangeAvatarHUDPanelShow_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGNDEHIOI__ONBATTLECHANGEAVATARHUDPANELSHOW_B__10_0_OFFSET))(this);
		}

		::System::Void _SetAsLastSibling_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGNDEHIOI__SETASLASTSIBLING_B__12_0_OFFSET))(this);
		}

	};
