#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeMazeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC0BDD0)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_GETCHALLENGEIDSBYGROUP_OFFSET UNITYSDK_OFFSET(0x1EC0B750)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EC0A860)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EC0A730)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EC0A420)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EC0A6D0)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EC0A9B0)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EC0A4A0)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1EC0BB30)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EC0A9F0)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__ADDCHALLENGEGROUP_OFFSET UNITYSDK_OFFSET(0x1EC0BBC0)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC0ABC0)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EC0B430)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EC0AB20)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EC0AA80)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EC0B810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeMazeConfigExcelTable_TypeDefinitionIndex = 13038;

	class ChallengeMazeConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "ChallengeMazeConfigExcelTable")->GetStaticField(0xE8C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "ChallengeMazeConfigExcelTable")->GetStaticField(0xE8C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ChallengeMazeConfigExcelTable")->GetStaticField(0xE8D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__ChallengeIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("RPG.GameCore", "ChallengeMazeConfigExcelTable")->GetStaticField(0xE8D8);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ChallengeMazeConfigExcelTable")->GetStaticField(0x3060);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ChallengeMazeConfigExcelTable")->GetStaticField(0x3061);
		}

		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ChallengeMazeConfigExcelTable")->GetStaticField(0x3062);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ChallengeMazeConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChallengeMazeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChallengeMazeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeMazeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetChallengeIDsByGroup(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_GETCHALLENGEIDSBYGROUP_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void _AddChallengeGroup(::RPG::GameCore::ChallengeMazeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeMazeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__ADDCHALLENGEGROUP_OFFSET))(a1);
		}

	};
}
