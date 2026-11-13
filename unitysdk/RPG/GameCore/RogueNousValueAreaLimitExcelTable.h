#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousValueAreaLimitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x207B4190)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x207B3880)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x207B3710)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x207B3400)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x207B36B0)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x207B3A10)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x207B3480)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x207B3A50)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x207B3C20)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x207B3E20)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x207B3B80)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x207B3AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousValueAreaLimitExcelTable_TypeDefinitionIndex = 15074;

	class RogueNousValueAreaLimitExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RogueNousValueAreaLimitExcelTable")->GetStaticField(0x52100);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RogueNousValueAreaLimitExcelTable")->GetStaticField(0x52108);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousValueAreaLimitRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousValueAreaLimitRow*>**)UnitySDK::FromName("RPG.GameCore", "RogueNousValueAreaLimitExcelTable")->GetStaticField(0x52110);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RogueNousValueAreaLimitExcelTable")->GetStaticField(0x11B40);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "RogueNousValueAreaLimitExcelTable")->GetStaticField(0x11B41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousValueAreaLimitRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousValueAreaLimitRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousValueAreaLimitRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousValueAreaLimitRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousValueAreaLimitRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousValueAreaLimitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousValueAreaLimitRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousValueAreaLimitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
