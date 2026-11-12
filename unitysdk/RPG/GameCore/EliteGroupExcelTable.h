#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EliteGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ELITEGROUPEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8787B0)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E877D90)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E877C20)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E877910)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E877BC0)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E877EE0)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E877990)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E877F20)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E8780F0)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E878490)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E878050)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E877FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EliteGroupExcelTable_TypeDefinitionIndex = 14342;

	class EliteGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EliteGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EliteGroupRow*>**)UnitySDK::FromName("RPG.GameCore", "EliteGroupExcelTable")->GetStaticField(0x1C4F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "EliteGroupExcelTable")->GetStaticField(0x1C4F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "EliteGroupExcelTable")->GetStaticField(0x1C500);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "EliteGroupExcelTable")->GetStaticField(0x5C90);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "EliteGroupExcelTable")->GetStaticField(0x5C91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EliteGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EliteGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EliteGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EliteGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EliteGroupRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EliteGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EliteGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EliteGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
