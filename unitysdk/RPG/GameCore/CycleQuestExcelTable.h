#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CycleQuestRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5ECAC0)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETCYCLEIDBYQUESTID_OFFSET UNITYSDK_OFFSET(0x1D5EC530)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D5EBB00)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D5EB990)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D5EB680)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D5EB930)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D5EBC50)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5EB700)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1D5ECA30)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5EBC90)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5EBE60)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D5EC210)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D5EBDC0)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5EBD20)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D5EC5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CycleQuestExcelTable_TypeDefinitionIndex = 14575;

	class CycleQuestExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "CycleQuestExcelTable")->GetStaticField(0x1DB50);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "CycleQuestExcelTable")->GetStaticField(0x1DB58);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__QuestToCycle()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "CycleQuestExcelTable")->GetStaticField(0x1DB60);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*>**)UnitySDK::FromName("RPG.GameCore", "CycleQuestExcelTable")->GetStaticField(0x1DB68);
		}

		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "CycleQuestExcelTable")->GetStaticField(0x6C50);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "CycleQuestExcelTable")->GetStaticField(0x6C51);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "CycleQuestExcelTable")->GetStaticField(0x6C52);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::CycleQuestRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CycleQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::CycleQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CycleQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::UInt32 GetCycleIDByQuestID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETCYCLEIDBYQUESTID_OFFSET))(a1);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_UNLOADALL_OFFSET))();
		}

	};
}
