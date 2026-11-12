#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConstValueFantasticStoryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7EBB60)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E7EB360)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E7EB1F0)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E7EAEE0)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E7EB190)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E7EB4D0)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E7EAF60)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E7EB510)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7EB6E0)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E7EB840)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E7EB640)
#define RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E7EB5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConstValueFantasticStoryExcelTable_TypeDefinitionIndex = 11523;

	class ConstValueFantasticStoryExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueFantasticStoryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueFantasticStoryRow*>**)UnitySDK::FromName("RPG.GameCore", "ConstValueFantasticStoryExcelTable")->GetStaticField(0x13620);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "ConstValueFantasticStoryExcelTable")->GetStaticField(0x13628);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ConstValueFantasticStoryExcelTable")->GetStaticField(0x13630);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ConstValueFantasticStoryExcelTable")->GetStaticField(0x3F80);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ConstValueFantasticStoryExcelTable")->GetStaticField(0x3F81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueFantasticStoryRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueFantasticStoryRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueFantasticStoryRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueFantasticStoryRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ConstValueFantasticStoryRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::ConstValueFantasticStoryRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ConstValueFantasticStoryRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ConstValueFantasticStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEFANTASTICSTORYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
