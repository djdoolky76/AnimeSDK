#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SysMailGotoConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E694BA0)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E694A50)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E6948E0)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E694800)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E694880)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E693EB0)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E693EF0)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E694120)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E6942F0)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E6944E0)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E694250)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6941B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SysMailGotoConfigExcelTable_TypeDefinitionIndex = 15368;

	class SysMailGotoConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "SysMailGotoConfigExcelTable")->GetStaticField(0x1EAA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailGotoConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailGotoConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "SysMailGotoConfigExcelTable")->GetStaticField(0x1EAA8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "SysMailGotoConfigExcelTable")->GetStaticField(0x1EAB0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "SysMailGotoConfigExcelTable")->GetStaticField(0x6820);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "SysMailGotoConfigExcelTable")->GetStaticField(0x6821);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SysMailGotoConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SysMailGotoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailGotoConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailGotoConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailGotoConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailGotoConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SysMailGotoConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SysMailGotoConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

	};
}
