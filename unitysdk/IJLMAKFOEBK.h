#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Action; }

#define IJLMAKFOEBK_BDECCJONFCF_OFFSET UNITYSDK_OFFSET(0x1645EF90)
#define IJLMAKFOEBK_CFBIBGCIGNB_OFFSET UNITYSDK_OFFSET(0x1645F160)
#define IJLMAKFOEBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1645F2A0)
#define IJLMAKFOEBK_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x1645EBF0)
#define IJLMAKFOEBK_EGAHABLLEDG_OFFSET UNITYSDK_OFFSET(0x1645EC90)
#define IJLMAKFOEBK_EGGFKAADJDK_OFFSET UNITYSDK_OFFSET(0x1645F0A0)
#define IJLMAKFOEBK_KBIFNPKHPMK_OFFSET UNITYSDK_OFFSET(0x1645EE50)
#define IJLMAKFOEBK_MFGMFILAAIC_OFFSET UNITYSDK_OFFSET(0x1645F1C0)
#define IJLMAKFOEBK_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1645EDD0)
#define IJLMAKFOEBK_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1645EF40)

inline static constexpr unsigned int IJLMAKFOEBK_TypeDefinitionIndex = 72254;

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

		::System::Void BDECCJONFCF(::RPG::GameCore::AbilityProperty a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::CHMCAGBDPJH a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + IJLMAKFOEBK_BDECCJONFCF_OFFSET))(this, a1, a2, a3, a4, a5);
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
