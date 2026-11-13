#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryLineUIDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3CDF60)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E3CDDC0)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E3CDC50)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E3CDB70)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E3CDBF0)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E3CD040)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E3CD080)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E3CD2B0)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E3CD480)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E3CD810)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E3CD3E0)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E3CD340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryLineUIDataExcelTable_TypeDefinitionIndex = 15362;

	class StoryLineUIDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "StoryLineUIDataExcelTable")->GetStaticField(0x1A620);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "StoryLineUIDataExcelTable")->GetStaticField(0x1A628);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineUIDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineUIDataRow*>**)UnitySDK::FromName("RPG.GameCore", "StoryLineUIDataExcelTable")->GetStaticField(0x1A630);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "StoryLineUIDataExcelTable")->GetStaticField(0x5DE0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "StoryLineUIDataExcelTable")->GetStaticField(0x5DE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StoryLineUIDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StoryLineUIDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineUIDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineUIDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineUIDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineUIDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StoryLineUIDataRow* GetData(::System::UInt32 a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::RPG::GameCore::StoryLineUIDataRow*(*)(::System::UInt32, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

	};
}
