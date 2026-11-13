#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FightFestStageInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8464D0)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E8458E0)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E845770)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E845460)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E845710)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E845A30)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E8454E0)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E845A70)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E845C40)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E8461B0)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E845BA0)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E845B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestStageInfoExcelTable_TypeDefinitionIndex = 13356;

	class FightFestStageInfoExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "FightFestStageInfoExcelTable")->GetStaticField(0x227F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestStageInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestStageInfoRow*>**)UnitySDK::FromName("RPG.GameCore", "FightFestStageInfoExcelTable")->GetStaticField(0x227F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "FightFestStageInfoExcelTable")->GetStaticField(0x22800);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "FightFestStageInfoExcelTable")->GetStaticField(0x7D60);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "FightFestStageInfoExcelTable")->GetStaticField(0x7D61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestStageInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestStageInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestStageInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestStageInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::FightFestStageInfoRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FightFestStageInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::FightFestStageInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FightFestStageInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
