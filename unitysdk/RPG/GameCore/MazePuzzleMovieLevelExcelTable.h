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

#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D86C290)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D86B720)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D86B5F0)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D86B2E0)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D86B590)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D86B900)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D86B360)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D86B940)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D86BB10)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D86BF30)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D86BA70)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D86B9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleMovieLevelExcelTable_TypeDefinitionIndex = 14084;

	class MazePuzzleMovieLevelExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MazePuzzleMovieLevelExcelTable")->GetStaticField(0x3BF80);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MazePuzzleMovieLevelExcelTable")->GetStaticField(0x3BF88);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleMovieLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleMovieLevelRow*>**)UnitySDK::FromName("RPG.GameCore", "MazePuzzleMovieLevelExcelTable")->GetStaticField(0x3BF90);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MazePuzzleMovieLevelExcelTable")->GetStaticField(0xCC50);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MazePuzzleMovieLevelExcelTable")->GetStaticField(0xCC51);
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
