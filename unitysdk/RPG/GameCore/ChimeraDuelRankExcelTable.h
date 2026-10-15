#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelRankRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5A8C10)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D5A8120)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D5A7FF0)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D5A7CE0)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D5A7F90)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D5A8460)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5A7D60)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5A84A0)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5A8670)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D5A88F0)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D5A85D0)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5A8530)

namespace RPG::GameCore
{
	class ChimeraDuelRankExcelTable : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "ChimeraDuelRankExcelTable")->GetStaticField(0x18620);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "ChimeraDuelRankExcelTable")->GetStaticField(0x18628);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRankRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRankRow*>**)UnitySDK::FromName("RPG.GameCore", "ChimeraDuelRankExcelTable")->GetStaticField(0x18630);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "ChimeraDuelRankExcelTable")->GetStaticField(0x5A60);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "ChimeraDuelRankExcelTable")->GetStaticField(0x5A61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRankRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRankRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRankRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRankRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelRankRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDuelRankRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChimeraDuelRankRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelRankRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
