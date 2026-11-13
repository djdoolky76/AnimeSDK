#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumStatsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48CFA0)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E48C5F0)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E48C480)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E48C170)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E48C420)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E48C7C0)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E48C1F0)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E48C800)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E48C9D0)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E48CC20)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E48C930)
#define RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E48C890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumStatsExcelTable_TypeDefinitionIndex = 14380;

	class MuseumStatsExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MuseumStatsExcelTable")->GetStaticField(0x45240);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MuseumStatsExcelTable")->GetStaticField(0x45248);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStatsRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStatsRow*>**)UnitySDK::FromName("RPG.GameCore", "MuseumStatsExcelTable")->GetStaticField(0x45250);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MuseumStatsExcelTable")->GetStaticField(0xDB60);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MuseumStatsExcelTable")->GetStaticField(0xDB61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStatsRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStatsRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStatsRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStatsRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MuseumStatsRow* GetData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::MuseumStatsRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_GETDATA_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MuseumStatsRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumStatsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMSTATSEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
