#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePassAdvertisementRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D461290)
#define RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D4608E0)
#define RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D460770)
#define RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D460460)
#define RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D460710)
#define RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D460A70)
#define RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D4604E0)
#define RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D460AB0)
#define RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D460C80)
#define RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D460F20)
#define RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D460BE0)
#define RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D460B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePassAdvertisementExcelTable_TypeDefinitionIndex = 12878;

	class BattlePassAdvertisementExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "BattlePassAdvertisementExcelTable")->GetStaticField(0x56360);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "BattlePassAdvertisementExcelTable")->GetStaticField(0x56368);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassAdvertisementRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassAdvertisementRow*>**)UnitySDK::FromName("RPG.GameCore", "BattlePassAdvertisementExcelTable")->GetStaticField(0x56370);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "BattlePassAdvertisementExcelTable")->GetStaticField(0x13100);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "BattlePassAdvertisementExcelTable")->GetStaticField(0x13101);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassAdvertisementRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassAdvertisementRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassAdvertisementRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassAdvertisementRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BattlePassAdvertisementRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattlePassAdvertisementRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BattlePassAdvertisementRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattlePassAdvertisementRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSADVERTISEMENTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
