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

#define AGAGNDEHIOI_AAFDOHAMBOH_OFFSET UNITYSDK_OFFSET(0xD5DA430)
#define AGAGNDEHIOI_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xD5D9E60)
#define AGAGNDEHIOI_CFLMMIMOJCE_OFFSET UNITYSDK_OFFSET(0xD5D9DC0)
#define AGAGNDEHIOI_CGDNPIJGNNK_OFFSET UNITYSDK_OFFSET(0xD5DAA40)
#define AGAGNDEHIOI_CTOR_OFFSET UNITYSDK_OFFSET(0xD5DAC20)
#define AGAGNDEHIOI_DCODHLFNNGL_OFFSET UNITYSDK_OFFSET(0xD5D9D20)
#define AGAGNDEHIOI_DGMBHHIANKI_OFFSET UNITYSDK_OFFSET(0xD5D9D70)
#define AGAGNDEHIOI_EEBPFJBGKAP_OFFSET UNITYSDK_OFFSET(0xD5DA720)
#define AGAGNDEHIOI_EHBGBIBFFAJ_OFFSET UNITYSDK_OFFSET(0xD5DA260)
#define AGAGNDEHIOI_EMFHBBJJGHG_OFFSET UNITYSDK_OFFSET(0xD5DA0D0)
#define AGAGNDEHIOI_FEGFHCCDKNE_OFFSET UNITYSDK_OFFSET(0xD5DAAC0)
#define AGAGNDEHIOI_FIADDJLKIGB_OFFSET UNITYSDK_OFFSET(0xD5D9C90)
#define AGAGNDEHIOI_FNFBPFAOELN_OFFSET UNITYSDK_OFFSET(0xD5DA590)
#define AGAGNDEHIOI_FONIBOKMJMK_OFFSET UNITYSDK_OFFSET(0xD5D9E10)
#define AGAGNDEHIOI_MLMNEACFLIK_OFFSET UNITYSDK_OFFSET(0xD5D9FF0)
#define AGAGNDEHIOI_NEBEIPJLDMJ_OFFSET UNITYSDK_OFFSET(0xD5DA880)
#define AGAGNDEHIOI_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0xD5DABE0)
#define AGAGNDEHIOI_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0xD5DAA80)
#define AGAGNDEHIOI__ONBATTLECHANGEAVATARHUDPANELSHOW_B__10_0_OFFSET UNITYSDK_OFFSET(0xD5DAC50)
#define AGAGNDEHIOI__ONBIND_OFFSET UNITYSDK_OFFSET(0xD5D9B60)
#define AGAGNDEHIOI__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xD5D9AC0)
#define AGAGNDEHIOI__SETASLASTSIBLING_B__12_0_OFFSET UNITYSDK_OFFSET(0xD5DAD50)

inline static constexpr unsigned int AGAGNDEHIOI_TypeDefinitionIndex = 73416;

	class AGAGNDEHIOI : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::LEEEHNMHAAP* GEPAKAEKLMJ; // 0x68
		::System::Int32 FFNBLDFFMCN; // 0x70
		::RPG::GameCore::CharacterHUDType PKJHLMMKILL; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGNDEHIOI_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + AGAGNDEHIOI__ONINITPARAMS_OFFSET))(this, a1);
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
