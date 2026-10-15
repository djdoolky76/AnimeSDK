#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OAAKAIBPENC;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDAE7A80)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDAE7AC0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER___C__GET_ISOWNMASTERTITLE_B__43_0_OFFSET UNITYSDK_OFFSET(0xDAE7AD0)

namespace RPG::Client::PetMarble
{
	class PetMarblePlayer___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.PetMarble", "<>c")->GetStaticField(0x1B6C0);
		}

		static ::System::Predicate_1<::OAAKAIBPENC*>** StaticGet___9__43_0()
		{
			return (::System::Predicate_1<::OAAKAIBPENC*>**)UnitySDK::FromName("RPG.Client.PetMarble", "<>c")->GetStaticField(0x1B6C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsOwnMasterTitle_b__43_0(::OAAKAIBPENC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OAAKAIBPENC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEPLAYER___C__GET_ISOWNMASTERTITLE_B__43_0_OFFSET))(this, a1);
		}

	};
}
