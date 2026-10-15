#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D765580)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D764BC0)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D764A90)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D764780)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D764A30)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D764D10)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D764800)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D764D50)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D764F20)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D765260)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D764E80)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D764DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusSkillExcelTable_TypeDefinitionIndex = 13758;

	class HeliobusSkillExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSkillRow*>**)UnitySDK::FromName("RPG.GameCore", "HeliobusSkillExcelTable")->GetStaticField(0x2AF10);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "HeliobusSkillExcelTable")->GetStaticField(0x2AF18);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "HeliobusSkillExcelTable")->GetStaticField(0x2AF20);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "HeliobusSkillExcelTable")->GetStaticField(0x8830);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "HeliobusSkillExcelTable")->GetStaticField(0x8831);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSkillRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSkillRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSkillRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSkillRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusSkillRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeliobusSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
