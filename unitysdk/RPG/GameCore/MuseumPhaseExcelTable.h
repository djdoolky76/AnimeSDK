#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumPhaseRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8C7AC0)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D8C7080)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D8C6F50)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D8C6C40)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D8C6EF0)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D8C71D0)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8C6CC0)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8C7210)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8C73E0)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D8C77A0)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D8C7340)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8C72A0)

namespace RPG::GameCore
{
	class MuseumPhaseExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseRow*>**)UnitySDK::FromName("RPG.GameCore", "MuseumPhaseExcelTable")->GetStaticField(0x3CD50);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "MuseumPhaseExcelTable")->GetStaticField(0x3CD58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MuseumPhaseExcelTable")->GetStaticField(0x3CD60);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MuseumPhaseExcelTable")->GetStaticField(0xD0C0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MuseumPhaseExcelTable")->GetStaticField(0xD0C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MuseumPhaseRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MuseumPhaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MuseumPhaseRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumPhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
