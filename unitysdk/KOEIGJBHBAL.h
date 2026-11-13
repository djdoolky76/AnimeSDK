#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisibilityRefreshMode.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisibilityUpdateAction.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisibleReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NHHDCBBMHJJ.h"
#include "unitysdk/ONLHJBOOLLJ.h"
#include "unitysdk/System/Nullable_1.h"
namespace System { class Object; }

#define KOEIGJBHBAL_AOACPMLKOFK_OFFSET UNITYSDK_OFFSET(0x190FB6B0)
#define KOEIGJBHBAL_CGCINCDJCDE_OFFSET UNITYSDK_OFFSET(0x190FB5C0)
#define KOEIGJBHBAL_FKGFGCFAKMO_OFFSET UNITYSDK_OFFSET(0x190FB790)
#define KOEIGJBHBAL_KHJNHDOJDDP_OFFSET UNITYSDK_OFFSET(0x190FB7F0)
#define KOEIGJBHBAL_ODAABHPKFON_OFFSET UNITYSDK_OFFSET(0x190FB6F0)

inline static constexpr unsigned int KOEIGJBHBAL_TypeDefinitionIndex = 76053;

	class KOEIGJBHBAL : public ::System::Object
	{
	public:
		static ::System::Boolean CGCINCDJCDE(::RPG::Client::OpenWorld::BlockVisibleReason a1, ::ONLHJBOOLLJ a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::OpenWorld::BlockVisibleReason, ::ONLHJBOOLLJ))((::PBYTE)hIl2Cpp + KOEIGJBHBAL_CGCINCDJCDE_OFFSET))(a1, a2);
		}

		static ::System::Boolean AOACPMLKOFK(::RPG::Client::OpenWorld::BlockVisibleReason a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + KOEIGJBHBAL_AOACPMLKOFK_OFFSET))(a1);
		}

		static ::RPG::Client::OpenWorld::BlockVisibilityUpdateAction ODAABHPKFON(::System::Boolean a1, ::System::Nullable_1<::NHHDCBBMHJJ> a2, ::NHHDCBBMHJJ a3, ::RPG::Client::OpenWorld::BlockVisibilityRefreshMode a4)
		{
			return ((::RPG::Client::OpenWorld::BlockVisibilityUpdateAction(*)(::System::Boolean, ::System::Nullable_1<::NHHDCBBMHJJ>, ::NHHDCBBMHJJ, ::RPG::Client::OpenWorld::BlockVisibilityRefreshMode))((::PBYTE)hIl2Cpp + KOEIGJBHBAL_ODAABHPKFON_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void FKGFGCFAKMO(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + KOEIGJBHBAL_FKGFGCFAKMO_OFFSET))(a1, a2);
		}

		static ::NHHDCBBMHJJ KHJNHDOJDDP(::System::UInt64 a1)
		{
			return ((::NHHDCBBMHJJ(*)(::System::UInt64))((::PBYTE)hIl2Cpp + KOEIGJBHBAL_KHJNHDOJDDP_OFFSET))(a1);
		}

	};
