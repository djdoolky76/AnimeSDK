#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResourceOverallRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBD7410)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EBD6C00)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EBD6A90)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EBD6780)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EBD6A30)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EBD6D70)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EBD6800)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EBD6DB0)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EBD6F80)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EBD70F0)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EBD6EE0)
#define RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EBD6E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResourceOverallExcelTable_TypeDefinitionIndex = 14811;

	class ResourceOverallExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ResourceOverallExcelTable")->GetStaticField(0x2D400);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceOverallRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceOverallRow*>**)UnitySDK::FromName("RPG.GameCore", "ResourceOverallExcelTable")->GetStaticField(0x2D408);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "ResourceOverallExcelTable")->GetStaticField(0x2D410);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ResourceOverallExcelTable")->GetStaticField(0x9620);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ResourceOverallExcelTable")->GetStaticField(0x9621);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceOverallRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceOverallRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceOverallRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceOverallRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ResourceOverallRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::ResourceOverallRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ResourceOverallRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ResourceOverallRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
