#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageItemRaidEntranceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA96230)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA95410)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EA952A0)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_GETRAIDENTRANCEITEMID_OFFSET UNITYSDK_OFFSET(0x1EA95CE0)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EA94F90)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EA95240)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EA95560)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA95010)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1EA961A0)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA955A0)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA95770)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EA959C0)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EA956D0)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EA95630)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EA95D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageItemRaidEntranceExcelTable_TypeDefinitionIndex = 14637;

	class MessageItemRaidEntranceExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MessageItemRaidEntranceExcelTable")->GetStaticField(0x490D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__RaidEntranceItem()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "MessageItemRaidEntranceExcelTable")->GetStaticField(0x490D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemRaidEntranceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemRaidEntranceRow*>**)UnitySDK::FromName("RPG.GameCore", "MessageItemRaidEntranceExcelTable")->GetStaticField(0x490E0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MessageItemRaidEntranceExcelTable")->GetStaticField(0x490E8);
		}

		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MessageItemRaidEntranceExcelTable")->GetStaticField(0xEFF0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MessageItemRaidEntranceExcelTable")->GetStaticField(0xEFF1);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MessageItemRaidEntranceExcelTable")->GetStaticField(0xEFF2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemRaidEntranceRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemRaidEntranceRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemRaidEntranceRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemRaidEntranceRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MessageItemRaidEntranceRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MessageItemRaidEntranceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageItemRaidEntranceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageItemRaidEntranceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::UInt32 GetRaidEntranceItemID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_GETRAIDENTRANCEITEMID_OFFSET))(a1);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_UNLOADALL_OFFSET))();
		}

	};
}
