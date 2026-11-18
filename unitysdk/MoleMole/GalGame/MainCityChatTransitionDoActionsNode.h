#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/ChatSetAvatarVisible.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"
#include "unitysdk/ProtoScript/ModTimeType.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/KMEBHGEGMLM.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
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

#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDOACTIONSNODE_CREATTIMECFG_OFFSET UNITYSDK_OFFSET(0x10425CA0)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDOACTIONSNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x10425D20)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDOACTIONSNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x104259C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatTransitionDoActionsNode_TypeDefinitionIndex = 69787;

	class MainCityChatTransitionDoActionsNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* soundEvent; // 0x18
		::System::Boolean SetPlayerTransform; // 0x20
		::System::Boolean OutOfValidScenePosition; // 0x21
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 PlayerPos; // 0x24
		::UnityEngine::Vector3 PlayerRot; // 0x30
		::System::UInt32 PlayerCameraX; // 0x3C
		::System::UInt32 PlayerCameraY; // 0x40
		::System::Byte _padding1[0x4];
		::System::String* TransformKey; // 0x48
		::System::Boolean SetClientNpcTransform; // 0x50
		::System::Byte _padding2[0x3];
		::System::Int32 ClientNpcTag; // 0x54
		::System::String* ClientNpcTransformKey; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagStringPair*>* ExClientNpcTag; // 0x60
		::System::Boolean SetGroupMemberTransform; // 0x68
		::System::Byte _padding3[0x7];
		::System::Collections::Generic::List_1<::MoleMole::GalGame::SetGroupMemberTransformCfg*>* GroupMemberTransformCfgList; // 0x70
		::System::Boolean ResetCamera1; // 0x78
		::System::Boolean ResetCamera; // 0x79
		::System::Byte _padding4[0x2];
		::System::Int32 TargetTag; // 0x7C
		::System::UInt32 CameraX; // 0x80
		::System::UInt32 CameraY; // 0x84
		::MoleMole::GalGame::MainCityChatCameraParam* CameraParam; // 0x88
		::System::Int32 SetNpcDitherAction; // 0x90
		::System::Boolean SetTagVisible; // 0x94
		::System::Byte _padding5[0x3];
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>* Params; // 0x98
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>* GroupParams; // 0xA0
		::System::Boolean SetDynamicObjectVisible; // 0xA8
		::System::Byte _padding6[0x7];
		::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>* DynamicObjectsSubID; // 0xB0
		::MoleMole::GalGame::ChatSetAvatarVisible SetAvatarVisible; // 0xB8
		::System::Boolean ModifyTime; // 0xBC
		::System::Byte _padding7[0x3];
		::ProtoScript::ModTimeType ModType; // 0xC0
		::System::Int32 Minute; // 0xC4
		::System::Int32 TimePeriodNum; // 0xC8
		::System::Int32 DayOfWeek; // 0xCC
		::ProtoScript::TimePeriodType TimePeriod; // 0xD0
		::System::Boolean IgnoreMidnightLimit; // 0xD4
		::System::Byte _padding8[0x3];
		::System::Int32 avatarId; // 0xD8
		::System::Byte _padding9[0x4];
		::System::String* avatarShowingKey; // 0xE0
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>* TagAniParams; // 0xE8
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>* GroupAniParams; // 0xF0
		::System::Boolean ChangeAccessory; // 0xF8
		::System::Byte _padding10[0x7];
		::System::Collections::Generic::List_1<::MoleMole::GalGame::PlayerAccessoryCfg*>* PlayerAccessoryList; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDOACTIONSNODE__CTOR_OFFSET))(this);
		}

		::KMEBHGEGMLM CreatTimeCfg()
		{
			return ((::KMEBHGEGMLM(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDOACTIONSNODE_CREATTIMECFG_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDOACTIONSNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
