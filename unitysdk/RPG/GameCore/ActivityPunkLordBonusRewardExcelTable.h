#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityPunkLordBonusRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E57FB70)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E57F250)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E57F0E0)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E57EDD0)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E57F080)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E57F3E0)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E57EE50)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E57F420)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E57F5F0)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E57F800)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E57F550)
#define RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E57F4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPunkLordBonusRewardExcelTable_TypeDefinitionIndex = 12351;

	class ActivityPunkLordBonusRewardExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordBonusRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordBonusRewardRow*>**)UnitySDK::FromName("RPG.GameCore", "ActivityPunkLordBonusRewardExcelTable")->GetStaticField(0x39CE0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "ActivityPunkLordBonusRewardExcelTable")->GetStaticField(0x39CE8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ActivityPunkLordBonusRewardExcelTable")->GetStaticField(0x39CF0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ActivityPunkLordBonusRewardExcelTable")->GetStaticField(0xCB20);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ActivityPunkLordBonusRewardExcelTable")->GetStaticField(0xCB21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordBonusRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordBonusRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordBonusRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordBonusRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityPunkLordBonusRewardRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityPunkLordBonusRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityPunkLordBonusRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityPunkLordBonusRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDBONUSREWARDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
