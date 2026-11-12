#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousEndGameRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC35330)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EC349F0)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EC348C0)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EC345B0)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EC34860)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EC34B80)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EC34630)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EC34BC0)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC34D90)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EC35010)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EC34CF0)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EC34C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousEndGameRewardExcelTable_TypeDefinitionIndex = 15082;

	class RogueNousEndGameRewardExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousEndGameRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousEndGameRewardRow*>**)UnitySDK::FromName("RPG.GameCore", "RogueNousEndGameRewardExcelTable")->GetStaticField(0x5EC20);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RogueNousEndGameRewardExcelTable")->GetStaticField(0x5EC28);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RogueNousEndGameRewardExcelTable")->GetStaticField(0x5EC30);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RogueNousEndGameRewardExcelTable")->GetStaticField(0x140A0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RogueNousEndGameRewardExcelTable")->GetStaticField(0x140A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousEndGameRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousEndGameRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousEndGameRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousEndGameRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousEndGameRewardRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousEndGameRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousEndGameRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousEndGameRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
