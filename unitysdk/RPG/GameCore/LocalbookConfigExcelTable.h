#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LocalbookConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F073590)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F072BB0)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F072A80)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1F072770)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1F072A20)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1F072D00)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F0727F0)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1F072D40)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F072F10)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1F073270)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1F072E70)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F072DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LocalbookConfigExcelTable_TypeDefinitionIndex = 12980;

	class LocalbookConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "LocalbookConfigExcelTable")->GetStaticField(0x375C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "LocalbookConfigExcelTable")->GetStaticField(0x375C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LocalbookConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LocalbookConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "LocalbookConfigExcelTable")->GetStaticField(0x375D0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "LocalbookConfigExcelTable")->GetStaticField(0xADB0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "LocalbookConfigExcelTable")->GetStaticField(0xADB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LocalbookConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LocalbookConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LocalbookConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LocalbookConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::LocalbookConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LocalbookConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::LocalbookConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::LocalbookConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
