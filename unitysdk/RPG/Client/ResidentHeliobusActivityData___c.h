#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MainMissionData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RESIDENTHELIOBUSACTIVITYDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDEC1CE0)
#define RPG_CLIENT_RESIDENTHELIOBUSACTIVITYDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDEC1D10)
#define RPG_CLIENT_RESIDENTHELIOBUSACTIVITYDATA___C___GETCONDITION_B__19_0_OFFSET UNITYSDK_OFFSET(0xDEC1D20)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentHeliobusActivityData___c_TypeDefinitionIndex = 61762;

	class ResidentHeliobusActivityData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5BF60);
		}

		static ::System::Action** StaticGet___9__19_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5BF68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTHELIOBUSACTIVITYDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTHELIOBUSACTIVITYDATA___C_CTOR_OFFSET))(this);
		}

		::System::Void __GetCondition_b__19_0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTHELIOBUSACTIVITYDATA___C___GETCONDITION_B__19_0_OFFSET))(this, a1);
		}

	};
}
