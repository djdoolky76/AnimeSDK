#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class InControlMouseTypeInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9990B0)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E998850)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E9986E0)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E9983D0)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E998680)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E9989C0)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E998450)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E998A00)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E998BD0)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E998D90)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E998B30)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E998A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InControlMouseTypeInfoExcelTable_TypeDefinitionIndex = 13977;

	class InControlMouseTypeInfoExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "InControlMouseTypeInfoExcelTable")->GetStaticField(0x34DE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "InControlMouseTypeInfoExcelTable")->GetStaticField(0x34DE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlMouseTypeInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlMouseTypeInfoRow*>**)UnitySDK::FromName("RPG.GameCore", "InControlMouseTypeInfoExcelTable")->GetStaticField(0x34DF0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "InControlMouseTypeInfoExcelTable")->GetStaticField(0xB360);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "InControlMouseTypeInfoExcelTable")->GetStaticField(0xB361);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlMouseTypeInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlMouseTypeInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlMouseTypeInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlMouseTypeInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::InControlMouseTypeInfoRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::InControlMouseTypeInfoRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::InControlMouseTypeInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::InControlMouseTypeInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
