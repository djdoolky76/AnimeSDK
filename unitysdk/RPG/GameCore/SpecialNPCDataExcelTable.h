#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpecialNPCDataRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A5570)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E3A5470)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E3A5300)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E3A5220)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E3A52A0)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E3A4740)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E3A4780)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E3A49B0)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E3A4B80)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E3A4DC0)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E3A4AE0)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E3A4A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialNPCDataExcelTable_TypeDefinitionIndex = 15286;

	class SpecialNPCDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "SpecialNPCDataExcelTable")->GetStaticField(0x18880);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::SpecialNPCDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::SpecialNPCDataRow*>**)UnitySDK::FromName("RPG.GameCore", "SpecialNPCDataExcelTable")->GetStaticField(0x18888);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "SpecialNPCDataExcelTable")->GetStaticField(0x18890);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "SpecialNPCDataExcelTable")->GetStaticField(0x5870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpecialNPCDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpecialNPCDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::SpecialNPCDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::SpecialNPCDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::System::Object*, ::RPG::GameCore::SpecialNPCDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::System::Object*, ::RPG::GameCore::SpecialNPCDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpecialNPCDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpecialNPCDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

	};
}
