#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarServantRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E643450)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E6426A0)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E642530)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E642220)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E6424D0)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E6427F0)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6422A0)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E642830)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E642A00)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E643130)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E642960)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6428C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantExcelTable_TypeDefinitionIndex = 12877;

	class AvatarServantExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "AvatarServantExcelTable")->GetStaticField(0x48D40);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "AvatarServantExcelTable")->GetStaticField(0x48D48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantRow*>**)UnitySDK::FromName("RPG.GameCore", "AvatarServantExcelTable")->GetStaticField(0x48D50);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AvatarServantExcelTable")->GetStaticField(0xEF90);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "AvatarServantExcelTable")->GetStaticField(0xEF91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarServantRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarServantRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarServantRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarServantRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
