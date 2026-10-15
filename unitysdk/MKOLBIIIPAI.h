#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class GameEntity; }

#define MKOLBIIIPAI_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A2CD0)
#define MKOLBIIIPAI_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB9A2C70)
#define MKOLBIIIPAI__ONBIND_OFFSET UNITYSDK_OFFSET(0xB9A2BB0)

	class MKOLBIIIPAI : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* JDOAGFALGGA; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOLBIIIPAI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOLBIIIPAI__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MKOLBIIIPAI_DHHDFAAJMMC_OFFSET))(this, a1);
		}

	};
