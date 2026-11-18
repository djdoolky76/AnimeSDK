#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGNNAMFJDL.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/MoleMole/InLevelBuddyDataItem_InLevelBuddyTeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BKGKJNHLCKC;
class GAMDEPPDCFD;
class MANBGDFAHPC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_INLEVELBUDDYDATAITEM_GETBUDDYNAME_OFFSET UNITYSDK_OFFSET(0x1432DA80)
#define MOLEMOLE_INLEVELBUDDYDATAITEM_GETCURBATTLEBUDDYDATA_OFFSET UNITYSDK_OFFSET(0x1432D8B0)
#define MOLEMOLE_INLEVELBUDDYDATAITEM_GETSKILLLEVELBYTYPE_OFFSET UNITYSDK_OFFSET(0x1432D7C0)
#define MOLEMOLE_INLEVELBUDDYDATAITEM_GET_BUDDYTEAMTYPE_OFFSET UNITYSDK_OFFSET(0x1432C370)
#define MOLEMOLE_INLEVELBUDDYDATAITEM_GET_DATAITEMID_OFFSET UNITYSDK_OFFSET(0x1432DAD0)
#define MOLEMOLE_INLEVELBUDDYDATAITEM_GET_SKILLTYPE2LEVEL_OFFSET UNITYSDK_OFFSET(0x1432C390)
#define MOLEMOLE_INLEVELBUDDYDATAITEM_INIT_OFFSET UNITYSDK_OFFSET(0x1432C540)
#define MOLEMOLE_INLEVELBUDDYDATAITEM_SET_BUDDYTEAMTYPE_OFFSET UNITYSDK_OFFSET(0x1432C380)
#define MOLEMOLE_INLEVELBUDDYDATAITEM_SET_SKILLTYPE2LEVEL_OFFSET UNITYSDK_OFFSET(0x1432C3A0)
#define MOLEMOLE_INLEVELBUDDYDATAITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1432C480)
#define MOLEMOLE_INLEVELBUDDYDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1432C3B0)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelBuddyDataItem_TypeDefinitionIndex = 61086;

	class InLevelBuddyDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* partAssetPathList; // 0x10
		::System::Collections::Generic::Dictionary_2<::DBGNNAMFJDL, ::System::Int32>* _SkillType2Level_k__BackingField; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* addedAbilityIDList; // 0x20
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* overridePropertyMap; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::GAMDEPPDCFD*>* EquipedArcanaDic; // 0x30
		::System::Single bornFaceDir; // 0x38
		::System::Int32 Level; // 0x3C
		::System::Boolean createBuddyAsAvatar; // 0x40
		::System::Boolean isSwitchCtrlByBattleStatus; // 0x41
		::System::Byte _padding0[0x2];
		::System::Int32 Rank; // 0x44
		::System::Int32 Star; // 0x48
		::UnityEngine::Vector3 bornPosition; // 0x4C
		::System::Int32 TemplateID; // 0x58
		::MoleMole::InLevelBuddyDataItem_InLevelBuddyTeamType _buddyTeamType_k__BackingField; // 0x5C
		::MoleMole::Config::BuddyTeamType BuddyTeam; // 0x60
		::System::Int32 EquipedPosition; // 0x64
		::System::Int32 robotID; // 0x68

		::System::Void _ctor(::System::Int32 templateID, ::System::Collections::Generic::List_1<::GAMDEPPDCFD*>* arcanas, ::System::Int32 inRobotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::GAMDEPPDCFD*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM__CTOR_OFFSET))(this, templateID, arcanas, inRobotID);
		}

		::System::Void _ctor_1(::System::Int32 templateID, ::MoleMole::Config::BuddyTeamType buddyTeam, ::System::Collections::Generic::List_1<::GAMDEPPDCFD*>* arcanas, ::System::Int32 inRobotID, ::MANBGDFAHPC* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::List_1<::GAMDEPPDCFD*>*, ::System::Int32, ::MANBGDFAHPC*))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM__CTOR_1_OFFSET))(this, templateID, buddyTeam, arcanas, inRobotID, serverData);
		}

		::MoleMole::InLevelBuddyDataItem_InLevelBuddyTeamType get_buddyTeamType()
		{
			return ((::MoleMole::InLevelBuddyDataItem_InLevelBuddyTeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_GET_BUDDYTEAMTYPE_OFFSET))(this);
		}

		::System::Void set_buddyTeamType(::MoleMole::InLevelBuddyDataItem_InLevelBuddyTeamType value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelBuddyDataItem_InLevelBuddyTeamType))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_SET_BUDDYTEAMTYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::DBGNNAMFJDL, ::System::Int32>* get_SkillType2Level()
		{
			return ((::System::Collections::Generic::Dictionary_2<::DBGNNAMFJDL, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_GET_SKILLTYPE2LEVEL_OFFSET))(this);
		}

		::System::Void set_SkillType2Level(::System::Collections::Generic::Dictionary_2<::DBGNNAMFJDL, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::DBGNNAMFJDL, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_SET_SKILLTYPE2LEVEL_OFFSET))(this, value);
		}

		::System::Void Init(::System::Int32 templateID, ::MoleMole::Config::BuddyTeamType buddyTeam, ::System::Collections::Generic::List_1<::GAMDEPPDCFD*>* arcanas, ::System::Int32 inRobotID, ::MANBGDFAHPC* buddyServerData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::List_1<::GAMDEPPDCFD*>*, ::System::Int32, ::MANBGDFAHPC*))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_INIT_OFFSET))(this, templateID, buddyTeam, arcanas, inRobotID, buddyServerData);
		}

		::BKGKJNHLCKC* GetCurBattleBuddyData()
		{
			return ((::BKGKJNHLCKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_GETCURBATTLEBUDDYDATA_OFFSET))(this);
		}

		::System::Int32 GetSkillLevelByType(::DBGNNAMFJDL type)
		{
			return ((::System::Int32(*)(::PVOID, ::DBGNNAMFJDL))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_GETSKILLLEVELBYTYPE_OFFSET))(this, type);
		}

		static ::System::String* GetBuddyName(::Foundation::AssetPath assetPath)
		{
			return ((::System::String*(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_GETBUDDYNAME_OFFSET))(assetPath);
		}

		::System::Int32 get_DataItemID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELBUDDYDATAITEM_GET_DATAITEMID_OFFSET))(this);
		}
	};
}
