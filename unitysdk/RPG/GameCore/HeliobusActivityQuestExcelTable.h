#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusActivityQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96DB50)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E96D1A0)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E96D030)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E96CD20)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E96CFD0)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E96D330)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E96CDA0)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E96D370)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E96D540)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E96D7E0)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E96D4A0)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E96D400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusActivityQuestExcelTable_TypeDefinitionIndex = 13917;

	class HeliobusActivityQuestExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "HeliobusActivityQuestExcelTable")->GetStaticField(0x31E50);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "HeliobusActivityQuestExcelTable")->GetStaticField(0x31E58);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusActivityQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusActivityQuestRow*>**)UnitySDK::FromName("RPG.GameCore", "HeliobusActivityQuestExcelTable")->GetStaticField(0x31E60);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "HeliobusActivityQuestExcelTable")->GetStaticField(0xA910);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "HeliobusActivityQuestExcelTable")->GetStaticField(0xA911);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusActivityQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusActivityQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusActivityQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusActivityQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusActivityQuestRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeliobusActivityQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusActivityQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusActivityQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
