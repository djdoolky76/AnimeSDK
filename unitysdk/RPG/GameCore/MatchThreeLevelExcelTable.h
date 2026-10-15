#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeLevelRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8572F0)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D856410)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D8562E0)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D855FD0)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D856280)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D8565B0)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D856050)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8565F0)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8567C0)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D856F90)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D856720)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D856680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeLevelExcelTable_TypeDefinitionIndex = 11898;

	class MatchThreeLevelExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MatchThreeLevelExcelTable")->GetStaticField(0x3A730);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "MatchThreeLevelExcelTable")->GetStaticField(0x3A738);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*>**)UnitySDK::FromName("RPG.GameCore", "MatchThreeLevelExcelTable")->GetStaticField(0x3A740);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MatchThreeLevelExcelTable")->GetStaticField(0xC750);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MatchThreeLevelExcelTable")->GetStaticField(0xC751);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeLevelRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MatchThreeLevelRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MatchThreeLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
