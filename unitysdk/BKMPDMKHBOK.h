#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class GameEntity; }

#define BKMPDMKHBOK_CTOR_OFFSET UNITYSDK_OFFSET(0xBA606E0)
#define BKMPDMKHBOK_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBA60680)
#define BKMPDMKHBOK__ONBIND_OFFSET UNITYSDK_OFFSET(0xBA605A0)

inline static constexpr unsigned int BKMPDMKHBOK_TypeDefinitionIndex = 71473;

	class BKMPDMKHBOK : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMPDMKHBOK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMPDMKHBOK__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BKMPDMKHBOK_DHHDFAAJMMC_OFFSET))(this, a1);
		}

	};
