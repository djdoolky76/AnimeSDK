#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RecordRefreshRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D974D60)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D974410)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D9742A0)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D973F90)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D974240)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D9745A0)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D974010)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9745E0)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9747B0)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D9749F0)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D974710)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D974670)

namespace RPG::GameCore
{
	class RecordRefreshExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RecordRefreshExcelTable")->GetStaticField(0x4E3E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecordRefreshRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecordRefreshRow*>**)UnitySDK::FromName("RPG.GameCore", "RecordRefreshExcelTable")->GetStaticField(0x4E3E8);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "RecordRefreshExcelTable")->GetStaticField(0x4E3F0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RecordRefreshExcelTable")->GetStaticField(0x11F90);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RecordRefreshExcelTable")->GetStaticField(0x11F91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecordRefreshRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecordRefreshRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecordRefreshRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecordRefreshRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RecordRefreshRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RecordRefreshRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RecordRefreshRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RecordRefreshRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
