#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AFOPMEOBPCM;
class AODPLOPNOMJ;
class CJFBIIGGPHK;
class ILJDILDNADJ;
class NOIKIEBDOEB;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define DEJKENAIEIL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE510630)
#define DEJKENAIEIL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xE510890)
#define DEJKENAIEIL_CMAEOAOOMGP_OFFSET UNITYSDK_OFFSET(0xE510580)
#define DEJKENAIEIL_CTOR_OFFSET UNITYSDK_OFFSET(0xE510AB0)
#define DEJKENAIEIL_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xE50FEF0)
#define DEJKENAIEIL_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0xE5103C0)
#define DEJKENAIEIL_ELOHDJJHHHM_OFFSET UNITYSDK_OFFSET(0xE510060)
#define DEJKENAIEIL_GMIHEOFCIOK_OFFSET UNITYSDK_OFFSET(0xE510430)
#define DEJKENAIEIL_HJCLBHDEPKG_OFFSET UNITYSDK_OFFSET(0xE50FF60)
#define DEJKENAIEIL_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0xE5102B0)
#define DEJKENAIEIL_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0xE510480)
#define DEJKENAIEIL_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xE50FDD0)
#define DEJKENAIEIL_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xE510160)
#define DEJKENAIEIL_PBCMKIDFFMN_OFFSET UNITYSDK_OFFSET(0xE510250)
#define DEJKENAIEIL__ONBIND_OFFSET UNITYSDK_OFFSET(0xE50FB40)
#define DEJKENAIEIL__ONTICK_OFFSET UNITYSDK_OFFSET(0xE50FFF0)

inline static constexpr unsigned int DEJKENAIEIL_TypeDefinitionIndex = 72222;

	class DEJKENAIEIL : public ::FMPCODLIOLG
	{
	public:
		::CJFBIIGGPHK* BJKGPIOEDOE; // 0x60
		::NOIKIEBDOEB* HGNPAFEFBPE; // 0x68
		::AODPLOPNOMJ* OOIBNNJKKLN; // 0x70
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x78
		::AFOPMEOBPCM* EMEAEHDCJAF; // 0x80
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x88
		::ILJDILDNADJ* KPJOIOGBIGJ; // 0x90
		::System::Boolean IKOHOJHKIOP; // 0x98
		::System::Boolean AKBPNMEFGAO; // 0x99
		// static const ::System::String* LEELOIGGNGG; // 0x0
		// static const ::System::String* JJBPMPKGBOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJKENAIEIL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJKENAIEIL__ONBIND_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJKENAIEIL_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DEJKENAIEIL_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void HJCLBHDEPKG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEJKENAIEIL_HJCLBHDEPKG_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEJKENAIEIL__ONTICK_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJKENAIEIL_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEJKENAIEIL_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + DEJKENAIEIL_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Boolean PBCMKIDFFMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJKENAIEIL_PBCMKIDFFMN_OFFSET))(this);
		}

		::System::Void ELOHDJJHHHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJKENAIEIL_ELOHDJJHHHM_OFFSET))(this);
		}

		::System::Void GMIHEOFCIOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJKENAIEIL_GMIHEOFCIOK_OFFSET))(this);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEJKENAIEIL_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void CMAEOAOOMGP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEJKENAIEIL_CMAEOAOOMGP_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJKENAIEIL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJKENAIEIL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
