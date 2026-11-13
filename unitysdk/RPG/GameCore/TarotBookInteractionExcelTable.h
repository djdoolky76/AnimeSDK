#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookInteractionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5BE270)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F5BE0E0)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F5BDFB0)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1F5BDED0)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1F5BDF50)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1F5BD490)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F5BD4D0)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1F5BD700)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F5BD8D0)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1F5BDBB0)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1F5BD830)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F5BD790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookInteractionExcelTable_TypeDefinitionIndex = 15418;

	class TarotBookInteractionExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookInteractionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookInteractionRow*>**)UnitySDK::FromName("RPG.GameCore", "TarotBookInteractionExcelTable")->GetStaticField(0x22320);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "TarotBookInteractionExcelTable")->GetStaticField(0x22328);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "TarotBookInteractionExcelTable")->GetStaticField(0x22330);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "TarotBookInteractionExcelTable")->GetStaticField(0x7C80);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "TarotBookInteractionExcelTable")->GetStaticField(0x7C81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TarotBookInteractionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookInteractionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookInteractionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookInteractionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookInteractionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookInteractionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookInteractionRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotBookInteractionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GETDATA_OFFSET))(a1);
		}

	};
}
