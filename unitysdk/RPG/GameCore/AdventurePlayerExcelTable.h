#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventurePlayerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5DB110)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E5DA780)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E5DA610)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E5DA300)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E5DA5B0)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E5DA8D0)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E5DA380)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E5DA910)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E5DAAE0)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E5DADF0)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E5DAA40)
#define RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E5DA9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePlayerExcelTable_TypeDefinitionIndex = 12653;

	class AdventurePlayerExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "AdventurePlayerExcelTable")->GetStaticField(0x3FFD0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdventurePlayerRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdventurePlayerRow*>**)UnitySDK::FromName("RPG.GameCore", "AdventurePlayerExcelTable")->GetStaticField(0x3FFD8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AdventurePlayerExcelTable")->GetStaticField(0x3FFE0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "AdventurePlayerExcelTable")->GetStaticField(0xDBA0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AdventurePlayerExcelTable")->GetStaticField(0xDBA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdventurePlayerRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdventurePlayerRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdventurePlayerRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdventurePlayerRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AdventurePlayerRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AdventurePlayerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AdventurePlayerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
