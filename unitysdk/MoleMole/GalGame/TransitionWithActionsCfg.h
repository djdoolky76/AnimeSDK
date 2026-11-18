#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/ChatSetAvatarVisible.h"
#include "unitysdk/ProtoScript/ModTimeType.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/KMEBHGEGMLM.h"

namespace MoleMole::GalGame { class DynamicObjectModifyActiveCfg; }
namespace MoleMole::GalGame { class MainCityChatCameraParam; }
namespace MoleMole::GalGame { class PlayerAccessoryCfg; }
namespace MoleMole::GalGame { class SetGroupMemberTransformCfg; }
namespace MoleMole::GalGame { class TagAniPair; }
namespace MoleMole::GalGame { class TagBoolPair; }
namespace MoleMole::GalGame { class TagGroupAniPair; }
namespace MoleMole::GalGame { class TagGroupBoolPair; }
namespace MoleMole::GalGame { class TagStringPair; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_CREATTIMECFG_OFFSET UNITYSDK_OFFSET(0x1357E220)
#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_POSTSOUNDEVENT_OFFSET UNITYSDK_OFFSET(0x1357E2A0)
#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1357E2E0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TransitionWithActionsCfg_TypeDefinitionIndex = 79012;

	class TransitionWithActionsCfg : public ::System::Object
	{
	public:
		::System::Boolean IsBegin; // 0x10
		::System::Boolean IsEnd; // 0x11
		::System::Byte _padding0[0x6];
		::System::String* soundEvent; // 0x18
		::System::Boolean OnlyActions; // 0x20
		::System::Boolean IsTransition; // 0x21
		::System::Byte _padding1[0x6];
		::System::String* DialogueKey; // 0x28
		::System::Int32 DialogueDelay; // 0x30
		::System::Int32 TransitionID; // 0x34
		::MoleMole::GalGame::ChatSetAvatarVisible SetAvatarVisible; // 0x38
		::System::Boolean SetTagVisible; // 0x3C
		::System::Byte _padding2[0x3];
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>* Params; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>* TagAniParams; // 0x48
		::System::Int32 avatarId; // 0x50
		::System::Byte _padding3[0x4];
		::System::String* avatarShowingKey; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>* GroupParams; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>* GroupAniParams; // 0x68
		::System::Boolean SetDynamicObjectVisible; // 0x70
		::System::Byte _padding4[0x7];
		::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>* DynamicObjectsSubID; // 0x78
		::System::Boolean ChangeAccessory; // 0x80
		::System::Byte _padding5[0x7];
		::System::Collections::Generic::List_1<::MoleMole::GalGame::PlayerAccessoryCfg*>* PlayerAccessoryList; // 0x88
		::System::Boolean ResetCamera; // 0x90
		::System::Byte _padding6[0x3];
		::System::Int32 TargetTag; // 0x94
		::System::UInt32 CameraX; // 0x98
		::System::UInt32 CameraY; // 0x9C
		::System::Boolean SetPlayerTransform; // 0xA0
		::System::Boolean OutOfValidScenePosition; // 0xA1
		::System::Byte _padding7[0x2];
		::UnityEngine::Vector3 PlayerPos; // 0xA4
		::UnityEngine::Vector3 PlayerRot; // 0xB0
		::System::UInt32 PlayerCameraX; // 0xBC
		::System::UInt32 PlayerCameraY; // 0xC0
		::System::Byte _padding8[0x4];
		::System::String* TransformKey; // 0xC8
		::System::Boolean SetClientNpcTransform; // 0xD0
		::System::Byte _padding9[0x3];
		::System::Int32 ClientNpcTag; // 0xD4
		::System::String* ClientNpcTransformKey; // 0xD8
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagStringPair*>* ExClientNpcTag; // 0xE0
		::System::Boolean SetGroupMemberTransform; // 0xE8
		::System::Byte _padding10[0x7];
		::System::Collections::Generic::List_1<::MoleMole::GalGame::SetGroupMemberTransformCfg*>* GroupMemberTransformCfgList; // 0xF0
		::System::Boolean ResetCamera1; // 0xF8
		::System::Byte _padding11[0x7];
		::MoleMole::GalGame::MainCityChatCameraParam* CameraParam; // 0x100
		::System::Boolean ModifyTime; // 0x108
		::System::Byte _padding12[0x3];
		::ProtoScript::ModTimeType ModType; // 0x10C
		::System::Int32 Minute; // 0x110
		::System::Int32 TimePeriodNum; // 0x114
		::System::Int32 DayOfWeek; // 0x118
		::ProtoScript::TimePeriodType TimePeriod; // 0x11C
		::System::Boolean IgnoreMidnightLimit; // 0x120
		::System::Byte _padding13[0x3];
		::System::Int32 SetNpcDitherAction; // 0x124

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG__CTOR_OFFSET))(this);
		}

		::KMEBHGEGMLM CreatTimeCfg()
		{
			return ((::KMEBHGEGMLM(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_CREATTIMECFG_OFFSET))(this);
		}

		::System::Void PostSoundEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_POSTSOUNDEVENT_OFFSET))(this);
		}
	};
}
