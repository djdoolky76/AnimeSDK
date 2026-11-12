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
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AICCLEAHNLO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xF15F5C0)
#define AICCLEAHNLO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xF15F740)
#define AICCLEAHNLO_BLMMLCJILNP_OFFSET UNITYSDK_OFFSET(0xF15F120)
#define AICCLEAHNLO_CTOR_OFFSET UNITYSDK_OFFSET(0xF15F8A0)
#define AICCLEAHNLO_EMFNEAJDHHB_OFFSET UNITYSDK_OFFSET(0xF15F3C0)
#define AICCLEAHNLO_FKGDHHDONAD_OFFSET UNITYSDK_OFFSET(0xF15F300)
#define AICCLEAHNLO_FNMAFAJCMLC_OFFSET UNITYSDK_OFFSET(0xF15E6E0)
#define AICCLEAHNLO_GFJGLGFCOFK_OFFSET UNITYSDK_OFFSET(0xF15ED40)
#define AICCLEAHNLO_GGAHGOJJBIP_OFFSET UNITYSDK_OFFSET(0xF15E460)
#define AICCLEAHNLO_GNNLGCPMHBM_OFFSET UNITYSDK_OFFSET(0xF15F4D0)
#define AICCLEAHNLO_ILMGOFGMKPH_OFFSET UNITYSDK_OFFSET(0xF15EF50)
#define AICCLEAHNLO_JMBFOHAMFGI_OFFSET UNITYSDK_OFFSET(0xF15E660)
#define AICCLEAHNLO_KMMLJBOPBPF_OFFSET UNITYSDK_OFFSET(0xF15EE80)
#define AICCLEAHNLO_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0xF15E580)
#define AICCLEAHNLO_LFLFCBJAIFL_OFFSET UNITYSDK_OFFSET(0xF15E1F0)
#define AICCLEAHNLO_LKNOGJNAGNJ_OFFSET UNITYSDK_OFFSET(0xF15EC70)
#define AICCLEAHNLO_OGGILOGLGPJ_OFFSET UNITYSDK_OFFSET(0xF15E940)
#define AICCLEAHNLO_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xF15E310)
#define AICCLEAHNLO_ONRETURN_OFFSET UNITYSDK_OFFSET(0xF15E050)
#define AICCLEAHNLO_PAHALHCHLBO_OFFSET UNITYSDK_OFFSET(0xF15E9F0)
#define AICCLEAHNLO_PFJDLLGFCOD_OFFSET UNITYSDK_OFFSET(0xF15E770)
#define AICCLEAHNLO__ONBIND_OFFSET UNITYSDK_OFFSET(0xF15E010)
#define AICCLEAHNLO__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xF15E3F0)
#define AICCLEAHNLO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xF15E3A0)

inline static constexpr unsigned int AICCLEAHNLO_TypeDefinitionIndex = 74417;

	class AICCLEAHNLO : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::CharacterDataComponent* PPGPCDBHOLO; // 0x60
		::AFICLLPMPJO* ONONLNOCOOE; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SummonerEnergyBarType, ::BFOFICAMFGM*>* AENBOOBMFLI; // 0x70
		::RPG::GameCore::GameEntity* KCCKDHAOPDG; // 0x78
		::System::UInt32 IJNMMCIFHBL; // 0x80
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + AICCLEAHNLO__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO__SETUPVIEW_OFFSET))(this);
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

		::System::Void ILMGOFGMKPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICCLEAHNLO_ILMGOFGMKPH_OFFSET))(this);
		}

		::System::Void PAHALHCHLBO(::RPG::GameCore::SummonerEnergyBarType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonerEnergyBarType))((::PBYTE)hIl2Cpp + AICCLEAHNLO_PAHALHCHLBO_OFFSET))(this, a1);
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
