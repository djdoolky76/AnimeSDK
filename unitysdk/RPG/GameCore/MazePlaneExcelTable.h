#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePlaneRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZEPLANEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D868AC0)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D8680F0)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D867FC0)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D867CB0)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D867F60)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D868240)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D867D30)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D868280)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D868450)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D8687A0)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D8683B0)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D868310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePlaneExcelTable_TypeDefinitionIndex = 14046;

	class MazePlaneExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "MazePlaneExcelTable")->GetStaticField(0xD870);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "MazePlaneExcelTable")->GetStaticField(0xD878);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePlaneRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePlaneRow*>**)UnitySDK::FromName("RPG.GameCore", "MazePlaneExcelTable")->GetStaticField(0xD880);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "MazePlaneExcelTable")->GetStaticField(0x2D20);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "MazePlaneExcelTable")->GetStaticField(0x2D21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePlaneRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePlaneRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePlaneRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePlaneRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazePlaneRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MazePlaneRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazePlaneRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePlaneRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
