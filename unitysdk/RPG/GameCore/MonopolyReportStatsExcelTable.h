#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyReportStatsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC7610)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EAC6D30)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EAC6BC0)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EAC68B0)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EAC6B60)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EAC6EC0)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EAC6930)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EAC6F00)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EAC70D0)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EAC72A0)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EAC7030)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EAC6F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyReportStatsExcelTable_TypeDefinitionIndex = 12133;

	class MonopolyReportStatsExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportStatsRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportStatsRow*>**)UnitySDK::FromName("RPG.GameCore", "MonopolyReportStatsExcelTable")->GetStaticField(0x18710);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MonopolyReportStatsExcelTable")->GetStaticField(0x18718);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MonopolyReportStatsExcelTable")->GetStaticField(0x18720);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MonopolyReportStatsExcelTable")->GetStaticField(0x51A0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MonopolyReportStatsExcelTable")->GetStaticField(0x51A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportStatsRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportStatsRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportStatsRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportStatsRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyReportStatsRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonopolyReportStatsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonopolyReportStatsRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyReportStatsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
