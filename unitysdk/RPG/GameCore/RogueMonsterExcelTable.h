#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMonsterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x207A5B50)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x207A52E0)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x207A5170)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x207A4E60)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x207A5110)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x207A5430)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x207A4EE0)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x207A5470)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x207A5640)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x207A5830)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x207A55A0)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x207A5500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMonsterExcelTable_TypeDefinitionIndex = 14842;

	class RogueMonsterExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*>**)UnitySDK::FromName("RPG.GameCore", "RogueMonsterExcelTable")->GetStaticField(0x51510);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RogueMonsterExcelTable")->GetStaticField(0x51518);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RogueMonsterExcelTable")->GetStaticField(0x51520);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RogueMonsterExcelTable")->GetStaticField(0x118A0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RogueMonsterExcelTable")->GetStaticField(0x118A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueMonsterRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMonsterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueMonsterRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
