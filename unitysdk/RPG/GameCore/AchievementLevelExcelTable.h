#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AchievementLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F1180)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E4F0870)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E4F0700)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E4F03F0)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E4F06A0)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E4F0A00)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E4F0470)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E4F0A40)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E4F0C10)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E4F0E10)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E4F0B70)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E4F0AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AchievementLevelExcelTable_TypeDefinitionIndex = 10910;

	class AchievementLevelExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "AchievementLevelExcelTable")->GetStaticField(0xBC40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AchievementLevelExcelTable")->GetStaticField(0xBC48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementLevelRow*>**)UnitySDK::FromName("RPG.GameCore", "AchievementLevelExcelTable")->GetStaticField(0xBC50);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AchievementLevelExcelTable")->GetStaticField(0x16F0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "AchievementLevelExcelTable")->GetStaticField(0x16F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AchievementLevelRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AchievementLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AchievementLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AchievementLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
