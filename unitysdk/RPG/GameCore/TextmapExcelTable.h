#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator64_2.h"
#include "unitysdk/RPG/GameCore/TextmapExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
class POGMNKLPKGM;
namespace RPG::GameCore { class TextmapRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TEXTMAPEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE33380)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EE32A40)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EE327B0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_GETLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1EE32DF0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1EE32520)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EE32620)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EE32740)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EE31720)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_ISREVERSEMAPEMPTY_OFFSET UNITYSDK_OFFSET(0x1EE32610)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE326A0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1EE318F0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1EE325A0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1EE31CA0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE31760)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE322B0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EE32300)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EE32240)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE321E0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE__LOADFULLDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1EE32C70)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE__LOADSTARTUPDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1EE32AF0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE__UNLOADPREVTEXTMAP_OFFSET UNITYSDK_OFFSET(0x1EE32E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextmapExcelTable_TypeDefinitionIndex = 15449;

	class TextmapExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet_UnloadTextmapData()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "TextmapExcelTable")->GetStaticField(0x25F90);
		}

		static ::System::Func_1<::System::String*>** StaticGet_GetCurrentLanguage()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "TextmapExcelTable")->GetStaticField(0x25F98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "TextmapExcelTable")->GetStaticField(0x25FA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::TextmapRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::TextmapRow*>**)UnitySDK::FromName("RPG.GameCore", "TextmapExcelTable")->GetStaticField(0x25FA8);
		}

		static ::System::String** StaticGet_fullPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "TextmapExcelTable")->GetStaticField(0x25FB0);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::TextmapRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::TextmapRow*>**)UnitySDK::FromName("RPG.GameCore", "TextmapExcelTable")->GetStaticField(0x25FB8);
		}

		static ::POGMNKLPKGM** StaticGet_headers()
		{
			return (::POGMNKLPKGM**)UnitySDK::FromName("RPG.GameCore", "TextmapExcelTable")->GetStaticField(0x25FC0);
		}

		static ::System::String** StaticGet_prevSrcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "TextmapExcelTable")->GetStaticField(0x25FC8);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "TextmapExcelTable")->GetStaticField(0x25FD0);
		}

		static ::System::Boolean* StaticGet_IsInStartup()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "TextmapExcelTable")->GetStaticField(0x7A10);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "TextmapExcelTable")->GetStaticField(0x7A11);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "TextmapExcelTable")->GetStaticField(0x7A12);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::TextmapRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::TextmapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::TextmapExcelTable_IndexKey a1, ::RPG::GameCore::TextmapRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TextmapExcelTable_IndexKey, ::RPG::GameCore::TextmapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TextmapRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TextmapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsReverseMapEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_ISREVERSEMAPEMPTY_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::TextmapRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::TextmapRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator64_2<::System::Object*, ::RPG::GameCore::TextmapRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator64_2<::System::Object*, ::RPG::GameCore::TextmapRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TextmapRow* GetData(::RPG::Client::TextID a1)
		{
			return ((::RPG::GameCore::TextmapRow*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::String* GetLanguage()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_GETLANGUAGE_OFFSET))();
		}

		static ::System::Void _LoadStartupDataImpl()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE__LOADSTARTUPDATAIMPL_OFFSET))();
		}

		static ::System::Void _LoadFullDataImpl()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE__LOADFULLDATAIMPL_OFFSET))();
		}

		static ::System::Void _UnloadPrevTextmap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE__UNLOADPREVTEXTMAP_OFFSET))();
		}

	};
}
