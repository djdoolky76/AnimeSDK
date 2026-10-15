#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterNatureRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D573890)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D573070)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D572F00)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D572BF0)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D572EA0)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D5731C0)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D572C70)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D573200)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5733D0)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D573570)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D573330)
#define RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D573290)

namespace RPG::GameCore
{
	class CharacterNatureExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "CharacterNatureExcelTable")->GetStaticField(0x12EE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "CharacterNatureExcelTable")->GetStaticField(0x12EE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterNatureRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterNatureRow*>**)UnitySDK::FromName("RPG.GameCore", "CharacterNatureExcelTable")->GetStaticField(0x12EF0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "CharacterNatureExcelTable")->GetStaticField(0x42B0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "CharacterNatureExcelTable")->GetStaticField(0x42B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterNatureRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterNatureRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterNatureRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CharacterNatureRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::CharacterNatureRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CharacterNatureRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::CharacterNatureRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CharacterNatureRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNATUREEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
