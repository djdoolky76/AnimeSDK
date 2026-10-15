#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTalkNameColorRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA30430)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DA2FA60)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DA2F8E0)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DA2F5D0)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DA2F880)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DA2FB60)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DA2F650)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DA2FBA0)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA2FD70)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DA2FF30)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DA2FCD0)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DA2FC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTalkNameColorExcelTable_TypeDefinitionIndex = 14812;

	class RogueTalkNameColorExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RogueTalkNameColorExcelTable")->GetStaticField(0xECE0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::RogueTalkNameColorRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::RogueTalkNameColorRow*>**)UnitySDK::FromName("RPG.GameCore", "RogueTalkNameColorExcelTable")->GetStaticField(0xECE8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "RogueTalkNameColorExcelTable")->GetStaticField(0xECF0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "RogueTalkNameColorExcelTable")->GetStaticField(0x31C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::RogueTalkNameColorRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::RogueTalkNameColorRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::System::Object*, ::RPG::GameCore::RogueTalkNameColorRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::System::Object*, ::RPG::GameCore::RogueTalkNameColorRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueTalkNameColorRow* GetData(::RPG::Client::TextID a1)
		{
			return ((::RPG::GameCore::RogueTalkNameColorRow*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTalkNameColorRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTalkNameColorRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
