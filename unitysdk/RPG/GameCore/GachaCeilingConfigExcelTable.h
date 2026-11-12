#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GachaCeilingConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E905090)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E904810)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E9046A0)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E904390)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E904640)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E904960)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E904410)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E9049A0)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E904B70)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E904D70)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E904AD0)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E904A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaCeilingConfigExcelTable_TypeDefinitionIndex = 13427;

	class GachaCeilingConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "GachaCeilingConfigExcelTable")->GetStaticField(0x283E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaCeilingConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaCeilingConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "GachaCeilingConfigExcelTable")->GetStaticField(0x283E8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "GachaCeilingConfigExcelTable")->GetStaticField(0x283F0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "GachaCeilingConfigExcelTable")->GetStaticField(0x83D0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "GachaCeilingConfigExcelTable")->GetStaticField(0x83D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaCeilingConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaCeilingConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaCeilingConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaCeilingConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GachaCeilingConfigRow* GetData(::RPG::GameCore::GachaType a1)
		{
			return ((::RPG::GameCore::GachaCeilingConfigRow*(*)(::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GachaCeilingConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GachaCeilingConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
