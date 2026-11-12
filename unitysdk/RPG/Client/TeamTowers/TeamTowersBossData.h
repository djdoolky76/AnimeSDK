#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::TeamTowers { class TeamTowersBossSkillData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEC99CC0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_BOSSID_OFFSET UNITYSDK_OFFSET(0xEC9A180)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_BOSSSKILLDATALIST_OFFSET UNITYSDK_OFFSET(0xEC9A1F0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_BOSSSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0xEC9A1E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_BUBBLEGROUPID_OFFSET UNITYSDK_OFFSET(0xEC9A1D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xEC9A1A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xEC9A1B0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xEC9A190)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xEC9A1C0)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersBossData_TypeDefinitionIndex = 81795;

	class TeamTowersBossData : public ::System::Object
	{
	public:
		::System::String* _PrefabPath_k__BackingField; // 0x10
		::System::String* _ImagePath_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersBossSkillData*>* _BossSkillDataList_k__BackingField; // 0x20
		::RPG::Client::TextID _Name_k__BackingField; // 0x28
		::System::UInt32 _BossSkillGroupID_k__BackingField; // 0x38
		::System::UInt32 _BossID_k__BackingField; // 0x3C
		::System::UInt32 _BubbleGroupID_k__BackingField; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Desc_k__BackingField; // 0x48
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_BossID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_BOSSID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_DESC_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_PREFABPATH_OFFSET))(this);
		}

		::System::UInt32 get_BubbleGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_BUBBLEGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_BossSkillGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_BOSSSKILLGROUPID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersBossSkillData*>* get_BossSkillDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersBossSkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDATA_GET_BOSSSKILLDATALIST_OFFSET))(this);
		}

	};
}
