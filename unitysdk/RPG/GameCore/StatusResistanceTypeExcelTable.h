#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StatusResistanceTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED35680)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1ED34EA0)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1ED34D30)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1ED34A20)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1ED34CD0)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1ED34FF0)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1ED34AA0)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1ED35030)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1ED35200)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1ED35360)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1ED35160)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1ED350C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatusResistanceTypeExcelTable_TypeDefinitionIndex = 14349;

	class StatusResistanceTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "StatusResistanceTypeExcelTable")->GetStaticField(0xE290);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "StatusResistanceTypeExcelTable")->GetStaticField(0xE298);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*>**)UnitySDK::FromName("RPG.GameCore", "StatusResistanceTypeExcelTable")->GetStaticField(0xE2A0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "StatusResistanceTypeExcelTable")->GetStaticField(0x2F30);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "StatusResistanceTypeExcelTable")->GetStaticField(0x2F31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StatusResistanceTypeRow* GetData(::RPG::GameCore::ModifierBehaviorFlag a1)
		{
			return ((::RPG::GameCore::StatusResistanceTypeRow*(*)(::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StatusResistanceTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StatusResistanceTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
