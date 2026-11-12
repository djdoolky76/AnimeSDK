#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/MapPregressShowType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapProgressConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA48240)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA47910)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EA477A0)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EA47490)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EA47740)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EA47AA0)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA47510)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA47AE0)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA47CB0)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EA47ED0)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EA47C10)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA47B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapProgressConfigExcelTable_TypeDefinitionIndex = 14158;

	class MapProgressConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MapProgressConfigExcelTable")->GetStaticField(0x40DE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MapProgressConfigExcelTable")->GetStaticField(0x40DE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapProgressConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapProgressConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "MapProgressConfigExcelTable")->GetStaticField(0x40DF0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MapProgressConfigExcelTable")->GetStaticField(0xDE00);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MapProgressConfigExcelTable")->GetStaticField(0xDE01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapProgressConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapProgressConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapProgressConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapProgressConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MapProgressConfigRow* GetData(::RPG::GameCore::MapPregressShowType a1)
		{
			return ((::RPG::GameCore::MapProgressConfigRow*(*)(::RPG::GameCore::MapPregressShowType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MapProgressConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MapProgressConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
