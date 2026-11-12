#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FuncEntranceListConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E900F80)
#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E9005E0)
#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E900470)
#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E900160)
#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E900410)
#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E900730)
#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E9001E0)
#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E900770)
#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E900940)
#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E900C60)
#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E9008A0)
#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E900800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FuncEntranceListConfigExcelTable_TypeDefinitionIndex = 13383;

	class FuncEntranceListConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncEntranceListConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncEntranceListConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "FuncEntranceListConfigExcelTable")->GetStaticField(0x280B0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "FuncEntranceListConfigExcelTable")->GetStaticField(0x280B8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "FuncEntranceListConfigExcelTable")->GetStaticField(0x280C0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "FuncEntranceListConfigExcelTable")->GetStaticField(0x8300);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "FuncEntranceListConfigExcelTable")->GetStaticField(0x8301);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncEntranceListConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncEntranceListConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncEntranceListConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncEntranceListConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::FuncEntranceListConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FuncEntranceListConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::FuncEntranceListConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FuncEntranceListConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
