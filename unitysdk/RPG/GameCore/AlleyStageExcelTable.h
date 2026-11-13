#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyStageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA5630)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DEA4BD0)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DEA4AA0)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DEA4790)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DEA4A40)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DEA4D60)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DEA4810)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DEA4DA0)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DEA4F70)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DEA5310)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DEA4ED0)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DEA4E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyStageExcelTable_TypeDefinitionIndex = 12706;

	class AlleyStageExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AlleyStageExcelTable")->GetStaticField(0x55F30);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyStageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyStageRow*>**)UnitySDK::FromName("RPG.GameCore", "AlleyStageExcelTable")->GetStaticField(0x55F38);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "AlleyStageExcelTable")->GetStaticField(0x55F40);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "AlleyStageExcelTable")->GetStaticField(0x12540);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AlleyStageExcelTable")->GetStaticField(0x12541);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyStageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyStageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyStageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyStageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyStageRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleyStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyStageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
