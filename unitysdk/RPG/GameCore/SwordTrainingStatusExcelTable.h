#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingStatusRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E690A80)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E690090)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E68FF20)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E68FC10)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E68FEC0)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E690220)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E68FC90)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E690260)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E690430)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E690710)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E690390)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E6902F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingStatusExcelTable_TypeDefinitionIndex = 12496;

	class SwordTrainingStatusExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "SwordTrainingStatusExcelTable")->GetStaticField(0x1E730);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "SwordTrainingStatusExcelTable")->GetStaticField(0x1E738);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStatusRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStatusRow*>**)UnitySDK::FromName("RPG.GameCore", "SwordTrainingStatusExcelTable")->GetStaticField(0x1E740);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "SwordTrainingStatusExcelTable")->GetStaticField(0x67D0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "SwordTrainingStatusExcelTable")->GetStaticField(0x67D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStatusRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStatusRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStatusRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStatusRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingStatusRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingStatusRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SwordTrainingStatusRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingStatusRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
