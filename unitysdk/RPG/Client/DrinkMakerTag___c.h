#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class DrinkMakerTag; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_DRINKMAKERTAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCCFA590)
#define RPG_CLIENT_DRINKMAKERTAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCCFA5D0)
#define RPG_CLIENT_DRINKMAKERTAG___C__GETALLTAGNAMESBYTYPE_B__0_0_OFFSET UNITYSDK_OFFSET(0xCCFA5E0)

namespace RPG::Client
{
	class DrinkMakerTag___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x333B0);
		}

		static ::System::Comparison_1<::RPG::Client::DrinkMakerTag*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::RPG::Client::DrinkMakerTag*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x333B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllTagNamesByType_b__0_0(::RPG::Client::DrinkMakerTag* a1, ::RPG::Client::DrinkMakerTag* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerTag*, ::RPG::Client::DrinkMakerTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG___C__GETALLTAGNAMESBYTYPE_B__0_0_OFFSET))(this, a1, a2);
		}

	};
}
