#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class FMPCODLIOLG;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define JELCCCLNABK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13083110)
#define JELCCCLNABK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13083320)
#define JELCCCLNABK_BFHOIBMABBP_OFFSET UNITYSDK_OFFSET(0x13082E30)
#define JELCCCLNABK_CHCHOEHOHKI_OFFSET UNITYSDK_OFFSET(0x13082CB0)
#define JELCCCLNABK_CTOR_OFFSET UNITYSDK_OFFSET(0x130834F0)
#define JELCCCLNABK_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x13082FB0)
#define JELCCCLNABK_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0x13082F50)
#define JELCCCLNABK_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0x13083050)
#define JELCCCLNABK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x13082C50)
#define JELCCCLNABK__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x13082B30)
#define JELCCCLNABK__ONBIND_OFFSET UNITYSDK_OFFSET(0x13082A80)

inline static constexpr unsigned int JELCCCLNABK_TypeDefinitionIndex = 73620;

	class JELCCCLNABK : public ::FMPCODLIOLG
	{
	public:
		::FMPCODLIOLG* OEDKHBAHFLG; // 0x60
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x70
		// static const ::System::String* CJONLJJPLJM; // 0x0
		// static const ::System::String* JHNBEJJJLCO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELCCCLNABK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELCCCLNABK__ONBIND_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELCCCLNABK__INITVARONCE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELCCCLNABK_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void KGDIPFNECJH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JELCCCLNABK_KGDIPFNECJH_OFFSET))(this, a1);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + JELCCCLNABK_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void CHCHOEHOHKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELCCCLNABK_CHCHOEHOHKI_OFFSET))(this);
		}

		::System::Void BFHOIBMABBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELCCCLNABK_BFHOIBMABBP_OFFSET))(this);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JELCCCLNABK_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELCCCLNABK_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELCCCLNABK_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
