#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }

#define IODICMALJOL_ACAOANMOOJI_OFFSET UNITYSDK_OFFSET(0xB832220)
#define IODICMALJOL_AFJOEKGBLDF_OFFSET UNITYSDK_OFFSET(0xB832510)
#define IODICMALJOL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB8325D0)
#define IODICMALJOL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB8326A0)
#define IODICMALJOL_CTOR_OFFSET UNITYSDK_OFFSET(0xB832740)
#define IODICMALJOL_IDFODNBNBMD_OFFSET UNITYSDK_OFFSET(0xB8324C0)
#define IODICMALJOL_JKOAABALJEH_OFFSET UNITYSDK_OFFSET(0xB832430)
#define IODICMALJOL_LKEAGGEIDOL_OFFSET UNITYSDK_OFFSET(0xB832470)
#define IODICMALJOL_PPADDBPMNNB_OFFSET UNITYSDK_OFFSET(0xB8323B0)
#define IODICMALJOL__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xB8320B0)

inline static constexpr unsigned int IODICMALJOL_TypeDefinitionIndex = 74089;

	class IODICMALJOL : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
		::RPG::GameCore::LevelDataComponent* OOIDBIDKNOD; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODICMALJOL_CTOR_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODICMALJOL__INITVARONCE_OFFSET))(this);
		}

		::System::Void ACAOANMOOJI(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + IODICMALJOL_ACAOANMOOJI_OFFSET))(this, a1);
		}

		::System::Void JKOAABALJEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODICMALJOL_JKOAABALJEH_OFFSET))(this);
		}

		::System::Void LKEAGGEIDOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODICMALJOL_LKEAGGEIDOL_OFFSET))(this);
		}

		::System::Void PPADDBPMNNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODICMALJOL_PPADDBPMNNB_OFFSET))(this);
		}

		::System::Void IDFODNBNBMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODICMALJOL_IDFODNBNBMD_OFFSET))(this);
		}

		::System::Void AFJOEKGBLDF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IODICMALJOL_AFJOEKGBLDF_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODICMALJOL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODICMALJOL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
