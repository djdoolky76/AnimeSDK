#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/MazePuzzleMovieGameMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleMovieLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D1110)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E6D05A0)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E6D0470)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E6D0160)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E6D0410)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E6D0780)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6D01E0)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6D07C0)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E6D0990)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E6D0DB0)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E6D08F0)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6D0850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleMovieLevelExcelTable_TypeDefinitionIndex = 14241;

	class MazePuzzleMovieLevelExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleMovieLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleMovieLevelRow*>**)UnitySDK::FromName("RPG.GameCore", "MazePuzzleMovieLevelExcelTable")->GetStaticField(0x3E230);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MazePuzzleMovieLevelExcelTable")->GetStaticField(0x3E238);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MazePuzzleMovieLevelExcelTable")->GetStaticField(0x3E240);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MazePuzzleMovieLevelExcelTable")->GetStaticField(0xC680);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MazePuzzleMovieLevelExcelTable")->GetStaticField(0xC681);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleMovieLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleMovieLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleMovieLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleMovieLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazePuzzleMovieLevelRow* GetData(::RPG::GameCore::MazePuzzleMovieGameMode a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MazePuzzleMovieLevelRow*(*)(::RPG::GameCore::MazePuzzleMovieGameMode, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazePuzzleMovieLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePuzzleMovieLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
