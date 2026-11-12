#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoxingClubActivityType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoxingClubChallengeSeasonConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E68C190)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETCHALLENGEIDTYPE_OFFSET UNITYSDK_OFFSET(0x1E68BFC0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E68AF10)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E68ADA0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETQUESTIDTYPE_OFFSET UNITYSDK_OFFSET(0x1E68B8B0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E68AA90)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E68AD40)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E68B0A0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E68AB10)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1E68C0A0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E68B0E0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E68B2B0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E68B590)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E68B210)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E68B170)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E68B990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex = 12985;

	class BoxingClubChallengeSeasonConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "BoxingClubChallengeSeasonConfigExcelTable")->GetStaticField(0x29C30);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BoxingClubActivityType>** StaticGet__ChallengeIDToType()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BoxingClubActivityType>**)UnitySDK::FromName("RPG.GameCore", "BoxingClubChallengeSeasonConfigExcelTable")->GetStaticField(0x29C38);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "BoxingClubChallengeSeasonConfigExcelTable")->GetStaticField(0x29C40);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BoxingClubActivityType>** StaticGet__QuestIDToType()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BoxingClubActivityType>**)UnitySDK::FromName("RPG.GameCore", "BoxingClubChallengeSeasonConfigExcelTable")->GetStaticField(0x29C48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*>**)UnitySDK::FromName("RPG.GameCore", "BoxingClubChallengeSeasonConfigExcelTable")->GetStaticField(0x29C50);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "BoxingClubChallengeSeasonConfigExcelTable")->GetStaticField(0x8650);
		}

		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "BoxingClubChallengeSeasonConfigExcelTable")->GetStaticField(0x8651);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "BoxingClubChallengeSeasonConfigExcelTable")->GetStaticField(0x8652);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BoxingClubChallengeSeasonConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::RPG::GameCore::BoxingClubActivityType GetQuestIDType(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BoxingClubActivityType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETQUESTIDTYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::BoxingClubActivityType GetChallengeIDType(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BoxingClubActivityType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETCHALLENGEIDTYPE_OFFSET))(a1);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}

	};
}
