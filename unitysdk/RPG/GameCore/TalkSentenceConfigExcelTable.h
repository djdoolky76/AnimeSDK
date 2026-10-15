#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/TalkSentenceConfigExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class TalkSentenceConfigRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB56F20)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DB56CF0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB56AA0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1DB56890)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DB569B0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DB56A30)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DB557B0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB557F0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1DB55B90)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1DB56940)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_SETROWDATA_OFFSET UNITYSDK_OFFSET(0x1DB56D80)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1DB55EA0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB559A0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB563C0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DB56410)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DB56360)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB55B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkSentenceConfigExcelTable_TypeDefinitionIndex = 15220;

	class TalkSentenceConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::TalkSentenceConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::TalkSentenceConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "TalkSentenceConfigExcelTable")->GetStaticField(0x23460);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "TalkSentenceConfigExcelTable")->GetStaticField(0x23468);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "TalkSentenceConfigExcelTable")->GetStaticField(0x23470);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "TalkSentenceConfigExcelTable")->GetStaticField(0x23478);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::TalkSentenceConfigRow*>** StaticGet__extDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::TalkSentenceConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "TalkSentenceConfigExcelTable")->GetStaticField(0x23480);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::TalkSentenceConfigRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::TalkSentenceConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "TalkSentenceConfigExcelTable")->GetStaticField(0x23488);
		}

		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "TalkSentenceConfigExcelTable")->GetStaticField(0x23490);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "TalkSentenceConfigExcelTable")->GetStaticField(0x23498);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "TalkSentenceConfigExcelTable")->GetStaticField(0x7D70);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "TalkSentenceConfigExcelTable")->GetStaticField(0x7D71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple a1, ::RPG::GameCore::TalkSentenceConfigRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple, ::RPG::GameCore::TalkSentenceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey a1, ::RPG::GameCore::TalkSentenceConfigRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TalkSentenceConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TalkSentenceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::TalkSentenceConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::TalkSentenceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::TalkSentenceConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::TalkSentenceConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TalkSentenceConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TalkSentenceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Void SetRowData(::RPG::GameCore::TalkSentenceConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TalkSentenceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_SETROWDATA_OFFSET))(a1);
		}

	};
}
