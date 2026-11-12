#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ScheduleData; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define HKKDCCADHHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16CA1520)
#define HKKDCCADHHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16CA1560)
#define HKKDCCADHHA___C__GETUNSEENINSCHEDULECHALLENGEIDS_B__1_0_OFFSET UNITYSDK_OFFSET(0x16CA1570)

inline static constexpr unsigned int HKKDCCADHHA___c_TypeDefinitionIndex = 84877;

	class HKKDCCADHHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15280);
		}

		static ::System::Action_1<::RPG::Client::ScheduleData*>** StaticGet___9__1_0()
		{
			return (::System::Action_1<::RPG::Client::ScheduleData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15288);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKKDCCADHHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKDCCADHHA___C_CTOR_OFFSET))(this);
		}

		::System::Void _GetUnseenInScheduleChallengeIDs_b__1_0(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + HKKDCCADHHA___C__GETUNSEENINSCHEDULECHALLENGEIDS_B__1_0_OFFSET))(this, a1);
		}

	};
