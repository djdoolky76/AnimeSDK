#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Pet { class IPetInstance; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDAB48C0)
#define RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB4900)
#define RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS___C__HASANYBLINDBOXPET_B__3_0_OFFSET UNITYSDK_OFFSET(0xDAB4910)

namespace RPG::Client::Pet
{
	class IPetInstanceRepositoryExtensions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Pet", "<>c")->GetStaticField(0x14FC0);
		}

		static ::System::Func_2<::RPG::Client::Pet::IPetInstance*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::Pet::IPetInstance*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.Pet", "<>c")->GetStaticField(0x14FC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasAnyBlindBoxPet_b__3_0(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS___C__HASANYBLINDBOXPET_B__3_0_OFFSET))(this, a1);
		}

	};
}
