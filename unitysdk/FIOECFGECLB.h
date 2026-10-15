#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class GameEntity; }

#define FIOECFGECLB_CTOR_OFFSET UNITYSDK_OFFSET(0x157B0B40)
#define FIOECFGECLB_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x157B0970)
#define FIOECFGECLB_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x157B0AA0)
#define FIOECFGECLB_ONRETURN_OFFSET UNITYSDK_OFFSET(0x157B0AF0)
#define FIOECFGECLB__ONBIND_OFFSET UNITYSDK_OFFSET(0x157B09D0)

inline static constexpr unsigned int FIOECFGECLB_TypeDefinitionIndex = 71545;

	class FIOECFGECLB : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOECFGECLB_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FIOECFGECLB_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOECFGECLB__ONBIND_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FIOECFGECLB_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOECFGECLB_ONRETURN_OFFSET))(this);
		}

	};
