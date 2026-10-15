#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelMasterRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_ASZLINQENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1D5A3EE0)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5A4FA0)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D5A3F40)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D5A3DB0)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D5A3AA0)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D5A3D50)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D5A4090)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5A3B20)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5A40D0)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5A42A0)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D5A4C80)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D5A4200)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5A4160)

namespace RPG::GameCore
{
	class ChimeraDuelMasterExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ChimeraDuelMasterExcelTable")->GetStaticField(0x16B50);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterRow*>**)UnitySDK::FromName("RPG.GameCore", "ChimeraDuelMasterExcelTable")->GetStaticField(0x16B58);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "ChimeraDuelMasterExcelTable")->GetStaticField(0x16B60);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ChimeraDuelMasterExcelTable")->GetStaticField(0x5580);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ChimeraDuelMasterExcelTable")->GetStaticField(0x5581);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* AsZLinqEnumerable()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_ASZLINQENUMERABLE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelMasterRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDuelMasterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChimeraDuelMasterRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelMasterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
