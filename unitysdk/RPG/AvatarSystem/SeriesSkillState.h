#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/SeriesSkillConfig.h"
#include "unitysdk/RPG/AvatarSystem/SeriesSkillsBuffedAvatarDisplayData.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Text { class StringBuilder; }

#define RPG_AVATARSYSTEM_SERIESSKILLSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xEB170)
#define RPG_AVATARSYSTEM_SERIESSKILLSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xEB110)
#define RPG_AVATARSYSTEM_SERIESSKILLSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEB100)
#define RPG_AVATARSYSTEM_SERIESSKILLSTATE_GET_BUFFEDAVATARSDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xEB0B0)
#define RPG_AVATARSYSTEM_SERIESSKILLSTATE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xEB010)
#define RPG_AVATARSYSTEM_SERIESSKILLSTATE_GET_UNLOCKEDLEVEL_OFFSET UNITYSDK_OFFSET(0xEB040)
#define RPG_AVATARSYSTEM_SERIESSKILLSTATE_GET_UNLOCKED_OFFSET UNITYSDK_OFFSET(0xEB060)
#define RPG_AVATARSYSTEM_SERIESSKILLSTATE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xCCD7460)
#define RPG_AVATARSYSTEM_SERIESSKILLSTATE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xCCD7400)
#define RPG_AVATARSYSTEM_SERIESSKILLSTATE_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xEB0E0)
#define RPG_AVATARSYSTEM_SERIESSKILLSTATE_SET_BUFFEDAVATARSDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xEB0C0)
#define RPG_AVATARSYSTEM_SERIESSKILLSTATE_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xEB030)
#define RPG_AVATARSYSTEM_SERIESSKILLSTATE_SET_UNLOCKEDLEVEL_OFFSET UNITYSDK_OFFSET(0xEB050)
#define RPG_AVATARSYSTEM_SERIESSKILLSTATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEB0D0)

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int SeriesSkillState_TypeDefinitionIndex = 53026;

	struct alignas(8) SeriesSkillState
	{
		::RPG::AvatarSystem::SeriesSkillConfig _Config_k__BackingField; // 0x10
		::System::UInt32 _UnlockedLevel_k__BackingField; // 0xA0
		::System::Byte _padding0[0x4];
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData>* _BuffedAvatarsDisplayData_k__BackingField; // 0xA8
		::RPG::AvatarSystem::SeriesSkillConfig get_Config()
		{
			return ((::RPG::AvatarSystem::SeriesSkillConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSTATE_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::AvatarSystem::SeriesSkillConfig a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::SeriesSkillConfig))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSTATE_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockedLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSTATE_GET_UNLOCKEDLEVEL_OFFSET))(this);
		}

		::System::Void set_UnlockedLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSTATE_SET_UNLOCKEDLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_Unlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSTATE_GET_UNLOCKED_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData>* get_BuffedAvatarsDisplayData()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSTATE_GET_BUFFEDAVATARSDISPLAYDATA_OFFSET))(this);
		}

		::System::Void set_BuffedAvatarsDisplayData(::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSTATE_SET_BUFFEDAVATARSDISPLAYDATA_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSTATE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSTATE_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::RPG::AvatarSystem::SeriesSkillState a1, ::RPG::AvatarSystem::SeriesSkillState a2)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::SeriesSkillState, ::RPG::AvatarSystem::SeriesSkillState))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSTATE_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::RPG::AvatarSystem::SeriesSkillState a1, ::RPG::AvatarSystem::SeriesSkillState a2)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::SeriesSkillState, ::RPG::AvatarSystem::SeriesSkillState))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSTATE_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSTATE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSTATE_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::RPG::AvatarSystem::SeriesSkillState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::SeriesSkillState))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_SERIESSKILLSTATE_EQUALS_1_OFFSET))(this, a1);
		}
		*/

	};
}
