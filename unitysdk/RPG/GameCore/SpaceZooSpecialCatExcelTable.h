#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpaceZooSpecialCatRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAF9CD0)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DAF9170)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DAF9040)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DAF8D30)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DAF8FE0)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DAF92C0)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DAF8DB0)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DAF9300)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAF94D0)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DAF99B0)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DAF9430)
#define RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DAF9390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooSpecialCatExcelTable_TypeDefinitionIndex = 12369;

	class SpaceZooSpecialCatExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "SpaceZooSpecialCatExcelTable")->GetStaticField(0x1A600);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*>**)UnitySDK::FromName("RPG.GameCore", "SpaceZooSpecialCatExcelTable")->GetStaticField(0x1A608);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "SpaceZooSpecialCatExcelTable")->GetStaticField(0x1A610);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "SpaceZooSpecialCatExcelTable")->GetStaticField(0x5FC0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "SpaceZooSpecialCatExcelTable")->GetStaticField(0x5FC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialCatRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooSpecialCatRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpaceZooSpecialCatRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpaceZooSpecialCatRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooSpecialCatRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALCATEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
