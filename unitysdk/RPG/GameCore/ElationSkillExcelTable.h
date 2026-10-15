#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElationSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D605C10)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D605420)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D6052B0)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D604FA0)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D605250)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D605570)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D605020)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D6055B0)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D605780)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D6058F0)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D6056E0)
#define RPG_GAMECORE_ELATIONSKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D605640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationSkillExcelTable_TypeDefinitionIndex = 13220;

	class ElationSkillExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ElationSkillExcelTable")->GetStaticField(0x220C0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "ElationSkillExcelTable")->GetStaticField(0x220C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationSkillRow*>**)UnitySDK::FromName("RPG.GameCore", "ElationSkillExcelTable")->GetStaticField(0x220D0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ElationSkillExcelTable")->GetStaticField(0x7740);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ElationSkillExcelTable")->GetStaticField(0x7741);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationSkillRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationSkillRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationSkillRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ElationSkillRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ElationSkillRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ElationSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ElationSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ElationSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
