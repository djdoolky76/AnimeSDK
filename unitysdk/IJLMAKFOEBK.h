#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Action; }
namespace System { class Nullable; }

#define IJLMAKFOEBK_BDECCJONFCF_OFFSET UNITYSDK_OFFSET(0x1646C660)
#define IJLMAKFOEBK_CFBIBGCIGNB_OFFSET UNITYSDK_OFFSET(0x1646C830)
#define IJLMAKFOEBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1646C970)
#define IJLMAKFOEBK_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x1646C2C0)
#define IJLMAKFOEBK_EGAHABLLEDG_OFFSET UNITYSDK_OFFSET(0x1646C360)
#define IJLMAKFOEBK_EGGFKAADJDK_OFFSET UNITYSDK_OFFSET(0x1646C770)
#define IJLMAKFOEBK_KBIFNPKHPMK_OFFSET UNITYSDK_OFFSET(0x1646C520)
#define IJLMAKFOEBK_MFGMFILAAIC_OFFSET UNITYSDK_OFFSET(0x1646C890)
#define IJLMAKFOEBK_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1646C4A0)
#define IJLMAKFOEBK_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1646C610)

	class IJLMAKFOEBK : public ::FMPCODLIOLG
	{
	public:
		::System::Action* JKLFLAAJHKJ; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::System::Boolean KALJBELNBMM; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLMAKFOEBK_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IJLMAKFOEBK_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IJLMAKFOEBK_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLMAKFOEBK_ONRETURN_OFFSET))(this);
		}

		::System::Void EGAHABLLEDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLMAKFOEBK_EGAHABLLEDG_OFFSET))(this);
		}

		::System::Void KBIFNPKHPMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLMAKFOEBK_KBIFNPKHPMK_OFFSET))(this);
		}

		::System::Void BDECCJONFCF(::RPG::GameCore::AbilityProperty a1, ::System::Nullable* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::CHMCAGBDPJH a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::System::Nullable*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + IJLMAKFOEBK_BDECCJONFCF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::AvatarDataComponent* CFBIBGCIGNB()
		{
			return ((::RPG::GameCore::AvatarDataComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLMAKFOEBK_CFBIBGCIGNB_OFFSET))(this);
		}

		::RPG::GameCore::BattleGridFightAvatarData* EGGFKAADJDK()
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLMAKFOEBK_EGGFKAADJDK_OFFSET))(this);
		}

		::RPG::GameCore::GridFightManager* MFGMFILAAIC()
		{
			return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLMAKFOEBK_MFGMFILAAIC_OFFSET))(this);
		}

	};
