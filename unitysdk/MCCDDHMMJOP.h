#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CDKKPFHIFLA;
class DCGIDEKLGAJ;
namespace RPG::Client { class BattleMonsterCustomizedWeaknessSource; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }

#define MCCDDHMMJOP_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0x1B83AC50)
#define MCCDDHMMJOP_AOBNIOCOANE_OFFSET UNITYSDK_OFFSET(0x1B83A2A0)
#define MCCDDHMMJOP_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B83AEA0)
#define MCCDDHMMJOP_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B83AF90)
#define MCCDDHMMJOP_BPLENAIPLDC_OFFSET UNITYSDK_OFFSET(0x1B83A000)
#define MCCDDHMMJOP_CPOINFFGEBC_OFFSET UNITYSDK_OFFSET(0x1B83A1F0)
#define MCCDDHMMJOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B83B060)
#define MCCDDHMMJOP_HADKHLGBFLK_OFFSET UNITYSDK_OFFSET(0x1B83ACA0)
#define MCCDDHMMJOP_HEJIHMGNCCB_OFFSET UNITYSDK_OFFSET(0x1B83A3F0)
#define MCCDDHMMJOP_IICOKLOFJAK_OFFSET UNITYSDK_OFFSET(0x1B839F90)
#define MCCDDHMMJOP_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0x1B83ADE0)
#define MCCDDHMMJOP_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1B839EE0)
#define MCCDDHMMJOP_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1B83A1A0)
#define MCCDDHMMJOP__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1B83A640)
#define MCCDDHMMJOP__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B83A7B0)
#define MCCDDHMMJOP__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1B83AAD0)
#define MCCDDHMMJOP__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B83A590)
#define MCCDDHMMJOP__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B83AA80)

inline static constexpr unsigned int MCCDDHMMJOP_TypeDefinitionIndex = 73820;

	class MCCDDHMMJOP : public ::FMPCODLIOLG
	{
	public:
		::CDKKPFHIFLA* NMMGIDOGGGD; // 0x60
		::DCGIDEKLGAJ* FGEMHOFOPLO; // 0x68
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x70
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
		::System::Boolean HAKHCANCCKK; // 0x80
		::System::Boolean EJLNANANCBF; // 0x81
		::System::Boolean DKBLDMBGLKK; // 0x82
		::System::Byte _padding0[0x1];
		::System::Single HBDGFLPGFJE; // 0x84
		::System::Single BFPOCEDAOMA; // 0x88
		// static const ::System::String* GAMHLBANFDL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDDHMMJOP_CTOR_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MCCDDHMMJOP_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDDHMMJOP_ONRETURN_OFFSET))(this);
		}

		::System::Void BPLENAIPLDC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MCCDDHMMJOP_BPLENAIPLDC_OFFSET))(this, a1);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MCCDDHMMJOP__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDDHMMJOP__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDDHMMJOP__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDDHMMJOP__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDDHMMJOP__ONDISPOSE_OFFSET))(this);
		}

		::System::Void AIOJNOHDCDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDDHMMJOP_AIOJNOHDCDM_OFFSET))(this);
		}

		::System::Void AOBNIOCOANE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MCCDDHMMJOP_AOBNIOCOANE_OFFSET))(this, a1);
		}

		::System::Void HEJIHMGNCCB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MCCDDHMMJOP_HEJIHMGNCCB_OFFSET))(this, a1);
		}

		::System::Void HADKHLGBFLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDDHMMJOP_HADKHLGBFLK_OFFSET))(this);
		}

		::RPG::Client::BattleMonsterCustomizedWeaknessSource* CPOINFFGEBC()
		{
			return ((::RPG::Client::BattleMonsterCustomizedWeaknessSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDDHMMJOP_CPOINFFGEBC_OFFSET))(this);
		}

		::System::Void IICOKLOFJAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDDHMMJOP_IICOKLOFJAK_OFFSET))(this);
		}

		::System::Void KHNLCACKMAH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MCCDDHMMJOP_KHNLCACKMAH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDDHMMJOP_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCDDHMMJOP_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
