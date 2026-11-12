#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyGridRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E605AE0)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E605020)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E604EB0)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E604BA0)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E604E50)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E6051B0)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E604C20)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6051F0)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E6053C0)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E605770)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E605320)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E605280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyGridExcelTable_TypeDefinitionIndex = 12662;

	class AlleyGridExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "AlleyGridExcelTable")->GetStaticField(0x15630);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AlleyGridExcelTable")->GetStaticField(0x15638);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*>**)UnitySDK::FromName("RPG.GameCore", "AlleyGridExcelTable")->GetStaticField(0x15640);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "AlleyGridExcelTable")->GetStaticField(0x4760);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AlleyGridExcelTable")->GetStaticField(0x4761);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyGridRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleyGridRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyGridRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyGridRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
