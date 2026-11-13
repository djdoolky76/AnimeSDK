#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingPartnerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E68DF70)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E68D580)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E68D410)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E68D100)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E68D3B0)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E68D710)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E68D180)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E68D750)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E68D920)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E68DC00)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E68D880)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E68D7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingPartnerExcelTable_TypeDefinitionIndex = 12507;

	class SwordTrainingPartnerExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "SwordTrainingPartnerExcelTable")->GetStaticField(0x1E4C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerRow*>**)UnitySDK::FromName("RPG.GameCore", "SwordTrainingPartnerExcelTable")->GetStaticField(0x1E4C8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "SwordTrainingPartnerExcelTable")->GetStaticField(0x1E4D0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "SwordTrainingPartnerExcelTable")->GetStaticField(0x6790);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "SwordTrainingPartnerExcelTable")->GetStaticField(0x6791);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingPartnerRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingPartnerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SwordTrainingPartnerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingPartnerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
