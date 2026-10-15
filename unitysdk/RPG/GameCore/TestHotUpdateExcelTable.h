#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TestHotUpdateRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB80DD0)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DB80C40)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB80AD0)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DB809F0)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DB80A70)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DB800C0)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB80100)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB80330)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB80500)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DB80680)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DB80460)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB803C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TestHotUpdateExcelTable_TypeDefinitionIndex = 15282;

	class TestHotUpdateExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "TestHotUpdateExcelTable")->GetStaticField(0x2C920);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "TestHotUpdateExcelTable")->GetStaticField(0x2C928);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TestHotUpdateRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TestHotUpdateRow*>**)UnitySDK::FromName("RPG.GameCore", "TestHotUpdateExcelTable")->GetStaticField(0x2C930);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "TestHotUpdateExcelTable")->GetStaticField(0x8C80);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "TestHotUpdateExcelTable")->GetStaticField(0x8C81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TestHotUpdateRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TestHotUpdateRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TestHotUpdateRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TestHotUpdateRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TestHotUpdateRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TestHotUpdateRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TestHotUpdateRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TestHotUpdateRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

	};
}
