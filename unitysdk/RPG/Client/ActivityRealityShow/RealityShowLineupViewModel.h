#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class MJCMGOEMKCC;
namespace RPG::Client { class MonsterData; }
namespace RPG::Client::ActivityRealityShow { class RealityShowLineupSlotViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEF17D0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_FIRSTSTAGEMONSTERS_OFFSET UNITYSDK_OFFSET(0xCEF1E50)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_MONSTERICONPATH_OFFSET UNITYSDK_OFFSET(0xCEF1D50)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_MONSTERID_OFFSET UNITYSDK_OFFSET(0xCEF1D30)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_MONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0xCEF1D60)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_MONSTERNAME_OFFSET UNITYSDK_OFFSET(0xCEF1D40)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_SECONDSTAGEMONSTERS_OFFSET UNITYSDK_OFFSET(0xCEF1E60)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_SHOULDWARNLINEUPCHANGE_OFFSET UNITYSDK_OFFSET(0xCEF1E80)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0xCEF1E70)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_WEAKNESSTYPES_OFFSET UNITYSDK_OFFSET(0xCEF1E40)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_REFRESH_OFFSET UNITYSDK_OFFSET(0xCEE7260)

namespace RPG::Client::ActivityRealityShow
{
	inline static constexpr unsigned int RealityShowLineupViewModel_TypeDefinitionIndex = 84907;

	class RealityShowLineupViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonsterData*>* _FirstStageMonsters_k__BackingField; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowLineupSlotViewModel*>* _Slots_k__BackingField; // 0x28
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _WeaknessTypes_k__BackingField; // 0x30
		::MJCMGOEMKCC* _Challenge; // 0x38
		::System::String* _MonsterIconPath_k__BackingField; // 0x40
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonsterData*>* _SecondStageMonsters_k__BackingField; // 0x48
		::System::UInt32 _MonsterID_k__BackingField; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _MonsterName_k__BackingField; // 0x58
		::System::Void _ctor(::MJCMGOEMKCC* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJCMGOEMKCC*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_MonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_MONSTERID_OFFSET))(this);
		}

		::RPG::Client::TextID get_MonsterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_MONSTERNAME_OFFSET))(this);
		}

		::System::String* get_MonsterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_MONSTERICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_MonsterLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_MONSTERLEVEL_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_WeaknessTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_WEAKNESSTYPES_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonsterData*>* get_FirstStageMonsters()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_FIRSTSTAGEMONSTERS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonsterData*>* get_SecondStageMonsters()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_SECONDSTAGEMONSTERS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowLineupSlotViewModel*>* get_Slots()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowLineupSlotViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_SLOTS_OFFSET))(this);
		}

		::System::Boolean get_ShouldWarnLineupChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_GET_SHOULDWARNLINEUPCHANGE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWLINEUPVIEWMODEL_REFRESH_OFFSET))(this);
		}

	};
}
