#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDPPBELHLEI_EntityActionType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
namespace System { class Object; }
namespace System { class String; }

#define LDPPBELHLEI_PKPKEDEPDKF_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0xB6496C0)
#define LDPPBELHLEI_PKPKEDEPDKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x187D0)
#define LDPPBELHLEI_PKPKEDEPDKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x18710)
#define LDPPBELHLEI_PKPKEDEPDKF_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0xB6495A0)
#define LDPPBELHLEI_PKPKEDEPDKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x187E0)

	struct alignas(8) LDPPBELHLEI_PKPKEDEPDKF
	{
		::RPG::GameCore::EntityType GMPGDEINODK; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x14
		::LDPPBELHLEI_EntityActionType EOFPHIPDLHB; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* FCOOFCJFFNP; // 0x20
		/*
		::System::Boolean Equals(::LDPPBELHLEI_PKPKEDEPDKF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDPPBELHLEI_PKPKEDEPDKF))((::PBYTE)hIl2Cpp + LDPPBELHLEI_PKPKEDEPDKF_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_PKPKEDEPDKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPPBELHLEI_PKPKEDEPDKF_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::LDPPBELHLEI_PKPKEDEPDKF a1, ::LDPPBELHLEI_PKPKEDEPDKF a2)
		{
			return ((::System::Boolean(*)(::LDPPBELHLEI_PKPKEDEPDKF, ::LDPPBELHLEI_PKPKEDEPDKF))((::PBYTE)hIl2Cpp + LDPPBELHLEI_PKPKEDEPDKF_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::LDPPBELHLEI_PKPKEDEPDKF a1, ::LDPPBELHLEI_PKPKEDEPDKF a2)
		{
			return ((::System::Boolean(*)(::LDPPBELHLEI_PKPKEDEPDKF, ::LDPPBELHLEI_PKPKEDEPDKF))((::PBYTE)hIl2Cpp + LDPPBELHLEI_PKPKEDEPDKF_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

	};
