#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAFCB40)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DAFCAA0)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DAFC880)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1DAFC670)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DAFC790)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DAFC810)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DAFA0E0)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DAFA120)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1DAFA4C0)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1DAFC720)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1DAFB140)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DAFA2D0)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAFC120)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DAFC170)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DAFC0C0)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DAFA460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarExcelTable_TypeDefinitionIndex = 15120;

	class SpecialAvatarExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "SpecialAvatarExcelTable")->GetStaticField(0x1A740);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "SpecialAvatarExcelTable")->GetStaticField(0x1A748);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "SpecialAvatarExcelTable")->GetStaticField(0x1A750);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::SpecialAvatarRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::SpecialAvatarRow*>**)UnitySDK::FromName("RPG.GameCore", "SpecialAvatarExcelTable")->GetStaticField(0x1A758);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "SpecialAvatarExcelTable")->GetStaticField(0x1A760);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::SpecialAvatarRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::SpecialAvatarRow*>**)UnitySDK::FromName("RPG.GameCore", "SpecialAvatarExcelTable")->GetStaticField(0x1A768);
		}

		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "SpecialAvatarExcelTable")->GetStaticField(0x1A770);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "SpecialAvatarExcelTable")->GetStaticField(0x6010);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "SpecialAvatarExcelTable")->GetStaticField(0x6011);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple a1, ::RPG::GameCore::SpecialAvatarRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::SpecialAvatarExcelTable_IndexKey a1, ::RPG::GameCore::SpecialAvatarRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SpecialAvatarExcelTable_IndexKey, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpecialAvatarRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::SpecialAvatarRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::SpecialAvatarRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::SpecialAvatarRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::SpecialAvatarRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpecialAvatarRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::SpecialAvatarRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

	};
}
