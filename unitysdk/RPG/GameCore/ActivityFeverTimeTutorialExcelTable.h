#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFeverTimeTutorialRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D361430)
#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D360B50)
#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3609E0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D3606D0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D360980)
#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D360CE0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D360750)
#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D360D20)
#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D360EF0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D3610C0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D360E50)
#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D360DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFeverTimeTutorialExcelTable_TypeDefinitionIndex = 11592;

	class ActivityFeverTimeTutorialExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "ActivityFeverTimeTutorialExcelTable")->GetStaticField(0x400D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ActivityFeverTimeTutorialExcelTable")->GetStaticField(0x400D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeTutorialRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeTutorialRow*>**)UnitySDK::FromName("RPG.GameCore", "ActivityFeverTimeTutorialExcelTable")->GetStaticField(0x400E0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ActivityFeverTimeTutorialExcelTable")->GetStaticField(0xDAB0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ActivityFeverTimeTutorialExcelTable")->GetStaticField(0xDAB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeTutorialRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeTutorialRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeTutorialRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeTutorialRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityFeverTimeTutorialRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityFeverTimeTutorialRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityFeverTimeTutorialRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityFeverTimeTutorialRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
