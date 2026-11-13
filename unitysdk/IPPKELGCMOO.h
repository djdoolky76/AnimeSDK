#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }

#define IPPKELGCMOO_ALAIKLFDNDO_OFFSET UNITYSDK_OFFSET(0x19306F80)
#define IPPKELGCMOO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x19307300)
#define IPPKELGCMOO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x19307440)
#define IPPKELGCMOO_CTOR_OFFSET UNITYSDK_OFFSET(0x19307560)
#define IPPKELGCMOO_HOHDMDMELOP_OFFSET UNITYSDK_OFFSET(0x19307160)
#define IPPKELGCMOO_KKBBFAIDFHP_OFFSET UNITYSDK_OFFSET(0x193071B0)
#define IPPKELGCMOO_NPAPIGMIPAD_OFFSET UNITYSDK_OFFSET(0x19307240)
#define IPPKELGCMOO_OCNMAKONNMG_OFFSET UNITYSDK_OFFSET(0x19306EE0)
#define IPPKELGCMOO__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x19306D70)

inline static constexpr unsigned int IPPKELGCMOO_TypeDefinitionIndex = 73555;

	class IPPKELGCMOO : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
		::RPG::GameCore::LevelDataComponent* OOIDBIDKNOD; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPKELGCMOO_CTOR_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPKELGCMOO__INITVARONCE_OFFSET))(this);
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
