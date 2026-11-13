#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IntroDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INTRODATAEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE964E0)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EE95B90)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EE95A20)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EE95710)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EE959C0)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EE95CE0)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE95790)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE95D20)
#define RPG_GAMECORE_INTRODATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE95EF0)
#define RPG_GAMECORE_INTRODATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EE961C0)
#define RPG_GAMECORE_INTRODATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EE95E50)
#define RPG_GAMECORE_INTRODATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE95DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IntroDataExcelTable_TypeDefinitionIndex = 13987;

	class IntroDataExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "IntroDataExcelTable")->GetStaticField(0x39900);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*>**)UnitySDK::FromName("RPG.GameCore", "IntroDataExcelTable")->GetStaticField(0x39908);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "IntroDataExcelTable")->GetStaticField(0x39910);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "IntroDataExcelTable")->GetStaticField(0xB6A0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "IntroDataExcelTable")->GetStaticField(0xB6A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::IntroDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IntroDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::IntroDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IntroDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
