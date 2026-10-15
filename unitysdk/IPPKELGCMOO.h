#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }

#define IPPKELGCMOO_ALAIKLFDNDO_OFFSET UNITYSDK_OFFSET(0x16519560)
#define IPPKELGCMOO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x165198E0)
#define IPPKELGCMOO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16519A20)
#define IPPKELGCMOO_CTOR_OFFSET UNITYSDK_OFFSET(0x16519B40)
#define IPPKELGCMOO_HOHDMDMELOP_OFFSET UNITYSDK_OFFSET(0x16519740)
#define IPPKELGCMOO_KKBBFAIDFHP_OFFSET UNITYSDK_OFFSET(0x16519790)
#define IPPKELGCMOO_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x16519350)
#define IPPKELGCMOO_NPAPIGMIPAD_OFFSET UNITYSDK_OFFSET(0x16519820)
#define IPPKELGCMOO_OCNMAKONNMG_OFFSET UNITYSDK_OFFSET(0x165194C0)

inline static constexpr unsigned int IPPKELGCMOO_TypeDefinitionIndex = 71568;

	class IPPKELGCMOO : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LevelDataComponent* OOIDBIDKNOD; // 0x60
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x68
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
