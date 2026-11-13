#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CumulativeScoreBoardConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFF3840)
#define RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EFF36B0)
#define RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EFF3540)
#define RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EFF3460)
#define RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EFF34E0)
#define RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EFF29E0)
#define RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EFF2A20)
#define RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EFF2C50)
#define RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EFF2E20)
#define RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EFF30F0)
#define RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EFF2D80)
#define RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EFF2CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CumulativeScoreBoardConfigExcelTable_TypeDefinitionIndex = 15344;

	class CumulativeScoreBoardConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "CumulativeScoreBoardConfigExcelTable")->GetStaticField(0x16900);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CumulativeScoreBoardConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CumulativeScoreBoardConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "CumulativeScoreBoardConfigExcelTable")->GetStaticField(0x16908);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "CumulativeScoreBoardConfigExcelTable")->GetStaticField(0x16910);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "CumulativeScoreBoardConfigExcelTable")->GetStaticField(0x5030);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "CumulativeScoreBoardConfigExcelTable")->GetStaticField(0x5031);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::CumulativeScoreBoardConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CumulativeScoreBoardConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CumulativeScoreBoardConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CumulativeScoreBoardConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CumulativeScoreBoardConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CumulativeScoreBoardConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::CumulativeScoreBoardConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CumulativeScoreBoardConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUMULATIVESCOREBOARDCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

	};
}
