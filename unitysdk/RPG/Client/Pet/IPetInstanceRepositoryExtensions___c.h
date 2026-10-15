#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Pet { class IPetInstance; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDAAB050)
#define RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDAAB090)
#define RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS___C__HASANYBLINDBOXPET_B__3_0_OFFSET UNITYSDK_OFFSET(0xDAAB0A0)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int IPetInstanceRepositoryExtensions___c_TypeDefinitionIndex = 75651;

	class IPetInstanceRepositoryExtensions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Pet", "<>c")->GetStaticField(0x14D30);
		}

		static ::System::Func_2<::RPG::Client::Pet::IPetInstance*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::Pet::IPetInstance*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.Pet", "<>c")->GetStaticField(0x14D38);
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
