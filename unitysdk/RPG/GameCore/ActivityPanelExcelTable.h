#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityPanelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E51E7F0)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E51E120)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E51DFB0)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E51DCA0)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E51DF50)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E51E270)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E51DD20)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E51E2B0)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E51E480)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E51E4D0)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E51E3E0)
#define RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E51E340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPanelExcelTable_TypeDefinitionIndex = 11255;

	class ActivityPanelExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "ActivityPanelExcelTable")->GetStaticField(0x4C470);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ActivityPanelExcelTable")->GetStaticField(0x4C478);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*>**)UnitySDK::FromName("RPG.GameCore", "ActivityPanelExcelTable")->GetStaticField(0x4C480);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ActivityPanelExcelTable")->GetStaticField(0xE8B0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ActivityPanelExcelTable")->GetStaticField(0xE8B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityPanelRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityPanelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityPanelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityPanelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
