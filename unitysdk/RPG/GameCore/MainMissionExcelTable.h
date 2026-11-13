#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MainMissionExcelTable_IndexKey.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class MainMissionRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F07E1F0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F07C8A0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F07C650)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1F07C290)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1F07C3B0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1F07C5E0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1F07CBD0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F07C430)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1F07CE00)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1F07C340)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1F07C930)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1F07CC10)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F07DD10)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1F07DD70)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1F07DCB0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1F07CDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionExcelTable_TypeDefinitionIndex = 14300;

	class MainMissionExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::MainMissionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::MainMissionRow*>**)UnitySDK::FromName("RPG.GameCore", "MainMissionExcelTable")->GetStaticField(0x38090);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::MainMissionRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::MainMissionRow*>**)UnitySDK::FromName("RPG.GameCore", "MainMissionExcelTable")->GetStaticField(0x38098);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MainMissionExcelTable")->GetStaticField(0x380A0);
		}

		static ::OFLIAAOJPJC** StaticGet_headers()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("RPG.GameCore", "MainMissionExcelTable")->GetStaticField(0x380A8);
		}

		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "MainMissionExcelTable")->GetStaticField(0x380B0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "MainMissionExcelTable")->GetStaticField(0x380B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MainMissionExcelTable")->GetStaticField(0x380C0);
		}

		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MainMissionExcelTable")->GetStaticField(0xB0B0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MainMissionExcelTable")->GetStaticField(0xB0B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::BFOGLEGJOLK GetLRUInfo()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::MainMissionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::MainMissionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::MainMissionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::MainMissionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MainMissionRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MainMissionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::MainMissionRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::MainMissionExcelTable_IndexKey a1, ::RPG::GameCore::MainMissionRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MainMissionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
