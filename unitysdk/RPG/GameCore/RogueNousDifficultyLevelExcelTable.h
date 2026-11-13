#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousDifficultyLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x207AC280)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x207AB880)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x207AB710)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x207AB400)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x207AB6B0)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x207ABA10)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x207AB480)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x207ABA50)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x207ABC20)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x207ABF10)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x207ABB80)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x207ABAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDifficultyLevelExcelTable_TypeDefinitionIndex = 15087;

	class RogueNousDifficultyLevelExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RogueNousDifficultyLevelExcelTable")->GetStaticField(0x51B50);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RogueNousDifficultyLevelExcelTable")->GetStaticField(0x51B58);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDifficultyLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDifficultyLevelRow*>**)UnitySDK::FromName("RPG.GameCore", "RogueNousDifficultyLevelExcelTable")->GetStaticField(0x51B60);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RogueNousDifficultyLevelExcelTable")->GetStaticField(0x119D0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RogueNousDifficultyLevelExcelTable")->GetStaticField(0x119D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDifficultyLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDifficultyLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDifficultyLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDifficultyLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousDifficultyLevelRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousDifficultyLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousDifficultyLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousDifficultyLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
