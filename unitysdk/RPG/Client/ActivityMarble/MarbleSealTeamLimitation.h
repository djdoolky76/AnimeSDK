#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityMarble { class MarbleSealTeamLimitation; }
namespace RPG::Client::ActivityMarble { class MarbleTeamSelection; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7EE590)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_GETEMPTYLIMITATION_OFFSET UNITYSDK_OFFSET(0x1C800880)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_ISSEALBANED_OFFSET UNITYSDK_OFFSET(0x1C7E9CE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_ISSEALMUSTINTEAM_OFFSET UNITYSDK_OFFSET(0x1C800940)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_ISTEAMVALID_OFFSET UNITYSDK_OFFSET(0x1C800A90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_SETBANSEALIDLIST_OFFSET UNITYSDK_OFFSET(0x1C7EE5A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_SETMUSTINTEAMSEALIDLIST_OFFSET UNITYSDK_OFFSET(0x1C8008F0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealTeamLimitation_TypeDefinitionIndex = 78304;

	class MarbleSealTeamLimitation : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* _MustInTeamSealIDList; // 0x10
		::System::Collections::Generic::IList_1<::System::UInt32>* _BanSealIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealTeamLimitation* GetEmptyLimitation()
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamLimitation*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_GETEMPTYLIMITATION_OFFSET))();
		}

		::System::Void SetBanSealIDList(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_SETBANSEALIDLIST_OFFSET))(this, a1);
		}

		::System::Void SetMustInTeamSealIDList(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_SETMUSTINTEAMSEALIDLIST_OFFSET))(this, a1);
		}

		::System::Boolean IsSealBaned(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_ISSEALBANED_OFFSET))(this, a1);
		}

		::System::Boolean IsSealMustInTeam(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_ISSEALMUSTINTEAM_OFFSET))(this, a1);
		}

		::System::Boolean IsTeamValid(::RPG::Client::ActivityMarble::MarbleTeamSelection* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleTeamSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_ISTEAMVALID_OFFSET))(this, a1);
		}

	};
}
