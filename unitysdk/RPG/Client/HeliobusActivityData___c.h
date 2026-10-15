#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MainMissionData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSACTIVITYDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD313D70)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD313DB0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA___C___GETCONDITION_B__16_0_OFFSET UNITYSDK_OFFSET(0xD313DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusActivityData___c_TypeDefinitionIndex = 61634;

	class HeliobusActivityData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x135C0);
		}

		static ::System::Action** StaticGet___9__16_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x135C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA___C_CTOR_OFFSET))(this);
		}

		::System::Void __GetCondition_b__16_0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA___C___GETCONDITION_B__16_0_OFFSET))(this, a1);
		}

	};
}
