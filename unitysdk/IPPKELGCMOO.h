#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }

#define IPPKELGCMOO_ALAIKLFDNDO_OFFSET UNITYSDK_OFFSET(0x16527670)
#define IPPKELGCMOO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x165279E0)
#define IPPKELGCMOO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16527B20)
#define IPPKELGCMOO_CTOR_OFFSET UNITYSDK_OFFSET(0x16527C40)
#define IPPKELGCMOO_HOHDMDMELOP_OFFSET UNITYSDK_OFFSET(0x16527840)
#define IPPKELGCMOO_KKBBFAIDFHP_OFFSET UNITYSDK_OFFSET(0x16527890)
#define IPPKELGCMOO_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x16527460)
#define IPPKELGCMOO_NPAPIGMIPAD_OFFSET UNITYSDK_OFFSET(0x16527920)
#define IPPKELGCMOO_OCNMAKONNMG_OFFSET UNITYSDK_OFFSET(0x165275D0)

	class IPPKELGCMOO : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
		::RPG::GameCore::LevelDataComponent* OOIDBIDKNOD; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPKELGCMOO_CTOR_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPKELGCMOO_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void OCNMAKONNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPKELGCMOO_OCNMAKONNMG_OFFSET))(this);
		}

		::System::Void HOHDMDMELOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPKELGCMOO_HOHDMDMELOP_OFFSET))(this);
		}

		::System::Void ALAIKLFDNDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPKELGCMOO_ALAIKLFDNDO_OFFSET))(this);
		}

		::System::Void KKBBFAIDFHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IPPKELGCMOO_KKBBFAIDFHP_OFFSET))(this, a1);
		}

		::System::Void NPAPIGMIPAD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IPPKELGCMOO_NPAPIGMIPAD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPKELGCMOO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPKELGCMOO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
