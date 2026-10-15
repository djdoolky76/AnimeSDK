#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
class BBBIAPEHABA;
class JOCIBBFJPMP;
class MJLNHAKANHC;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ChallengeGroupData; }
namespace System { class Object; }

#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC984720)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_GET_ISSPECIALTARGETACHIEVED_OFFSET UNITYSDK_OFFSET(0xE3E80)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_GET_ISTIERCE_OFFSET UNITYSDK_OFFSET(0x26270)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_SET_ISSPECIALTARGETACHIEVED_OFFSET UNITYSDK_OFFSET(0xE3E90)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_SET_ISTIERCE_OFFSET UNITYSDK_OFFSET(0x26280)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__GETNORMALMODEMAXLEVELSTARNUM_OFFSET UNITYSDK_OFFSET(0xC985590)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__GETNORMALMODEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC9853E0)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__GETTIERCESTARSTATE_OFFSET UNITYSDK_OFFSET(0xC984FA0)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__GETTOTALCHALLENGETIMES_OFFSET UNITYSDK_OFFSET(0xC984E40)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__SETLINEUP_OFFSET UNITYSDK_OFFSET(0xE3EB0)
#define RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__SETTIERCESTATISTICS_OFFSET UNITYSDK_OFFSET(0xE3EA0)

namespace RPG::Client
{
	struct alignas(8) ChallengeGroupStatisticsData
	{
		::System::UInt32 ChallengeGroupID; // 0x10
		::System::UInt32 ChallengeTimes; // 0x14
		::System::UInt32 MaxLevel; // 0x18
		::System::UInt32 Rounds; // 0x1C
		::System::UInt32 Score; // 0x20
		::System::UInt32 StarNum; // 0x24
		::System::Boolean _IsTierce_k__BackingField; // 0x28
		::System::Boolean _IsSpecialTargetAchieved_k__BackingField; // 0x29
		::System::Byte _padding0[0x6];
		::Il2CppArray<::System::Object*>* Lineups; // 0x30
		::System::Boolean get_IsTierce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_GET_ISTIERCE_OFFSET))(this);
		}

		::System::Void set_IsTierce(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_SET_ISTIERCE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSpecialTargetAchieved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_GET_ISSPECIALTARGETACHIEVED_OFFSET))(this);
		}

		::System::Void set_IsSpecialTargetAchieved(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_SET_ISSPECIALTARGETACHIEVED_OFFSET))(this, a1);
		}

		/*
		static ::RPG::Client::ChallengeGroupStatisticsData Create(::MJLNHAKANHC* a1)
		{
			return ((::RPG::Client::ChallengeGroupStatisticsData(*)(::MJLNHAKANHC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA_CREATE_OFFSET))(a1);
		}
		*/

		static ::System::Void _GetTierceStarState(::RPG::Client::ChallengeGroupData* a1, ::BBBIAPEHABA* a2, ::System::Boolean a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::RPG::Client::ChallengeGroupData*, ::BBBIAPEHABA*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__GETTIERCESTARSTATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 _GetNormalModeMaxLevel(::RPG::GameCore::ChallengeGroupType a1, ::MJLNHAKANHC* a2)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::ChallengeGroupType, ::MJLNHAKANHC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__GETNORMALMODEMAXLEVEL_OFFSET))(a1, a2);
		}

		static ::System::UInt32 _GetNormalModeMaxLevelStarNum(::RPG::GameCore::ChallengeGroupType a1, ::MJLNHAKANHC* a2)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::ChallengeGroupType, ::MJLNHAKANHC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__GETNORMALMODEMAXLEVELSTARNUM_OFFSET))(a1, a2);
		}

		static ::System::UInt32 _GetTotalChallengeTimes(::RPG::GameCore::ChallengeGroupType a1, ::MJLNHAKANHC* a2)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::ChallengeGroupType, ::MJLNHAKANHC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__GETTOTALCHALLENGETIMES_OFFSET))(a1, a2);
		}

		::System::Void _SetTierceStatistics(::RPG::Client::ChallengeGroupData* a1, ::BBBIAPEHABA* a2, ::System::Boolean a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeGroupData*, ::BBBIAPEHABA*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__SETTIERCESTATISTICS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SetLineup(::Google::Protobuf::Collections::RepeatedField_1<::JOCIBBFJPMP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::JOCIBBFJPMP*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPSTATISTICSDATA__SETLINEUP_OFFSET))(this, a1);
		}

	};
}
