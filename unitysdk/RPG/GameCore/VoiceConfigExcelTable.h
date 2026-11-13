#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/VoiceConfigExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class VoiceConfigRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED50580)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1ED504F0)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1ED502A0)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1ED50090)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1ED501B0)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1ED50230)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1ED4F090)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1ED4F0D0)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1ED4F470)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1ED50140)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1ED4F710)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1ED4F280)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1ED4FBC0)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1ED4FC10)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1ED4FB60)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1ED4F410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VoiceConfigExcelTable_TypeDefinitionIndex = 15581;

	class VoiceConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "VoiceConfigExcelTable")->GetStaticField(0x2D420);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "VoiceConfigExcelTable")->GetStaticField(0x2D428);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::VoiceConfigRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::VoiceConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "VoiceConfigExcelTable")->GetStaticField(0x2D430);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "VoiceConfigExcelTable")->GetStaticField(0x2D438);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "VoiceConfigExcelTable")->GetStaticField(0x2D440);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::VoiceConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::VoiceConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "VoiceConfigExcelTable")->GetStaticField(0x2D448);
		}

		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "VoiceConfigExcelTable")->GetStaticField(0x2D450);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "VoiceConfigExcelTable")->GetStaticField(0x90A0);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "VoiceConfigExcelTable")->GetStaticField(0x90A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::VoiceConfigRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::VoiceConfigExcelTable_IndexKey a1, ::RPG::GameCore::VoiceConfigRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::VoiceConfigExcelTable_IndexKey, ::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::VoiceConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::VoiceConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::VoiceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::VoiceConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::VoiceConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::VoiceConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::VoiceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

	};
}
