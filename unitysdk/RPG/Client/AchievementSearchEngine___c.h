#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AchievementData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACHIEVEMENTSEARCHENGINE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC3B3C00)
#define RPG_CLIENT_ACHIEVEMENTSEARCHENGINE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC3B3C40)
#define RPG_CLIENT_ACHIEVEMENTSEARCHENGINE___C__SEARCHBYNAME_B__5_0_OFFSET UNITYSDK_OFFSET(0xC3B3C50)
#define RPG_CLIENT_ACHIEVEMENTSEARCHENGINE___C__SEARCHBYNAME_B__5_1_OFFSET UNITYSDK_OFFSET(0xC3B3C70)

namespace RPG::Client
{
	class AchievementSearchEngine___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::AchievementData*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::AchievementData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x110A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x110A8);
		}

		static ::System::Func_2<::RPG::Client::AchievementData*, ::System::UInt32>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::RPG::Client::AchievementData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x110B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTSEARCHENGINE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTSEARCHENGINE___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _SearchByName_b__5_0(::RPG::Client::AchievementData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTSEARCHENGINE___C__SEARCHBYNAME_B__5_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SearchByName_b__5_1(::RPG::Client::AchievementData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTSEARCHENGINE___C__SEARCHBYNAME_B__5_1_OFFSET))(this, a1);
		}

	};
}
