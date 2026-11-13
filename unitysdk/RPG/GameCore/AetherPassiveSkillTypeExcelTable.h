#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherPassiveSkillTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE95750)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DE94E70)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DE94D00)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DE949F0)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DE94CA0)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DE95000)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DE94A70)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DE95040)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DE95210)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DE953E0)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DE95170)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DE950D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherPassiveSkillTypeExcelTable_TypeDefinitionIndex = 10945;

	class AetherPassiveSkillTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*>**)UnitySDK::FromName("RPG.GameCore", "AetherPassiveSkillTypeExcelTable")->GetStaticField(0x55040);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AetherPassiveSkillTypeExcelTable")->GetStaticField(0x55048);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "AetherPassiveSkillTypeExcelTable")->GetStaticField(0x55050);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "AetherPassiveSkillTypeExcelTable")->GetStaticField(0x12360);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AetherPassiveSkillTypeExcelTable")->GetStaticField(0x12361);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherPassiveSkillTypeRow* GetData(::RPG::GameCore::AetherPassiveSkillType a1)
		{
			return ((::RPG::GameCore::AetherPassiveSkillTypeRow*(*)(::RPG::GameCore::AetherPassiveSkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherPassiveSkillTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherPassiveSkillTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
