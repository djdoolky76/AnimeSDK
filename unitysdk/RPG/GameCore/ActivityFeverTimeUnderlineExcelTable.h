#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFeverTimeUnderlineRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D362290)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D361A10)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3618A0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D361590)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D361840)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D361BA0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D361610)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D361BE0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D361DB0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D361F20)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D361D10)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D361C70)

namespace RPG::GameCore
{
	class ActivityFeverTimeUnderlineExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "ActivityFeverTimeUnderlineExcelTable")->GetStaticField(0x40150);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ActivityFeverTimeUnderlineExcelTable")->GetStaticField(0x40158);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*>**)UnitySDK::FromName("RPG.GameCore", "ActivityFeverTimeUnderlineExcelTable")->GetStaticField(0x40160);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ActivityFeverTimeUnderlineExcelTable")->GetStaticField(0xDAE0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ActivityFeverTimeUnderlineExcelTable")->GetStaticField(0xDAE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFeverTimeUnderlineRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityFeverTimeUnderlineRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityFeverTimeUnderlineRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityFeverTimeUnderlineRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityFeverTimeUnderlineRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEUNDERLINEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
