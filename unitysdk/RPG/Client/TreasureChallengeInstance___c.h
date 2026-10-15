#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TreasureChallengeTargetStatus.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MainMissionData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASURECHALLENGEINSTANCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE31E810)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE31E840)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__ONENTERBATTLE_B__50_0_OFFSET UNITYSDK_OFFSET(0xE31E850)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__ONENTERBATTLE_B__50_1_OFFSET UNITYSDK_OFFSET(0xE31E860)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__ONENTERBATTLE_B__50_2_OFFSET UNITYSDK_OFFSET(0xE31E870)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__ONENTERBATTLE_B__50_3_OFFSET UNITYSDK_OFFSET(0xE31E880)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__TRYTRACKFIRSTSTARTMISSION_B__53_0_OFFSET UNITYSDK_OFFSET(0xE31E890)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureChallengeInstance___c_TypeDefinitionIndex = 66780;

	class TreasureChallengeInstance___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>** StaticGet___9__50_2()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x26290);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::RPG::Client::TreasureChallengeTargetStatus>** StaticGet___9__50_3()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::RPG::Client::TreasureChallengeTargetStatus>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x26298);
		}

		static ::System::Action** StaticGet___9__53_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x262A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x262A8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x262B0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>** StaticGet___9__50_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x262B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _OnEnterBattle_b__50_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__ONENTERBATTLE_B__50_0_OFFSET))(this, a1);
		}

		::System::UInt32 _OnEnterBattle_b__50_1(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__ONENTERBATTLE_B__50_1_OFFSET))(this, a1);
		}

		::System::UInt32 _OnEnterBattle_b__50_2(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__ONENTERBATTLE_B__50_2_OFFSET))(this, a1);
		}

		::RPG::Client::TreasureChallengeTargetStatus _OnEnterBattle_b__50_3(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::RPG::Client::TreasureChallengeTargetStatus(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__ONENTERBATTLE_B__50_3_OFFSET))(this, a1);
		}

		::System::Void _TryTrackFirstStartMission_b__53_0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__TRYTRACKFIRSTSTARTMISSION_B__53_0_OFFSET))(this, a1);
		}

	};
}
