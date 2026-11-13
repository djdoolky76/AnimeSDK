#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyReportResultRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E46FD70)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E46F180)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E46F010)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E46ED00)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E46EFB0)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E46F310)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E46ED80)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E46F350)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E46F520)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E46FA00)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E46F480)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E46F3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyReportResultExcelTable_TypeDefinitionIndex = 12135;

	class MonopolyReportResultExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportResultRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportResultRow*>**)UnitySDK::FromName("RPG.GameCore", "MonopolyReportResultExcelTable")->GetStaticField(0x43EF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MonopolyReportResultExcelTable")->GetStaticField(0x43EF8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MonopolyReportResultExcelTable")->GetStaticField(0x43F00);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MonopolyReportResultExcelTable")->GetStaticField(0xD9B0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MonopolyReportResultExcelTable")->GetStaticField(0xD9B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportResultRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportResultRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportResultRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportResultRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyReportResultRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonopolyReportResultRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonopolyReportResultRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyReportResultRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
