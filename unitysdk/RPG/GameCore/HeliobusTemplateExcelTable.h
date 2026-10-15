#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusTemplateRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7667A0)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D765D80)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D765C10)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D765900)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D765BB0)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D765ED0)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D765980)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D765F10)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7660E0)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D766480)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D766040)
#define RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D765FA0)

namespace RPG::GameCore
{
	class HeliobusTemplateExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "HeliobusTemplateExcelTable")->GetStaticField(0x2AF30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "HeliobusTemplateExcelTable")->GetStaticField(0x2AF38);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusTemplateRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusTemplateRow*>**)UnitySDK::FromName("RPG.GameCore", "HeliobusTemplateExcelTable")->GetStaticField(0x2AF40);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "HeliobusTemplateExcelTable")->GetStaticField(0x8840);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "HeliobusTemplateExcelTable")->GetStaticField(0x8841);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusTemplateRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusTemplateRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusTemplateRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusTemplateRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusTemplateRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeliobusTemplateRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusTemplateRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusTemplateRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
