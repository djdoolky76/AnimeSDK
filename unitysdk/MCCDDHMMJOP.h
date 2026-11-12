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

#define MCCDDHMMJOP_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0xC0DAF80)
#define MCCDDHMMJOP_AOBNIOCOANE_OFFSET UNITYSDK_OFFSET(0xC0DA5D0)
#define MCCDDHMMJOP_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC0DB1D0)
#define MCCDDHMMJOP_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC0DB2C0)
#define MCCDDHMMJOP_BPLENAIPLDC_OFFSET UNITYSDK_OFFSET(0xC0DA330)
#define MCCDDHMMJOP_CPOINFFGEBC_OFFSET UNITYSDK_OFFSET(0xC0DA520)
#define MCCDDHMMJOP_CTOR_OFFSET UNITYSDK_OFFSET(0xC0DB390)
#define MCCDDHMMJOP_HADKHLGBFLK_OFFSET UNITYSDK_OFFSET(0xC0DAFD0)
#define MCCDDHMMJOP_HEJIHMGNCCB_OFFSET UNITYSDK_OFFSET(0xC0DA720)
#define MCCDDHMMJOP_IICOKLOFJAK_OFFSET UNITYSDK_OFFSET(0xC0DA2C0)
#define MCCDDHMMJOP_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0xC0DB110)
#define MCCDDHMMJOP_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC0DA210)
#define MCCDDHMMJOP_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC0DA4D0)
#define MCCDDHMMJOP__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xC0DA970)
#define MCCDDHMMJOP__ONBIND_OFFSET UNITYSDK_OFFSET(0xC0DAAE0)
#define MCCDDHMMJOP__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC0DAE00)
#define MCCDDHMMJOP__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC0DA8C0)
#define MCCDDHMMJOP__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC0DADB0)

inline static constexpr unsigned int MCCDDHMMJOP_TypeDefinitionIndex = 73821;

	class MCCDDHMMJOP : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::CDKKPFHIFLA* NMMGIDOGGGD; // 0x68
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x70
		::DCGIDEKLGAJ* FGEMHOFOPLO; // 0x78
		::System::Single BFPOCEDAOMA; // 0x80
		::System::Boolean DKBLDMBGLKK; // 0x84
		::System::Boolean EJLNANANCBF; // 0x85
		::System::Boolean HAKHCANCCKK; // 0x86
		::System::Byte _padding0[0x1];
		::System::Single HBDGFLPGFJE; // 0x88
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
