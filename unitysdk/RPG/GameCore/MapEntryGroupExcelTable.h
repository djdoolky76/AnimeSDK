#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapEntryGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA46350)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA459F0)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EA45880)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EA45570)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EA45820)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EA45B80)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA455F0)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA45BC0)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA45D90)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EA45FE0)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EA45CF0)
#define RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA45C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapEntryGroupExcelTable_TypeDefinitionIndex = 14218;

	class MapEntryGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MapEntryGroupExcelTable")->GetStaticField(0x40B30);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryGroupRow*>**)UnitySDK::FromName("RPG.GameCore", "MapEntryGroupExcelTable")->GetStaticField(0x40B38);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MapEntryGroupExcelTable")->GetStaticField(0x40B40);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MapEntryGroupExcelTable")->GetStaticField(0xDDC0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MapEntryGroupExcelTable")->GetStaticField(0xDDC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntryGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MapEntryGroupRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MapEntryGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MapEntryGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MapEntryGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
