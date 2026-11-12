#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PasterConfigRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0BA50)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETCOMMONPASTERIDS_OFFSET UNITYSDK_OFFSET(0x1EB0B870)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EB0AE50)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETDIARYIMAGEPASTERIDS_OFFSET UNITYSDK_OFFSET(0x1EB0B0B0)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETDIARYTEXTPASTERIDS_OFFSET UNITYSDK_OFFSET(0x1EB0B7B0)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EB0AD20)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EB0AC40)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EB0ACC0)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EB0A120)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB0A160)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1EB0AFA0)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB0A390)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE__ADDDIARYPASTER_OFFSET UNITYSDK_OFFSET(0x1EB0B8B0)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB0A560)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EB0A920)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EB0A4C0)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB0A420)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB0B170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PasterConfigExcelTable_TypeDefinitionIndex = 15532;

	class PasterConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "PasterConfigExcelTable")->GetStaticField(0x53230);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PasterConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PasterConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "PasterConfigExcelTable")->GetStaticField(0x53238);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__DiaryTextPasterIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("RPG.GameCore", "PasterConfigExcelTable")->GetStaticField(0x53240);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "PasterConfigExcelTable")->GetStaticField(0x53248);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__DiaryImagePasterIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("RPG.GameCore", "PasterConfigExcelTable")->GetStaticField(0x53250);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__CommonPasterIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "PasterConfigExcelTable")->GetStaticField(0x53258);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "PasterConfigExcelTable")->GetStaticField(0x10280);
		}

		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "PasterConfigExcelTable")->GetStaticField(0x10281);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "PasterConfigExcelTable")->GetStaticField(0x10282);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PasterConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PasterConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PasterConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PasterConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PasterConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PasterConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PasterConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PasterConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetDiaryImagePasterIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETDIARYIMAGEPASTERIDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetDiaryTextPasterIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETDIARYTEXTPASTERIDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetCommonPasterIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETCOMMONPASTERIDS_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void _AddDiaryPaster(::System::Object* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE__ADDDIARYPASTER_OFFSET))(a1, a2, a3);
		}

	};
}
