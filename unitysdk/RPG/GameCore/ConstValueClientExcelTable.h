#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConstValueClientRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5D7A30)
#define RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D5D7200)
#define RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D5D7090)
#define RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D5D6D80)
#define RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D5D7030)
#define RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D5D7370)
#define RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5D6E00)
#define RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5D73B0)
#define RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5D7580)
#define RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D5D7710)
#define RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D5D74E0)
#define RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5D7440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConstValueClientExcelTable_TypeDefinitionIndex = 13088;

	class ConstValueClientExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "ConstValueClientExcelTable")->GetStaticField(0x1C930);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueClientRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueClientRow*>**)UnitySDK::FromName("RPG.GameCore", "ConstValueClientExcelTable")->GetStaticField(0x1C938);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ConstValueClientExcelTable")->GetStaticField(0x1C940);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ConstValueClientExcelTable")->GetStaticField(0x6610);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ConstValueClientExcelTable")->GetStaticField(0x6611);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueClientRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueClientRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueClientRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueClientRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ConstValueClientRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::ConstValueClientRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ConstValueClientRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ConstValueClientRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECLIENTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
