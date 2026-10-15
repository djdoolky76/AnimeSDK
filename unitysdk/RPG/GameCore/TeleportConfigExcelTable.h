#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeleportConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB7F4D0)
#define RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DB7EBD0)
#define RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB7EA60)
#define RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DB7E750)
#define RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DB7EA00)
#define RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DB7ED20)
#define RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB7E7D0)
#define RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB7ED60)
#define RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB7EF30)
#define RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DB7F1B0)
#define RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DB7EE90)
#define RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB7EDF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeleportConfigExcelTable_TypeDefinitionIndex = 12581;

	class TeleportConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeleportConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeleportConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "TeleportConfigExcelTable")->GetStaticField(0x2C7C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "TeleportConfigExcelTable")->GetStaticField(0x2C7C8);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "TeleportConfigExcelTable")->GetStaticField(0x2C7D0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "TeleportConfigExcelTable")->GetStaticField(0x8C40);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "TeleportConfigExcelTable")->GetStaticField(0x8C41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeleportConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeleportConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeleportConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeleportConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TeleportConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TeleportConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TeleportConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TeleportConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
