#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusUserRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7676B0)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D766D80)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D766C10)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D766900)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D766BB0)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D766F10)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D766980)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D766F50)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D767120)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D767340)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D767080)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D766FE0)

namespace RPG::GameCore
{
	class HeliobusUserExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusUserRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusUserRow*>**)UnitySDK::FromName("RPG.GameCore", "HeliobusUserExcelTable")->GetStaticField(0x2AF50);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "HeliobusUserExcelTable")->GetStaticField(0x2AF58);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "HeliobusUserExcelTable")->GetStaticField(0x2AF60);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "HeliobusUserExcelTable")->GetStaticField(0x8850);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "HeliobusUserExcelTable")->GetStaticField(0x8851);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusUserRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusUserRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusUserRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusUserRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusUserRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeliobusUserRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusUserRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusUserRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
