#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpaceZooFeatureConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED06D40)
#define RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1ED06380)
#define RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1ED06250)
#define RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1ED05F40)
#define RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1ED061F0)
#define RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1ED064D0)
#define RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1ED05FC0)
#define RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1ED06510)
#define RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1ED066E0)
#define RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1ED06A20)
#define RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1ED06640)
#define RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1ED065A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooFeatureConfigExcelTable_TypeDefinitionIndex = 12432;

	class SpaceZooFeatureConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "SpaceZooFeatureConfigExcelTable")->GetStaticField(0x1A000);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooFeatureConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooFeatureConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "SpaceZooFeatureConfigExcelTable")->GetStaticField(0x1A008);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "SpaceZooFeatureConfigExcelTable")->GetStaticField(0x1A010);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "SpaceZooFeatureConfigExcelTable")->GetStaticField(0x54D0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "SpaceZooFeatureConfigExcelTable")->GetStaticField(0x54D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooFeatureConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooFeatureConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooFeatureConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooFeatureConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooFeatureConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpaceZooFeatureConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpaceZooFeatureConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooFeatureConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOFEATURECONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
