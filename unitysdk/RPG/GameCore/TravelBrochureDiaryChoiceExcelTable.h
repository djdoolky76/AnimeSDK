#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TravelBrochureDiaryChoiceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3176F0)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E317560)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E3173F0)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E317310)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E317390)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E316900)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E316940)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E316B70)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E316D40)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E316FA0)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E316CA0)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E316C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelBrochureDiaryChoiceExcelTable_TypeDefinitionIndex = 15534;

	class TravelBrochureDiaryChoiceExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "TravelBrochureDiaryChoiceExcelTable")->GetStaticField(0x29260);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryChoiceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryChoiceRow*>**)UnitySDK::FromName("RPG.GameCore", "TravelBrochureDiaryChoiceExcelTable")->GetStaticField(0x29268);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "TravelBrochureDiaryChoiceExcelTable")->GetStaticField(0x29270);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "TravelBrochureDiaryChoiceExcelTable")->GetStaticField(0x8610);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "TravelBrochureDiaryChoiceExcelTable")->GetStaticField(0x8611);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TravelBrochureDiaryChoiceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TravelBrochureDiaryChoiceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryChoiceRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryChoiceRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryChoiceRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryChoiceRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TravelBrochureDiaryChoiceRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TravelBrochureDiaryChoiceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

	};
}
