#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageInvasionBuffRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B4DB0)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E3B4C60)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E3B4B30)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E3B4A50)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E3B4AD0)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E3B4100)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E3B4140)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E3B4370)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E3B4540)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E3B4730)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E3B44A0)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E3B4400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInvasionBuffExcelTable_TypeDefinitionIndex = 15320;

	class StageInvasionBuffExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "StageInvasionBuffExcelTable")->GetStaticField(0x19C10);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "StageInvasionBuffExcelTable")->GetStaticField(0x19C18);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionBuffRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionBuffRow*>**)UnitySDK::FromName("RPG.GameCore", "StageInvasionBuffExcelTable")->GetStaticField(0x19C20);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "StageInvasionBuffExcelTable")->GetStaticField(0x5B80);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "StageInvasionBuffExcelTable")->GetStaticField(0x5B81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StageInvasionBuffRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageInvasionBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionBuffRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionBuffRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionBuffRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionBuffRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StageInvasionBuffRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StageInvasionBuffRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_GETDATA_OFFSET))(a1);
		}

	};
}
