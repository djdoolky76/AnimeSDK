#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NavMapTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E498730)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E497D20)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E497BF0)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E4978E0)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E497B90)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E497EB0)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E497960)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E497EF0)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E4980C0)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E498410)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E498020)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E497F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NavMapTabExcelTable_TypeDefinitionIndex = 14160;

	class NavMapTabExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "NavMapTabExcelTable")->GetStaticField(0x45610);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "NavMapTabExcelTable")->GetStaticField(0x45618);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*>**)UnitySDK::FromName("RPG.GameCore", "NavMapTabExcelTable")->GetStaticField(0x45620);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "NavMapTabExcelTable")->GetStaticField(0xDBC0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "NavMapTabExcelTable")->GetStaticField(0xDBC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::NavMapTabRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::NavMapTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::NavMapTabRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::NavMapTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
