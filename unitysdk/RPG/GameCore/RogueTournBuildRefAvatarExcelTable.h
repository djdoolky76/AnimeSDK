#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournBuildRefAvatarRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC46A00)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EC46180)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EC46010)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EC45D00)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EC45FB0)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EC46310)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EC45D80)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EC46350)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC46520)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EC46690)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EC46480)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EC463E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuildRefAvatarExcelTable_TypeDefinitionIndex = 15154;

	class RogueTournBuildRefAvatarExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RogueTournBuildRefAvatarExcelTable")->GetStaticField(0xD360);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*>**)UnitySDK::FromName("RPG.GameCore", "RogueTournBuildRefAvatarExcelTable")->GetStaticField(0xD368);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RogueTournBuildRefAvatarExcelTable")->GetStaticField(0xD370);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RogueTournBuildRefAvatarExcelTable")->GetStaticField(0x1A60);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RogueTournBuildRefAvatarExcelTable")->GetStaticField(0x1A61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournBuildRefAvatarRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournBuildRefAvatarRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournBuildRefAvatarRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournBuildRefAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
