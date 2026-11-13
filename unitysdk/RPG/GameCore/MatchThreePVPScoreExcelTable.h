#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreePVPScoreRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5F0F0)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EB5E550)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EB5E3E0)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EB5E0D0)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EB5E380)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EB5E6E0)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB5E150)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB5E720)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB5E8F0)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EB5ED80)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EB5E850)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EB5E7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreePVPScoreExcelTable_TypeDefinitionIndex = 11967;

	class MatchThreePVPScoreExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePVPScoreRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePVPScoreRow*>**)UnitySDK::FromName("RPG.GameCore", "MatchThreePVPScoreExcelTable")->GetStaticField(0x3C5D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MatchThreePVPScoreExcelTable")->GetStaticField(0x3C5D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MatchThreePVPScoreExcelTable")->GetStaticField(0x3C5E0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MatchThreePVPScoreExcelTable")->GetStaticField(0xC030);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MatchThreePVPScoreExcelTable")->GetStaticField(0xC031);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePVPScoreRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePVPScoreRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePVPScoreRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePVPScoreRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreePVPScoreRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreePVPScoreRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MatchThreePVPScoreRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreePVPScoreRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
