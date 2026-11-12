#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define IJLMAKFOEBK_BDECCJONFCF_OFFSET UNITYSDK_OFFSET(0x1743F200)
#define IJLMAKFOEBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1743F3D0)
#define IJLMAKFOEBK_EGAHABLLEDG_OFFSET UNITYSDK_OFFSET(0x1743EE80)
#define IJLMAKFOEBK_EGGFKAADJDK_OFFSET UNITYSDK_OFFSET(0x1743F380)
#define IJLMAKFOEBK_KBIFNPKHPMK_OFFSET UNITYSDK_OFFSET(0x1743F040)
#define IJLMAKFOEBK_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1743EFC0)
#define IJLMAKFOEBK_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1743F130)
#define IJLMAKFOEBK__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1743F180)
#define IJLMAKFOEBK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1743EDE0)

inline static constexpr unsigned int IJLMAKFOEBK_TypeDefinitionIndex = 74325;

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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IJLMAKFOEBK__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IJLMAKFOEBK_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLMAKFOEBK_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLMAKFOEBK__ONDISPOSE_OFFSET))(this);
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

		::RPG::GameCore::BattleGridFightAvatarData* EGGFKAADJDK()
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLMAKFOEBK_EGGFKAADJDK_OFFSET))(this);
		}

	};
